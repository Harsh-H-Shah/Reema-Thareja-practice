#include <stdio.h>

int main()
{
    double num;
    printf("Enter the floating point number :\n");
    scanf("%lf",&num);
    printf("The number in exponential form is :\n1.%.2e\n2.%.4e\n3.%.8e",num,num,num);

    return 0;
}
