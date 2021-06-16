
#include "./push_swap.h"

void	trois_al(stack *stack)
{
	if (stack->st_a[2] > stack->st_a[1] && stack->st_a[0] > stack->st_a[2])
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
	int *tri;
	int j;
	int i;
	int b;
	int z;

	j = 0;
	i = 0;
	z = 0;
	tri = (int *)malloc((stack->st_p_a) * sizeof(int));
	while (j < (stack->st_p_a))
	{
		tri[j] = stack->st_a[j];
		j++;
	}
	while(i < (stack->st_p_a - 1))
	{
		j = i + 1;
		while(j < stack->st_p_a)
		{
			if(tri[i] > tri[j])
			{
				b = tri[i];
				tri[i] = tri[j];
				tri[j] = b;
			}
			j++;
		}
		i++;
	}
	j = 0;
	if (stack->st_a[stack->st_p_a - 1] == tri[0] || stack->st_a[stack->st_p_a - 1] == tri[1])
	{
		i = 0;
		push_b(stack);
		while (stack->st_p_a > 3)
		{
			if (stack->st_a[stack->st_p_a - 1 - i] == tri[0] || stack->st_a[stack->st_p_a - 1 - i] == tri[1])
			{
				if (i == 0)
				{
					push_b(stack);
					break;
				}
				else
				{
					ra(stack);
					push_b(stack);
					break;
				}
			}
			if (stack->st_a[j] == tri[0] || stack->st_a[j] == tri[1])
			{
				if (j == 0)
				{
					rra(stack);
					push_b(stack);
				}
				else
				{
					rra(stack);
					rra(stack);
					push_b(stack);
				}
			}
			i++;
			j++;
		}
	}
	else
	{
		i = 1;
		while (stack->st_p_a > 3)
		{
			if (stack->st_a[stack->st_p_a - 1 - i] == tri[0] || stack->st_a[stack->st_p_a - 1 - i] == tri[1])
			{
				//printf ("%d", stack->st_p_a);
				if (i == 1)
				{
					ra(stack);
					push_b(stack);
					z = 1;
				}
				else
				{
					ra(stack);
					ra(stack);
					push_b(stack);
					z = 2;
					//printf ("%d", stack->st_p_a);
				}
				i--;
			}
			if(stack->st_a[j] == tri[0] || stack->st_a[j] == tri[1])
			{
				if (j == 0)
				{
					if (z == 2)
					{
						ra(stack);
						push_b(stack);
					}
					else if (z == 1)
					{
						rra(stack);
						rra(stack);
						push_b(stack);
					}
					
					else
					{
						rra(stack);
						push_b(stack);
						j--;
					}
				}
				else
				{
					if (z == 2)
					{
						push_b(stack);
					}
					else if(z == 1)
					{
						rra(stack);
						rra(stack);
						push_b(stack);
					}
					else 
					{
						rra(stack);
						rra(stack);
						push_b(stack);
					}
					i--;
				}
			}
			i++;
			j++;
			if (stack->st_a[stack->st_p_a - 1] == tri[0] || stack->st_a[stack->st_p_a - 1] == tri[1])
			{
				push_b(stack);
			}
		}
	}
	if (stack->st_b[1] < stack->st_b[0])
		swap_b(stack);
	trois_al(stack);
	push_a(stack);
	push_a(stack);
	free(tri);
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
	/*if (argc == 4)
		trois_al(&stack);
	if (argc == 6)
		five_al(&stack);*/
	five_al(&stack);
	free(stack.st_a);
	free(stack.st_b);
	//push_swap(&stack);
	// i = stack.st_p_a - 1;
	// while(i >= 0)
	// {
	// 	printf ("%d\n", stack.st_a[i]);
	// 	i--;
	// }
	/*if (is_empty_stack(sta))
		printf("la pile est vide");*/
	return 0;
}