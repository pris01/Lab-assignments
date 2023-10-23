#include<stdio.h>
#include<math.h>
int main()
{
    int side;
    float height, area;
    printf("Enter the length of the side\n");
    scanf("%d", &side);
    height = side*pow(3,0.5)/2;
    area = (pow(3,0.5)/4)*pow(side,2);
    printf("The area of the equilateral triangle is %f\n", area);
    printf("The height of the equilateral triangle is %f", height);
    return 0;


}