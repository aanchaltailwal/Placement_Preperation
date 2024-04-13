/*Isha has an array containing n integers. Let's assume k as the arithmetic mean of these elements (It is not necessary that k is an integer).

k=sum of elements/n

Isha wants to delete exactly two elements from the array and do not want k(mean) to change.

Your task is to calculate the number of pairs of positions [i,j] (i

Input Format

The first line contains one integer n (3≤n≤2*10^5) — the number of elements in the array.

The second line contains a sequence of integers a1,a2,…,an (0≤ai≤10^9), where ai is the i-th element of the array.

The sum of n over all testcases doesn't exceed 2*10^5.

Constraints

3≤n≤2*10^5 0≤ai≤10^9

Output Format

Print one integer — the number of pairs of positions [i,j] (i

Sample Input 0

4
8 8 8 8
Sample Output 0

6
Sample Input 1

3
50 20 10
Sample Output 1

0*/

#include <stdio.h>

int count_pairs(int n, int arr[]) {
    long long total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Calculate the sum without considering elements at positions i and j
            long long sum_without_ij = total_sum - arr[i] - arr[j];
            // Calculate the mean without considering elements at positions i and j
            double mean_without_ij = (double)sum_without_ij / (n - 2);
            // If removing elements at positions i and j doesn't change the mean, increment count
            if (arr[i] + arr[j] == mean_without_ij * 2) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", count_pairs(n, arr));
    return 0;
}
