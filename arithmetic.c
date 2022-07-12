#include <stdio.h>
int main()
{
    printf("ARITHMETIC OPERATION\n");
    int num_one;
    int num_two;
    printf("Enter Your First Number\n");
    scanf("%i", &num_one);

    printf("Enter Your Second Number\n");
    scanf("%i", &num_two);

    int sum = num_one + num_two;
    printf("The Sum Is: %i\n", sum);

    int diff = num_one - num_two;
    printf("The Difference Is: %i\n", diff);

    int product = num_one * num_two;
    printf("The Product Is: %i\n", product);

    int divi = num_one / num_two;
    printf("The division Is: %d\n", divi);

    return 0;
}