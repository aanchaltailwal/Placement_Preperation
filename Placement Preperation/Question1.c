/*Palindromic_sub_string_Length
Problem Statement:
Given a string, find the length of the maximum length palindromic sub string .

Suppose 'l' is the length of maximum length palindromic sub string, check whether 'l' is prime number or not, if it is prime ,then print 'PRIME' else 'NOT PRIME' .

Input:
test cases, t
string, s

Output:
Desired O/p

Constraints:
String length<=10000

Time Limit:
1 sec

Example 1:
Input
3
aabaaz
aavsba
ghsdffssff

Output
PRIME
PRIME
NOT PRIME

Sample I/O Explanation:
*/
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Palindrome
}

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int checkPalindromePrime(char str[]) {
    int maxPalLength = 0;
    int len = strlen(str);

    // Finding the length of the longest palindromic substring
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (isPalindrome(str, i, j) && j - i + 1 > maxPalLength) {
                maxPalLength = j - i + 1;
            }
        }
    }

    // Checking if the length of the longest palindromic substring is prime or not
    return isPrime(maxPalLength);
}

// Do not edit this part of code
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char str[10001];
        scanf("%s", str);
        if (checkPalindromePrime(str)) {
            printf("PRIME\n");
        } else {
            printf("NOT PRIME\n");
        }
    }

    return 0;
}
