// program to find distance between two points
#include<stdio.h>
#include<math.h>

int main()
{
  int x1,x2,y1,y2;
  float dis;

  printf("Enter the x value of first co-ordinate\n");
  scanf("%d", &x1);
  printf("Enter the y value of first co-ordinate\n");
  scanf("%d", &y1);
  printf("Enter the x value of second co-ordinate\n");
  scanf("%d", &x2);
  printf("Enter the y value of second co-ordinate\n");
  scanf("%d", &y2);
  printf("\n first co-ordinate (%d,%d)\n", x1, y1);
  printf("\n Second co-ordinate (%d,%d)", x2, y2);

  dis= sqrt(pow(x2-x1,2)+pow(y2-y1,2));

  printf("\n Distance between the two points (%d,%d) and (%d,%d) is %f", x1,y1,x2,y2,dis);
  return 0;

}