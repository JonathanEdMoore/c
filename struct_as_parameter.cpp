#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle {
  int length;
  int width;
};

struct Rectangle *fun() {
  struct Rectangle *p;
  p=(struct Rectangle *)malloc(sizeof(struct Rectangle));

  p->length=15;
  p->width=7;

  return p;
}

int main() {
  struct Rectangle *ptr=fun();

  printf("Length %d\nWidth %d", ptr->length, ptr->width);

  return 0;
}