/* stack.h: array stack data structure */

#ifndef STACK_H_
#define STACK_H_
#include <stdlib.h>

#define STACKSIZE 5

typedef struct
{
  size_t size;
  int items[STACKSIZE];
} STACK;

/* Basic operations */
void push();
int pop();

#endif // STACK_H_
