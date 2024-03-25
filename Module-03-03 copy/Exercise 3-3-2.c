#include <stdio.h>
#include <string.h>

struct box {
int itemnum, height, width, depth;
char color[20];
float x, y, z;
};

int main(void)
{
  struct box box1 = {3, 3, 2, 5, "red", 10.21, 20.62, 35.72};
  struct box box2 = {4, 2, 4, 1, "blue", 11.87, 23.45, 18.99};

  int vol1 = box1.height * box1.width * box1.depth;
  int vol2 = box2.height * box2.width * box2.depth;

  if (vol1 > vol2) {
    strcpy(box1.color, "green");
    box1.x = 0;
    box1.y = 0;
    box1.z = 0;
    printf("Box 1 Volume: %d\n", vol1);
    printf("Box 2 Volume: %d\n", vol2);
    printf("[Box 1] - Item: %d, Color: %s, Position: (%.2f, %.2f, %.2f), Height: %d, Width: %d, Depth: %d\n", box1.itemnum, box1.color, box1.x, box1.y, box1.z, box1.height, box1.width, box1.depth);
  } else {
    strcpy(box2.color, "green");
    box2.x = 0;
    box2.y = 0;
    box2.z = 0;
    printf("Box 1 Volume: %d\n", vol1);
    printf("Box 2 Volume: %d\n", vol2);
    printf("[Box 2] - Item: %d, Color: %s, Position: (%.2f, %.2f, %.2f), Height: %d, Width: %d, Depth: %d\n", box2.itemnum, box2.color, box2.x, box2.y, box2.z, box2.height, box2.width, box2.depth);
  }
  return 0;
}