#include <stdio.h>

int main()
{
    int n;
    float avg,sum=0;
    printf("Enter the number n :\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
      sum+=i;
    }
    avg = sum/n;
    printf("The sum and average from 1 to %d is %.0f and %.2f",n,sum,avg);

    return 0;
}
