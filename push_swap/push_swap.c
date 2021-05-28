
#include "./push_swap.h"

stack	new_stack(void)
{
	return NULL;
}

bool	is_empty_stack(stack st)
{
	if (st == NULL)
		return (true);
	return (false);
}

int		main(void)
{
	stack sta = new_stack();
	if (is_empty_stack(sta))
		printf("la pile est vide");
	return 0;
}

