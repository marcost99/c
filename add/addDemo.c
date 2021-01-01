#include <heymath.h>//The library (*.a) has the funcions add() and sub() origned of files add.c and sub.c. What is utility of dependency heymath.h?
#include <stdio.h>
 
int main()
{
  int x= 10, y = 20;
  printf("\n%d + %d = %d", x, y, add(x, y));
  printf("\n%d - %d = %d", x, y, sub(x, y));
  return 0;
}