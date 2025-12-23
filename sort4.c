#include "push_swap.h"

void smallest_in_second(s_list **stack_a, s_list **stack_b)
{
    sa(stack_a);
    pb(stack_a, stack_b);
}
void smallest_in_third(s_list **stack_a, s_list **stack_b)
{
    ra(stack_a);
    ra(stack_a);
    pb(stack_a, stack_b);
}
void smallest_in_last(s_list **stack_a, s_list **stack_b)
{
    rra(stack_a);
    pb(stack_a, stack_b);
}
void	sort4(s_list **stack_a, s_list **stack_b)
{
	int a;
    int b;
    int c;
    int d;

	a = (*stack_a)->content;
    b = (*stack_a)->next->content;
	c = (*stack_a)->next->next->content;
	d = (*stack_a)->next->next->next->content;
    if (a < b && a < c && a < d)
        pb(stack_a, stack_b);
    if (a > b && b < c && b < d)
        smallest_in_second(stack_a, stack_b);
    if (a > c && b > c && c < d)
        smallest_in_third(stack_a, stack_b);
    if (d < b && d < c && a > d)
        smallest_in_last(stack_a, stack_b);
    sort3(stack_a);
    pa(stack_a, stack_b);
}
