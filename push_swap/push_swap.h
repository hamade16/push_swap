#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct stackElement
{
	int value;
	struct stackElement *next;
}stackElement, *stack;

#endif
