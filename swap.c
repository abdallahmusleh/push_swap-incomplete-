#include "push_swap.h"

void swap(s_list **stack)
{
    if(!stack || !*stack || !*stack->next)
        return(0);
    s_list *tmp;
    tmp->content = *stack->content;
    *stack->content = *stack->next->content;
    *stack->next->content = tmp->content;
}

void sa(s_list **stack_a)
{
    swap(stack_a);
    write (1, "sa\n", 3);
}

void sb(s_list **stack_b)
{
    swap(stack_b);
    write (1, "sb\n", 3);
}

void ss(s_list **stack_a, s_list **stack_b)
{
    swap(stack_a);
    swap(stack_b);
    write (1, "ss\n", 3);
}