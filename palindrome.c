#include "palindrome.h"

int is_palindrome(int num) {
    // Negative numbers are not palindromes
    if (num < 0) {
        return 0;
    }

    // Store the original number to compare later
    int original_num = num;
    int reversed_num = 0;

    // Reverse the number
    while (num != 0) {
        int remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    // Check if the original number is equal to the reversed number
    return (original_num == reversed_num);
}