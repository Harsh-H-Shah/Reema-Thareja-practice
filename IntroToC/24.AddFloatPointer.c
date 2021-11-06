#include <stdio.h>
#include <math.h>

void add(float *a, float *b){
  *a = *a + *b;
}

int main()
{
    float p,q,*a,*b;
    printf("Enter the two numbers :\n");
    scanf("%f%f",&p,&q);
    a = &p;
    b = &q;
    add(a,b);
    printf("The sum of the 2 numbers is %.3f",p);

    return 0;
}
