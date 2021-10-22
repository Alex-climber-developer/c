#include <stdio.h>
int main()
{
  // printf("hello world\n");
  // char name[20];
  // scanf("%s", name);
  // printf("hi %s ", name );
  
  int start, stop, step;
  printf("generate progression\n"
  "enter start, stop, step ");
  scanf("%d%d%d", &start, &stop, &step);
  
  int x=  start;
  int inc = (x > stop)? -1: 1;
  while (x *inc < stop *inc )
  {
    if (step == 0){break;};
    printf("x: %d\n", x);
    x+= step;
  }
  printf(" end x- %d " ,x);
  return 0;
}