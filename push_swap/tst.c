
#include "./push_swap.h"

void    push_swap(stack *stack)
{
    int j;
    int t;

    
    t = 0;
    if (stack->st_p_a == 2)
    {
        if(stack->st_a[1] > stack->st_a[0])
            swap_a(stack);
    }
    while (stack->st_p_a > 3)
        push_b(stack);
   trois_al(stack);
    while (stack->st_p_b > 0)
    {
        push_a(stack);
        if (stack->st_a[stack->st_p_a - 1] > stack->st_a[0])
        {
            ra(stack);
        }
        else
        {
            j = 1;
            while (j < stack->st_p_a)
            {
                if(stack->st_a[stack->st_p_a - 1] > stack->st_a[j])
                {
                    while (j < stack->st_p_a - 2)
                    {
                        swap_a(stack);
                        push_b(stack);
                        t++;
                    }
                    swap_a(stack);
                    while (t > 0)
                    {
                        push_a(stack);
                        t--;
                    }
                    break;
                }
                j++;
            }
        }
    }
}