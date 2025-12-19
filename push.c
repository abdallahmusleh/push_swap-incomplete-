#include "push_swap.h"

void pa(s_list **stack_a, s_list **stack_b)
{
    if (!*stack_b || !stack_b)
        return(0);
    s_list *primary;
    s_list *tmp;
    primary = *stack_b;
    tmp = *stack_a;
    primary->next = tmp;
    *stack_a = primary;
    write (1, "pa", 2);
}
void pb(s_list **stack_a, s_list **stack_b)
{
    if (!*stack_a || !stack_a)
        return(0);
    s_list *primary;
    s_list *tmp;
    primary = *stack_a;
    tmp = *stack_b;
    primary->next = tmp;
    *stack_b = primary;
    write (1, "pb", 2);
}