#include <stdio.h>
#include <string.h>

struct box {
int itemnum, height, width, depth;
char color[20];
float x, y, z;
};

int main(void)
{
  struct box boxes[100];

  boxes[0] = (struct box){3, 3, 2, 5, "red", 10.21, 20.62, 35.72};
  boxes[1] = (struct box){4, 2, 4, 1, "blue", 11.87, 23.45, 18.99};

  printf("[Box 0] - Item: %d, Color: %s, Position: (%.2f, %.2f, %.2f), Height: %d, Width: %d, Depth: %d\n", boxes[0].itemnum, boxes[0].color, boxes[0].x, boxes[0].y, boxes[0].z, boxes[0].height, boxes[0].width, boxes[0].depth);

  printf("[Box 1] - Item: %d, Color: %s, Position: (%.2f, %.2f, %.2f), Height: %d, Width: %d, Depth: %d\n", boxes[1].itemnum, boxes[1].color, boxes[1].x, boxes[1].y, boxes[1].z, boxes[1].height, boxes[1].width, boxes[1].depth);

  return 0;
}