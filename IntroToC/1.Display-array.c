#include <stdio.h>

int main()
{
    int nums[10];
    printf("Enter 10 numbers : ");
    for(int i=0;i<10;i++){
      scanf("%d",&nums[i]);
    }
    for(int i=1;i<=10;i++){
      printf("%d",nums[i-1]);
      if (i%3==0){
        printf(",");
      }
    }

    return 0;
}
