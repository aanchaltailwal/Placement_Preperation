#from a given array find the length of smallest subsegment you need to remove to make all remaining elements unique. In other words,you can choose two integers l and r (1≤l≤r≤n) and delete integers al,al+1,…,ar from the array. Remaining elements should be pairwise distinct. you can remove at most one subsegment.
#Input Format
#The first line of the input contains a single integer n the number of elements in the given array.
#The next line contains n spaced integers a1,a2,…,an the elements of the array.
#Constraints
#(1≤n≤2000) (1≤ai≤10^9)
#Output Format
#Print a single integer — the minimum size of the subsegment you need to remove to make all elements of the array pairwise distinct. If no subsegment needs to be removed, print 0.
#Sample Input 0
#3
#1 2 3
#Sample Output 0
#0
#Sample Input 1
#4
#1 1 2 2
#Sample Output 1
#2

#include <stdio.h>
#include <limits.h>

int min_subsegment_length(int n, int arr[]) {
    int last_occurrence[1000000001] = {0}; // Assuming the maximum value of ai is 10^9
    int min_length = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (last_occurrence[arr[i]] != 0) {
            min_length = (i - last_occurrence[arr[i]] + 1) < min_length ? (i - last_occurrence[arr[i]] + 1) : min_length;
        }
        last_occurrence[arr[i]] = i + 1;
    }
    return min_length == INT_MAX ? 0 : min_length;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", min_subsegment_length(n, arr));
    return 0;
}

