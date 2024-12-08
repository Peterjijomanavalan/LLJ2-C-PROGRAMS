#include <stdio.h>

int replaceZeroWithOne(int num) {
    int result = 0, multiplier = 1;

    // If the number is 0, directly return 1
    if (num == 0)
        return 1;

    while (num > 0) {
        int digit = num % 10; // Extract the last digit
        if (digit == 0) {
            digit = 1; // Replace 0 with 1
        }
        result += digit * multiplier;
        multiplier *= 10; // Move to the next place value
        num /= 10; // Remove the last digit
    }

    return result;
}

int main() {
    int number;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Replace 0s with 1s
    int modifiedNumber = replaceZeroWithOne(number);

    // Output the result
    printf("Modified number: %d\n", modifiedNumber);

    return 0;
}
