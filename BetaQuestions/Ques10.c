/*Coprime Triples
Problem Statement:
You are given a sequence a1, a2, ..., aN. Count the number of triples (i, j, k) such that 1 ≤ i < j < k ≤ N and GCD(ai, aj, ak) = 1. Here GCD stands for the Greatest Common Divisor.

Input:
The first line of input contains a single integer N - the length of the sequence.

The second line contains N space-separated integers - a1, a2, ..., aN respectively.

Output:
Output the required number of triples on the first line of the output.


Constraints:
1 ≤ N ≤ 100000
1 ≤ ai ≤ 1000000

Time Limit:
1 sec

Example 1:
Input
4
1 2 3 4

Output
4

Sample I/O Explanation:
Any triple will be a coprime one.*/

#include <stdio.h>
#include <stdlib.h>

// Function to count coprime triples
long long count_coprime_triples(int n, int A[]) {
    // Array to store frequency of each divisor
    int MAX_A = 1000000;
    int *freq = (int*)calloc(MAX_A + 1, sizeof(int));
    
    // Count frequency of each number in A
    for (int i = 0; i < n; ++i) {
        freq[A[i]]++;
    }
    
    // Array to store number of elements divisible by each g
    long long *div_count = (long long*)calloc(MAX_A + 1, sizeof(long long));
    
    // Populate div_count[g] which denotes the number of elements divisible by g
    for (int g = 1; g <= MAX_A; ++g) {
        for (int multiple = g; multiple <= MAX_A; multiple += g) {
            div_count[g] += freq[multiple];
        }
    }
    
    // Calculate the total number of coprime triples
    long long total_coprime_triples = 0;
    
    // Iterate through each possible value of gcd (g)
    for (int g = 1; g <= MAX_A; ++g) {
        if (div_count[g] > 0) {
            // Calculate the number of valid triples (i, j, k) where gcd(ai, aj, ak) = g
            long long count = div_count[g] * (div_count[g] - 1) * (div_count[g] - 2) / 6;
            total_coprime_triples += count;
        }
    }
    
    free(freq);
    free(div_count);
    
    return total_coprime_triples;
}

// Main function to read input and output result
int main() {
    int n;
    scanf("%d", &n);
    int* A = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("%lld\n", count_coprime_triples(n, A));

    free(A);
    return 0;
}
