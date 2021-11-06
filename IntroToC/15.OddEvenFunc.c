#include <stdio.h>

const char* Check(int n){
  if(n%2==0){
    return "The number is divisible by 2";
  }
  else{
    return "The number is indivisible by 2";
  }
}

int main()
{
    int num;
    printf("Enter the number :\n");
    scanf("%d",&num);
    printf("%s",Check(num));
    
    return 0;
}
