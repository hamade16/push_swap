#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct stackElement
{
	int	*st_a;
	int	*st_b;
	int st_p_a;
	int	st_p_b;
} stack;

int	ft_atoi(const char *str);
int   swap_a(stack *stack);
int   swap_b(stack *stack);
void    ss(stack *stack);
int     push_b(stack *stack);
int 	push_a(stack *stack);
int 	ra(stack *stack);
int 	rb(stack *stack);
int 	rra(stack *stack);
int rrb(stack *stack);
void    rr(stack *stack);
void    rrr(stack *stack);
void	trois_al(stack *stack);
void	five_al(stack *stack);

#endif
