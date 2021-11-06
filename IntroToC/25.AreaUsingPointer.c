#include <stdio.h>
#include <math.h>

void findArea(int *a, int *b, int *c, float *area){
  int s = (*a+*b+*c)/2;
  *area = sqrt(s*(s-*a)*(s-*b)*(s-*c));
}

int main()
{
    int a,b,c,*x,*y,*z;
    float area,*tri;
    printf("Enter the sides of the triangle :\n");
    scanf("%d%d%d",&a,&b,&c);
    x = &a;
    y = &b;
    z = &c;
    tri = &area;
    findArea(x,y,z,tri);
    printf("Area of the triangle is %.2f", area);

    return 0;
}
