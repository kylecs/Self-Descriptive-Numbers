Self Describing Numbers

This is a program that will iterate over all numbers between 0 and the maximum value of unsigned long long int and check them
for the property of self description.

In order for a number to be considered self-describing, it must account for all of its digits with descriptive pairs made by 
placing all digits into groups of two starting with the first digit. All digits must be included in one and only one pair, 
meaning only numbers with an even number of digits are eligible.
For example, spiting the number 3254 into these pairs will result in the pairs (3,2) and (5,4).
This means that the second digit in the pair must appear in the full number a number of times exactly equal to the first number 
in the pairs.
For example, in the group (1, 5) from the number 1502, the digit 5 must occur exactly once in the whole number.
If a number satisfies this condition for all of its pairs, then the number is self descriptive.

An example of a number that satisfies this condition is 22. Split into a descriptive pair it is (2,2). This says that the digit 2 must occur exactly 2 times in the entire number, which it does. Because the number only has a descriptive pair and that pair 
is accurate, this number is self descriptive.

Illustrated the process with a larger number
10123133 is another self descriptive number. Splitting the number into descriptive pairs yields: 
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




