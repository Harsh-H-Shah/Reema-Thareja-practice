#include <stdio.h>

int maxInt(int x, int y, int z){
  int max=x;
  if (y>x){
    max = y;
  }
  if (z>max){
    return z;
  }
  else{
    return max;
  }
}

int main()
{
    int a,b,c,max;
    printf("Enter 3 integers :\n");
    scanf("%d%d%d",&a,&b,&c);
    max = maxInt(a,b,c);
    printf("The largest of the numbers is %d",max);

    return 0;
}