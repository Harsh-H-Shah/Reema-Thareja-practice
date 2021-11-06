#include <stdio.h>

int main()
{
    int m,n;
    printf("Enter the two numbers m and n :\n");
    scanf("%d%d",&m,&n);
    printf("The odd numbers from m to n are :\n");
    for(int i=m;i<=n;i++){
      if(i%2==1){
        printf("%d\n",i);
      }
    }

    return 0;
}
