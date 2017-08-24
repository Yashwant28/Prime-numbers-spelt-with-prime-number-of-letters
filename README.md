# Prime-numbers-spelt-with-prime-number-of-letters

Problem : Prime numbers spelt with prime number of letters


If you like numbers, you may have been fascinated by prime numbers. These are numbers that have no divisors other than 1 and themselves. If we consider the primes 2 and 3, and write them in words, we write TWO and THREE. Both have a prime number of letters in their spelling. Not all prime numbers have this property. 

Write a program to count the number of primes between a given pair of integers (including the given integers if they are primes) that have a prime number of characters when written in words. The blanks are not counted when we write the numbers in words. For example, ONE HUNDRED AND THREE has only 18 characters.

Input 

One line containing two integers separated by space giving N1 and N2

Output 

One integer M giving the number of primes P such that N1 <= P <= N2 that are such that when P is written in words, it has a prime number of letters.

Constraint 

N2 <= 99999

Example 1

Input: 
1 10

Output: 
3

Explanation: 
The primes between 1 and 10 and 2, 3, 5 and 7. Of these, 5 written in words is FIVE and has a non prime number of letters and others have prime number of letters (viz TWO, THREE and SEVEN).

Example 2 
Input: 
1100 1130

Output: 
1

Explanation: 
The primes between 1100 and 1130 are 1103, 1109, 1117, 1123 and 1129. When these are written in words, we get 
ONE THOUSAND ONE HUNDRED AND THREE 
ONE THOUSAND ONE HUNDRED AND NINE 
ONE THOUSAND ONE HUNDRED AND SEVENTEEN 
ONE THOUSAND ONE HUNDRED AND TWENTY THREE 
ONE THOUSAND ONE HUNDRED AND TWENTY NINE

The count of characters in the above are 29, 28, 33, 35 and 34 
Of these only for 1103 the count of characters is prime.
