/*MOST_WATER
Problem Statement:
Aashna has her maths test tomorrow. She needs to find the container with maximum water.
Given N non-negative integers a_1, a_2, ..., a_n where each represents a point at coordinate (i, a_i) . N vertical lines are drawn such that the two endpoints of line i is at (i, a_i) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.

Input:
The first line of input contains an integer T denoting the number of test cases. Each test case contains an integer N followed by N space separated integers.


Output:
For each test case, the output is the integer denoting the maximum area of water that can be contained ( maximum area instead of maximum volume as working with 2D)

Constraints:
1<=T<=100
2<=N<=50

Time Limit:
1 sec

Example 1:
Input
2
4
1 5 4 3
5
3 1 2 4 5

Output
6
12

Sample I/O Explanation:
1. 5 and 3 are distance 2 apart. So the size of the base = 2. Height of container = min(5, 3) = 3. So total area = 3 * 2 = 6. 2. 5 and 3 are distance 4 apart. So the size of the base = 4. Height of container = min(5, 3) = 3. So total area = 4 * 3 = 12.

*/

#include <stdio.h>

int getMaxArea(int a[], int n) {
    int left = 0;
    int right = n - 1;
    int maxArea = 0;

    while (left < right) {
        int height = (a[left] < a[right]) ? a[left] : a[right];
        int width = right - left;
        int area = height * width;

        if (area > maxArea) {
            maxArea = area;
        }

        if (a[left] < a[right]) {
            left++;
        } else {
            right--;
        }
    }
    return maxArea;
}

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        printf("%d\n", getMaxArea(a, n));
    }
    return 0;
}
