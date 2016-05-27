#Self Describing Numbers

This is a program that will iterate over all numbers between 0 and the maximum value of unsigned long long int and check them
for the property of self description.

This means that that a number of the form abcd for every other pair of nubmers, the second digit will appear the number of times as the first digit. And every digit in the number will be described by these pairs.
For example, the number 22 has two two's.

Another larger self descriptive number is 10123133. Splitting the number into descriptive pairs yields: 
(1,0), (1,2), (3,1), (3,3)
Going through and testing the pairs shows that the entire number should have one 0, one 2, three 1's, and three 3's. Because all of these are accurate and all digits of the original number are described by them, this number is self descriptive.

Some more examples of self descriptive numbers are:
10123331
10143133
10143331
10153133
10153331
10163133
10163331
10173133
10173331
10183133
10183331
10193133
10193331
10212332
10213223
10232132
10233221
10311233
10311433
10311533
10311633
10311733
10311833
10311933
10313312
10313314
10313315
10313316
10313317
10313318
10313319
10322123
10322321
10331231
10331431
10331531




