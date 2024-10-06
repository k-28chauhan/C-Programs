#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *str) {
    int low = 0;
    int high = strlen(str) - 1;

    // Keep comparing characters while they are same
    while (low < high) {
        if (str[low] != str[high]) {
            return false; // not a palindrome.
        }
        low++; // move the low index forward
        high--; // move the high index backwards
    }
    return true; // is a palindrome
}

int main() {
    char str[] = "naman";
    if(isPalindrome(str))
    {
        printf("string is palindrome");
    }
    else{
        printf("String is not palindrome");
    }
    
    return 0;
}