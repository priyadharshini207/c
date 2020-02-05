#include <stdio.h>
void area();   
int main()
{
  area();   
  return 0;
}
void area()
{
  int square_area,square_side;
  printf("Enter the side of square :");
  scanf("%d",&square_side);
  square_area = square_side * square_side;
  printf("Area of Square = %d",square_area);
}