#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Point
{
  float x;
  float y;
};
float calculateDistance(struct Point p1, struct Point p2)
{
  float dx = p1.x - p2.x;
  float dy = p1.y - p2.y;
  float distance = sqrt((dx*dx)+(dy*dy));
  return distance;
}
float calculatePerimeter(struct Point *polygon, int numPoints)
{
  float perimeter = 0.0;
  for(int i=0; i<numPoints; i++)
    {
      struct Point current = polygon[i];
      struct Point next = polygon[(i+1)%numPoints];
      perimeter += calculateDistance(current, next);
    }
  return perimeter;
}

int main()
{
    struct Point p [4] = {{0,0},{0,5},{5,5},{5,0}};
    float perimeter = calculatePerimeter(p,4);
    printf("Perimeter: %.2f",perimeter);
    return 0;
}
