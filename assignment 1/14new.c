#include<stdio.h>
#include<math.h>

int main()
{
  int x1,x2,y1,y2;
  float dis;

  printf("Enter the first co-ordinate\n");
  scanf("%d %d", &x1, &y1);
  printf("Enter the second co-ordinate\n");
  scanf("%d %d", &x2, &y2);
  printf("The co-ordinates are \n(%d,%d)\n(%d,%d)", x1, y1, x2,y2);

  dis= sqrt(pow(x2-x1,2)+pow(y2-y1,2));

  printf("\n Distance between the two points (%d,%d) and (%d,%d) is %f", x1,y1,x2,y2,dis);
  return 0;

}