#include <stdio.h>
#include <math.h>

float Area(float a, float b, float c){
  float s = (a+b+c)/2;
  return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main()
{
    float a,b,c,ans;
    printf("Enter the sides of the triangle :\n");
    scanf("%f%f%f",&a,&b,&c);
    ans = Area(a,b,c);
    printf("The area of the triangle is %.2f",ans);
    
    return 0;
}
