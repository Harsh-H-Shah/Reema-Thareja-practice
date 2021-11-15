#include <stdio.h>

int main(){
  int marks[20][5], sum=0, low;
  for(int i=0;i<20;i++){
    for(int j=0;j<5;j++){
      pritnf("Enter the marks of student[%d][%d] in 5 subjects\n",i,j);
      scanf("%d",&marks[i][j]);
    }
  }
  printf("\nAverage of all the subjects are :\n");
  for(int j=0;j<5;j++){
    for(int i=0;i<20;i++){
      sum+=marks[i][j];
    }
    printf("%d ",sum/20);
    sum=0;
  }
  printf("\nAverage of the student marks are :\n");
  for(int i=0;i<20;i++){
    for(int j=0;j<5;j++){
      sum+=marks[i][j];
    }
    printf("%d ",sum/5);
    sum=0;
  }
  printf("\nStudents scoring below 50 are :\n");
  for(int i=0;i<20;i++){
    for(int j=0;j<5;j++){
      sum+=marks[i][j];
    }
      if(sum/5<50){
        printf("%d ",i+1);
      }
  }
  printf("\nMarks of all the students are :\n");
  for(int i=0;i<20;i++){
    for(int j=0;j<5;j++){
      printf("%d ",marks[i][j]);
    }
    printf("\n");
  }
  return 0;
}