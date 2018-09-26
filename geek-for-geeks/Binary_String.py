"""
https://practice.geeksforgeeks.org/problems/binary-string/0
Given a binary string, count number of substrings that start and end with 1. For example, if the input string is “00100101”, then there are three substrings “1001”, “100101” and “101”.

Input:
The first line of input contains an integer T denoting the number of test cases.
Each test case consist of an integer 'n' denoting the string length and next line is followed by a binary string .

Output:
Print the number of substring starting and ending with 1 in a separate line.

Constraints:

1 ≤ T ≤ 40
1 ≤ |s| ≤ 1000


Example:

Input:
1
4
1111
Output:
6
"""
t = int(input(''))
while t>0:
    n = int(input(''))
    s = input('')
    k = 0
    for i in s:
        if(i == '1'):
            k=k+1
    k = (k*(k-1))/2
    print(int(k))
    t=t-1
