/* stack.c: Implementation of operations around static stack */
#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

void push(STACK *ps, int x)
{
  if (ps->size == STACKSIZE) {
    fputs("Error: stack overflow\n", stderr);
    abort();
  } else
    ps->items[ps->size++] = x;
}

int pop(STACK *ps)
{
  if (ps->size == 0){
    fputs("Error: stack underflow\n", stderr);
    abort();
  } else
    return ps->items[--ps->size];
}

int main()
{
  return 0;
}
