
#include "./push_swap.h"

int push_b(stack *stack)
{
    if (!stack->st_a)
        return 0;
   stack->st_b[stack->st_p_b] = stack->st_a[stack->st_p_a - 1];
    stack->st_p_a--;
    stack->st_p_b++;
    return(1);
}

int push_a(stack *stack)
{
    if (!stack->st_b)
        return 0;
    stack->st_a[stack->st_p_a] = stack->st_b[stack->st_p_b - 1];
    stack->st_p_b--;
    stack->st_p_a++;
    return(1);
}

void    rrr(stack *stack)
{
    rra(stack);
    rrb(stack);
}