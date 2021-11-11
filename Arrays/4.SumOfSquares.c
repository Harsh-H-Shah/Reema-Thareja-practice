#include <stdio.h>

int main(){
  int n,nums[10];
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  printf("Enter the elements: ");
  for(int i=0;i<n;i++){
    scanf("%d",&nums[i]);
  }
  printf("The Squares of the numbers are: ");
  for(int i=0;i<n;i++){
    printf("%d ",nums[i]*nums[i]);
  }
  return 0;
}