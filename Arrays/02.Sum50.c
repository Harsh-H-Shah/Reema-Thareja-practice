#include <stdio.h>

int main(){
  int nums[100];
  printf("Enter the elements:\n");
  for(int i = 0; i < 100; i++){
    scanf("%d", &nums[i]);
  }
  for(int i = 0; i < 100; i++){
    for(int j = i + 1; j < 100; j++){
      if(nums[i] + nums[j] == 50){
        printf("%d %d\n", nums[i], nums[j]);
      }
    }
  }
  return 0;
}