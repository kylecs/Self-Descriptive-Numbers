#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

/*
 Pair of two numbers, one descriptor and one number
*/
typedef struct num_group {
	int desc;
	int num;
} t_num_group;

/*
Check a number for self description, takes a vector of t_num_group and the original number
*/
bool checkNumber(unsigned long long int number, vector<t_num_group> groups) {
	//check for duplicates
	for (int i = 0; i < groups.size(); i++) {
		for (int n = 0; n < groups.size(); n++) {
			if (i == n) continue;
			if (groups[i].num == groups[n].num) return false;
		}
	}
	//check for zero descriptions, which cannot be valid
	for (int i = 0; i < groups.size(); i++) {
		if (groups[i].desc == 0) return false; {
		}
	}
	string snum = to_string(number);
	for (int i = 0; i < groups.size(); i++) {
		int desc = groups[i].desc;
		int num = groups[i].num;
		char cnum = '0' + num;
		for (int n = 0; n < snum.length(); n++) {
			if (snum[n] == cnum) {
				snum[n] = '_';
				desc--;
			}
		}
		if (desc != 0) {
			return false;
		}
	}
	for (int n = 0; n < snum.length(); n++) {
		if (snum[n] != '_') return false;
	}
	return true;
}
/*
Main function, iterates through all numbers with an even number of digits and calls the checking function on that number.
*/
int main() {
	ofstream out;
	out.open("output.txt");
	if (!out.is_open()) return -1;
	for (long long unsigned int base = 10, i = 0; i < 8; i++ , base *= 100) {
		int places = i * 2 + 2;
		for (long long unsigned int off = 0; off < base * 9; off++) {
			vector<t_num_group> groups;
			long long unsigned int full = base + off;
			string str = to_string(full);
			for (int i = 0; i < places; i += 2) {
				t_num_group temp;
				temp.desc = str[i] - '0';
				temp.num = str[i + 1] - '0';
				groups.push_back(temp);
			}
			//cout << "Checking " << full << endl;
			//system("pause");
			if (checkNumber(full, groups)) {
				cout << "Found: " << full << endl;
				out << full << endl;
			}
		}
	}
	system("pause");
	return 0;
}
