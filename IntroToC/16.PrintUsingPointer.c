#include <stdio.h>

int main()
{
    char str[100]="Programming in C is Fun";
    char *p;
    
    p = str;
    
    while(*p){
      printf("%c",*p++);
    }

    return 0;
}
