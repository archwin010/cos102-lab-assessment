#include <stdio.h>
#include "palindrome.h"
#include "triangle_checker.h"

int main(void) {

    // right-angle triangle checker
   float angle1 = 0.0f;
   float angle2 = 0.0f;
   
   // Prompt the user for input
   printf("*** Triangle Checker ***\n");
   printf("Enter the first angle of the triangle: ");
   if (scanf("%f", &angle1) != 1) {
       printf("Invalid input. Please enter a valid number.\n");
       return 1;
   }

   printf("Enter the second angle of the triangle: ");
   if (scanf("%f", &angle2) != 1) {
       printf("Invalid input. Please enter a valid number.\n");
       return 1;
   }

   // Check if the triangle is a right-angle triangle
   int result = check_right_angle_triangle(angle1, angle2);
   if (result == 1) {
       printf("The triangle is a right-angle triangle.\n");
   } else if (result == 0) {
       printf("The triangle is not a right-angle triangle.\n");
   } else {
       printf("Invalid input. Angles must be greater than 0 and their sum must be less than 180 degrees.\n");
   }

    // palindrome checker
    int num = 0;

    // Prompt the user for input
    printf("\n*** Palindrome Checker ***\n");
    printf("Enter an integer to check if it's a palindrome: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    // Check if the number is a palindrome
    if (is_palindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}