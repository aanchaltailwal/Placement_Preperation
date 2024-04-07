/* REACH_NTH_STAIR
Problem Statement:
There are N stairs, a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top (order does matter).

Input:
The first line contains an integer 'T' denoting the total number of test cases. In each test cases, an integer N will be given.

Output:
For each testcase, in a new line, print number of possible ways to reach Nth stair. Answer your output % 10^9+7.

Constraints:
1<=T<=10^5
1<=N<=10^5

Time Limit:
1 sec

Example 1:
Input
3
4
10
24

Output
5
89
75025 */

#include <stdio.h>

#define MOD 1000000007

// Function to calculate the nth Fibonacci number
long long fib(int n) {
    long long a = 0, b = 1, c;
    if (n == 0)
        return a;
    for (int i = 2; i <= n; i++) {
        c = (a + b) % MOD;
        a = b;
        b = c;
    }
    return b;
}

// Function to count the number of ways to reach nth stair
long long countWays(int n) {
    // Return Fibonacci of (n+1)th stair
    return fib(n + 1);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        long long ways = countWays(N);
        printf("%lld\n", ways);
    }

    return 0;
}
