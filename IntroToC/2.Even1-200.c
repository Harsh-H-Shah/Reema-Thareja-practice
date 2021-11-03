#include <stdio.h>

int main()
{
    int count=0,sum=0,n;
    printf("The even numbers till 200 are : \n");
    for(n=1;n<=200;n++){
      if(n%2==0){
        printf("%d\n",n);
        count++;
        sum+=n;
      }
    }
    printf("The number of even numbers are %d amd their sum is %d",count,sum);

    return 0;
}
