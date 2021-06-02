
#include "./push_swap.h"

void	trois_al(stack *stack)
{
	if (stack->st_a[2] > stack->st_a[1])
		swap_a(stack);
	if (stack->st_a[2] > stack->st_a[1] && stack->st_a[1] > stack->st_a[0])
	{
		swap_a(stack);
		rra(stack);
	}
	if (stack->st_a[2] > stack->st_a[1] && stack->st_a[2] > stack->st_a[0] && stack->st_a[1] < stack->st_a[0])
		ra(stack);
	if (stack->st_a[1] > stack->st_a[0] && stack->st_a[0] > stack->st_a[2])
	{
		swap_a(stack);
		ra(stack);
	}
	if (stack->st_a[2] > stack->st_a[0] && stack->st_a[1] > stack->st_a[2])
		rra(stack);
}

void	five_al(stack *stack)
{
	push_b(stack);
	push_b(stack);
	trois_al(stack);
	push_a(stack);
	if(stack->st_a[stack->st_p_a - 1] > stack->st_a[0])
		ra(stack);
	if (stack->st_a[stack->st_p_a - 1] < stack->st_a[0] && stack->st_a[stack->st_p_a - 1] > stack->st_a[1])
	{
		swap_a(stack);
		push_b(stack);
		swap_a(stack);
		push_a(stack);
	}
	if (stack->st_a[stack->st_p_a - 1] < stack->st_a[1] && stack->st_a[stack->st_p_a - 1] > stack->st_a[2])
	{
		swap_a(stack);
	}
	push_a(stack);
	if(stack->st_a[stack->st_p_a - 1] > stack->st_a[0])
		ra(stack);
		if (stack->st_a[stack->st_p_a - 1] < stack->st_a[0] && stack->st_a[stack->st_p_a - 1] > stack->st_a[1])
	{
		swap_a(stack);
		push_b(stack);
		swap_a(stack);
		push_b(stack);
		swap_a(stack);
		push_a(stack);
		push_a(stack);
	}
	if (stack->st_a[stack->st_p_a - 1] < stack->st_a[1] && stack->st_a[stack->st_p_a - 1] > stack->st_a[2])
	{
		swap_a(stack);
		push_b(stack);
		swap_a(stack);
		push_a(stack);
	}
	if(stack->st_a[stack->st_p_a - 1] < stack->st_a[2] && stack->st_a[stack->st_p_a - 1] > stack->st_a[3])
		swap_a(stack);
}

int		main(int argc, char **argv)
{
	stack stack;
	int i;

	stack.st_p_a = 0;
	stack.st_p_b = 0;
	i = 0;
	stack.st_a = (int *)malloc((argc - 1) * sizeof(int));
	stack.st_b = (int *)malloc((argc - 1) * sizeof(int));
	while (i < argc - 1)
	{
		stack.st_a[i] = ft_atoi(argv[argc - i - 1]);
		i++;
		stack.st_p_a++;
	}

	//ss(stack);
	//printf ("%d \n", stack.st_p_a);
	//push_b(&stack);
	//push_a(&stack);
	//ra(&stack);
	//rb(&stack);
	//rrr(&stack);
	if (argc == 4)
		trois_al(&stack);
	if (argc == 6)
		five_al(&stack);
	i = stack.st_p_a - 1;
	while(i >= 0)
	{
		printf ("%d\n", stack.st_a[i]);
		i--;
	}
	/*if (is_empty_stack(sta))
		printf("la pile est vide");*/
	return 0;
}