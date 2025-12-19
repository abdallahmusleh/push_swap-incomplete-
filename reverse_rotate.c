#include "push_swap.h"

void reverse_rotate(s_list **stack)
{
    if (!stack || !*stack)//check extras?
        return(0);
    s_list *tmp;
    s_list *tmp2;

    tmp = *stack;
    tmp2 = *stack;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = *stack;
    *stack = tmp;
    while (tmp2->next != tmp)
        tmp2 = tmp->next;
    tmp2->next = NULL;
}

void rra(s_list **stack_a)
{
    reverse_rotate(stack_a);
    write(1, "rra", 3);
}

void rrb(s_list **stack_b)
{
    reverse_rotate(stack_b);
    write(1, "rrb", 3);
}

void rra(s_list **stack_a, s_list **stack_b)
{
    reverse_rotate(stack_a);
    reverse_rotate(stack_b);
    write(1, "rrr", 3);
}