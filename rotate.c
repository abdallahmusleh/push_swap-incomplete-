#include "push_swap.h"

void rotate(s_list **stack)
{
    if (!*stack || !stack)//extra things to add?
        return(0);
    s_list *primary;
    s_list *tmp;
    primary = *stack;
    *stack = *stack->next;
    tmp = *stack;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = primary;
    primary->next = NULL;
}
void ra(s_list **stack_a)
{
    rotate(stack_a);
    write (1, "ra", 2);
}
void rb(s_list **stack_b)
{
    rotate(stack_b);
    write (1, "rb", 2);
}
void rr(s_list **stack_a, s_list **stack_b)
{
    rotate(stack_a);
    rotate(stack_b);
    write (1, "rr", 2);
}
