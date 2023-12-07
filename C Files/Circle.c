#include <stdio.h>
#include <math.h>

int main(){
  
  const double PI = 3.14159265358979323;
  double radius;
  double cir;
  double area;

  printf("\nEnter the radius of a circle: ");
  scanf("%lf",&radius);

  cir = 2 * PI * radius;
  area = PI * pow(radius,2);

  printf("circumference: %-20lf\n",cir);
  printf("the area is: %-20lf",area);
  

  return 0;
}