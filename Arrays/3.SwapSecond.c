#include <stdio.h>
#include <conio.h>

int main(){
  int n, nums[10];
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    printf("Enter the element %d: ", i+1);
    scanf("%d", &nums[i]);
  }
  printf("The array before swapping: ");
  for(int i = 0; i < n; i++){
    printf("%d ", nums[i]);
  }
  int temp = nums[1];
  nums[1] = nums[n-1];
  nums[n-1] = temp;
  printf("\nThe array after swapping: ");
  for(int i = 0; i < n; i++){
    printf("%d ", nums[i]);
  }
  getch();
  return 0;
}