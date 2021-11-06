#include <stdio.h>
#include <math.h>

void armstrong(int n){
  int check,sum=0;
  check = n;
  while(n){
    sum+=pow((n%10),3);
    n/=10;
  }
  if(check == sum){
    printf("The number is a armstrong number.\n");
  }
  else{
    printf("The number is not a armstrong number.\n");
  }
}

int main()
{
    int num,check=1;
    while(check){
      printf("Enter the number to check if its an armstrong number or enter -1 to exit :\n");
      scanf("%d",&num);
      if(num==-1){
        break;
      }
      armstrong(num);
    }
    

    return 0;
}
