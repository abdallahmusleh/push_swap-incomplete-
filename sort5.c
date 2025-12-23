#include "push_swap.h"

static void smallest_in_second_to_last(s_list **stack_a, s_list **stack_b)
{
    rra(stack_a);
    rra(stack_a);
    pb(stack_a, stack_b);
}
void	sort5(s_list **stack_a, s_list **stack_b)
{
    int a;
    int b;
    int c;
    int d;
    int e;

	a = (*stack_a)->content;
    b = (*stack_a)->next->content;
	c = (*stack_a)->next->next->content;
	d = (*stack_a)->next->next->next->content;
    d = (*stack_a)->next->next->next->content;
    d = (*stack_a)->next->next->next->next->content;
    if (a < b && a < c && a < d && a < e)
        pb(stack_a, stack_b);
    if (a > b && b < c && b < d && b < e)
        smallest_in_second(stack_a, stack_b);
    if (a > c && b > c && c < d && c < e)
        smallest_in_third(stack_a, stack_b);
    if (e < a && e < b && e < c && e < d)
        smallest_in_last(stack_a, stack_b);
    if (d < a && d < b && d < c && e > d)
        smallest_in_second_to_last(stack_a, stack_b)
    sort4(stack_a);
    pa(stack_a, stack_b);
}
