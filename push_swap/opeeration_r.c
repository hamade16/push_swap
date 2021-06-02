#include "./push_swap.h"

int ra(stack *stack)
{
    int j;
    int b;

    j = stack->st_p_a - 1;
    if (!stack->st_a)
        return 0;
    while (j > 0)
    {
        b = stack->st_a[j];
        stack->st_a[j] = stack->st_a[j - 1];
        stack->st_a[j - 1] = b;
        j--;
    }
    return (1);
}

int rb(stack *stack)
{
    int j;
    int b;

    j = stack->st_p_b - 1;
    if (!stack->st_b)
        return 0;
    while (j > 0)
    {
        b = stack->st_b[j];
        stack->st_b[j] = stack->st_b[j - 1];
        stack->st_b[j - 1] = b;
        j--;
    }
    return (1);
}

int rra(stack *stack)
{
    int j;
    int a;

    j = 0;
    if (!stack->st_a)
        return (0);
    while (j < (stack->st_p_a - 1))
    {
        a = stack->st_a[j];
        stack->st_a[j] = stack->st_a[j + 1];
        stack->st_a[j + 1] = a;
        j++;
    }
    return(1);
}

int rrb(stack *stack)
{
    int j;
    int a;

    j = 0;
    if (!stack->st_b)
        return (0);
    while (j < (stack->st_p_b - 1))
    {
        a = stack->st_b[j];
        stack->st_b[j] = stack->st_b[j + 1];
        stack->st_b[j + 1] = a;
        j++;
    }
    return(1);
}