#include<stdio.h>
#include<math.h>
int main()
{
    float h, r, v, pi= 3.14;
    printf("Enter the radius of the cylinder\n");
    scanf("%f", &r);
    printf("Enter the height of the cylinder\n");
    scanf("%f", &h);
    v = pi*pow(r,2)*h;
    printf("The volume of the cylinder is %f", v);
    return 0;
}