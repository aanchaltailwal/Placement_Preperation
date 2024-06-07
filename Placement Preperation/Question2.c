/*Sumita and equal array
Problem Statement:
Sumita is playing with a Array A of size N. she wants to make all the values of A to be equal. she can multiply any value any number of times by X, Y and Z. Your task is to tell her whether she can do it or not. Print "She can" if she can do it else print "She can't" without ""

Input:
First line of the input will contain T (No. of test cases).
For each test case, first line will contain four space separated integers denoting N, X, Y and Z.
Then next line will contain N space separated integers of A

Output:
For every test case, print the required answer in a new line.

Constraints:
1 ≤ T ≤ 5
2 ≤ N ≤ 10^5
X, Y, Z ∈ {2, 3, 5, 7}
1 ≤ Ai ≤ 10^9

Time Limit:
1 sec

Example 1:
Input
2
2 2 2 2
2 4
3 2 3 2
2 6 7

Output
She can
She can't

Sample I/O Explanation:*/

#include <stdio.h>
#define SIZEN 100005

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int can_she(int *A, int N, int X, int Y, int Z) {
    int common_divisor = A[0];
    for (int i = 1; i < N; i++) {
        common_divisor = gcd(common_divisor, A[i]);
    }
    
    return (common_divisor % X == 0 && common_divisor % Y == 0 && common_divisor % Z == 0);
}

//Do not edit this part of code 
int main() {
    int T, N, X, Y, Z;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d %d", &N, &X, &Y, &Z);
        int A[SIZEN];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        
        if (can_she(A, N, X, Y, Z))
            printf("She can\n");
        else
            printf("She can't\n");
    }
    return 0;
}
