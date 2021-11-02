#include <stdio.h>
#include <math.h>

int main()
{
    int dur;
    float prin,simint,compint,temp,rate;
    printf("Enter your principle amount : ");
    scanf("%f",&prin);
    printf("Enter the rate of interest and the duration :\n");
    scanf("%f",&rate);
    scanf("%d",&dur);
    simint = (prin*rate*dur)/100;
    compint = prin*pow(1+rate/100,dur)-prin;
    printf("The simple interest is %.2f and compound interest is %.2f",simint,compint);

    return 0;
}
