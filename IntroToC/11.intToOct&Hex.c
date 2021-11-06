#include <stdio.h>

int decToOct(int num){
  int ans=0,i=1;
  while(num){
    ans+=num%8*i;
    num/=8;
    i*=10;
  }
  return ans;
}

int main()
{
    int num,onum,hnum;
    printf("Enter the number :\n");
    scanf("%d",&num);
    onum = decToOct(num);
    printf("The integer in decimal is %d, in octal is %d and in hex is %x",num,onum,num);

    return 0;
}
