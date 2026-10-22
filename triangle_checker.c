#include "triangle_checker.h"

int check_right_angle_triangle(float angle1, float angle2) {
    // Check if the angles are greater than 0
    if (angle1 <= 0.0f || angle2 <= 0.0f) {
        return -1; // invalid input
    }
    
    // the sum of the two angles must be less than 180 degrees, because the sum of all angles in a triangle is 180 degrees
    if ((angle1 + angle2) >= 180.0f) {
        return -1; // invalid input
    }

    // Calculate the third angle
    float angle3 = 180.0f - (angle1 + angle2);

    // Check if any angle is equal to 90 degrees
    if (angle1 == 90.0f || angle2 == 90.0f || angle3 == 90.0f) {
        return 1; // Right-angle triangle
    }

    return 0; // Not a right-angle triangle
}