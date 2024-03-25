#include <stdio.h>

struct box {
int itemnum, height, width, depth;
char color[20];
float x, y, z;
};

int main(void)
{
  struct box box1 = {3, 3, 2, 5, "red", 10.21, 20.62, 35.72};

  printf("Item: %d, Color: %s, Position: (%.2f, %.2f, %.2f), Height: %d, Width: %d, Depth: %d\n", box1.itemnum, box1.color, box1.x, box1.y, box1.z, box1.height, box1.width, box1.depth);
  return 0;
}