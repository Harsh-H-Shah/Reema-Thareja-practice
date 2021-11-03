#include <stdio.h>

int main()
{
    int i,count=0;
    char text[100];
    printf("Provide the text\n");
    scanf("%s",text);
    while(text[i]){
      if(text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u'||text[i]=='A'||text[i]=='E'||text[i]=='I'||text[i]=='O'||text[i]=='U'){
        count++;
      }
      i++;
    }
    printf("The number of vowels in this text is %d",count);

    return 0;
}
