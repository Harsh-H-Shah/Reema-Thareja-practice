#include <stdio.h>

int main()
{
    int i,count=0;
    char text[100];
    printf("Provide your address\n");
    scanf("%s",text);
    printf("The address of the user is :\n");
    while(text[i]){
      printf("%c",text[i]);
      if(text[i]==','){
        printf("\n");
      }
      i++;
    }

    return 0;
}
