#include <stdio.h>
int main()
{
    int integer_number;
    float float_number;
    printf("  GETTING USERS INTERGER AND FLOAT \n");

    printf("  ENTER AN INTEGER \n");
    scanf("%i", &integer_number);
    printf("The integer Number is: %i\n", integer_number);

    printf("  ENTER A FLOAT \n");
    scanf("%f", &float_number);
    printf("The integer Number is: %f\n", float_number);
    return 0;
}
