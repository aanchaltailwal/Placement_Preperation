/* #MIN_CHANGES_DISTINCT
Problem Statement:
Given a string s, find the minimum number of changes required to it so that all substrings of the string become distinct.
Note: length of string is atmost 26.
Input:
The first line contains an integer T, number of test cases. For each testcase there is only one line containing s, a string of atmost 26 characters.
Output:
For each testcase in new line, print the minimum number of changes to the string required to make all of its substrings distinct.

Constraints:
1 <= T <= 100
1 <= |s| <= 26

Time Limit:
1 sec

Example 1:
Input
3
aab
aebaecedabbee
ab

Output
1
8
0
Sample I/O Explanation:
Testcase 1: If we change one instance of 'a' to any character from 'c' to 'z', we get all distinct substrings. Testcase 2: We need to change 2 a's, 2 b's and 4 e's to get distinct substrings. Testcase 3: As no change is required hence 0. */

#include <stdio.h>
#include <string.h>

#define MAX_LEN 26

int minChangesDistinct(char *s) {
    int changes = 0;
    int freq[MAX_LEN] = {0};

    // Count frequency of characters
    for (int i = 0; s[i] != '\0'; i++)
        freq[s[i] - 'a']++;

    // Check for each character frequency
    for (int i = 0; i < MAX_LEN; i++) {
        if (freq[i] > 1) {
            changes += freq[i] - 1;
        }
    }

    return changes;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char s[MAX_LEN + 1];
        scanf("%s", s);

        int changes = minChangesDistinct(s);
        printf("%d\n", changes);
    }

    return 0;
}
