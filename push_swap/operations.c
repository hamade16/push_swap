
#include "push_swap.h"

int   swap_a(stack *stack)
{
    int b;

    if (!stack->st_a)
        return 0;
    b = stack->st_a[stack->st_p_a - 1];
    stack->st_a[stack->st_p_a - 1] = stack->st_a[stack->st_p_a - 2];
    stack->st_a[stack->st_p_a - 2] = b;
    write (1, "sa\n", 3);
    return 1;
}

int    swap_b(stack *stack)
{
    int a;

    if (!stack->st_b)
        return 0;
    a = stack->st_b[stack->st_p_b - 1];
    stack->st_b[stack->st_p_b - 1] = stack->st_b[stack->st_p_b - 2];
    stack->st_b[stack->st_p_b - 2] = a;
    write (1, "sb\n", 3);
    return (1);
}


void    ss(stack *stack)
{

    swap_a(stack);
    swap_b(stack);
}

void    rr(stack *stack)
{
    ra(stack);
    rb(stack);
}