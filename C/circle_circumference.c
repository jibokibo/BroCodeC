#include <stdio.h>

int main(){

  const double PI = 3.14159; // const = not changable
  double radius;
  double circumference;
  double area;
  printf("Enter the radius of a circle: ");
  scanf("%lf", &radius);

  circumference = 2 * PI * radius;
  area = PI * radius * radius;

  printf("circumference: %lf \n area: %lf", circumference, area);

  return 0;
}