#include <stdio.h>

int main()
{
    int m,n,flag=0;
    printf("Enter the two numbers m and n :\n");
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++){
      for(int j=2;j<i;j++){
        if(i%j==0){
          flag=1;
          break;
        }
      }
      if(flag==0){
        printf("%d\n",i);
      }
      flag=0;
    }

    return 0;
}
