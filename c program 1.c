#include<stdio.h>
#include<math.h>
int main() {
    double principal, rate, time, compoundInterest;
    int n;
    // Input for principal amount
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    if (principal <= 0) {
        printf("Error: Principal amount must be greater than 0.\n");
        return 1;
    }
    // Input for annual rate of interest
    printf("Enter the annual rate of interest (in percentage): ");
    scanf("%lf", &rate);
    if (rate <= 0) {
        printf("Error: Rate of interest must be greater than 0.\n");
        return 1;
    }
    // Input for time in years
    printf("Enter the time (in years): ");
    scanf("%lf", &time);
    if (time <= 0) {
        printf("Error: Time must be greater than 0.\n");
        return 1;
    }
    // Input for number of compounding periods per year
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Error: Number of compounding periods must be greater than 0.\n");
        return 1;
    }
    // Calculating compound interest
    rate = rate / 100;
    compoundInterest = principal * pow((1 + rate / n), n * time);
    // Output results
    printf("The compound interest is: %.2lf\n", compoundInterest - principal);
    printf("The total amount after interest is: %.2lf\n", compoundInterest);
    return 0;
}
