#include <stdio.h>

int stringToInt(const char *str) {
    int result = 0;
    int sign = 1; // 1 for positive, -1 for negative

    // Handle negative sign if present
    if (*str == '-') {
        sign = -1;
        str++;
    }

    // Iterate through each character of the string
    while (*str != '\0') {
        // Check if the character is a digit
        if (*str >= '0' && *str <= '9') {
            // Update the result based on the digit
            result = result * 10 + (*str - '0');
        } 

        // Move to the next character
        str++;
    }

    return sign * result;
}

int main() {
    const char str[] = "12345daniel";
    int num = stringToInt(str);

    printf("String: %s\nInteger: %d\n", str, num);

    return 0;
}