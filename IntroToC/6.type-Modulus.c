#include <stdio.h>

int main()
{
    float num;
    int digit;
    printf("Enter the number : \n");
    scanf("%f",&num);
    digit = num;
    printf("The rightmost digit of the integral part of the number is : %d",digit%10);

    return 0;
}
