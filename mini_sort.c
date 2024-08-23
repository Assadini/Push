/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tassadin <tassadin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:51:23 by tassadin          #+#    #+#             */
/*   Updated: 2024/08/23 10:51:24 by tassadin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_2(t_liste **stack)
{
	t_liste	*first;

	first = *stack;
	if (first->data == maximum(stack))
		sa(stack);
}

void	sorting_3(t_liste **stack)
{
	t_liste	*last;
	t_liste	*first;

	last = ft_lstlast(*stack);
	first = *stack;
	if (ft_lstlast(*stack)->data == maximum(stack))
	{
		if (first->data != minimum(stack))
			sa(stack);
	}
	else if (ft_lstlast(*stack)->data == minimum(stack))
	{
		if (first->data == maximum(stack))
			sa(stack);
		rra(stack);
	}
	else if (ft_lstlast(*stack)->data != maximum(stack)
		&& ft_lstlast(*stack)->data != minimum(stack))
	{
		if (first->data == minimum(stack))
			sa(stack);
		ra(stack);
	}
}

void	sorting_4(t_liste **stackA, t_liste **stackB)
{
	t_liste	*min;
	int		i;

	min = *stackA;
	i = 0;
	while ((min->data != minimum(stackA)) && min->next != NULL)
	{
		min = min->next;
		i++;
	}
	while ((*stackA)->data != minimum(stackA))
	{
		if (i < ft_lstsize(*stackA) / 2)
			ra(stackA);
		else
			rra(stackA);
	}
	pb(stackA, stackB);
	sorting_3(stackA);
	pa(stackA, stackB);
}

void	sorting_5(t_liste **stackA, t_liste **stackB)
{
	t_liste	*min;
	int		i;

	min = *stackA;
	i = 0;
	while ((min->data != minimum(stackA)) && min->next != NULL)
	{
		min = min->next;
		i++;
	}
	while ((*stackA)->data != minimum(stackA))
	{
		if (i < ft_lstsize(*stackA) / 2)
			ra(stackA);
		else
			rra(stackA);
	}
	pb(stackA, stackB);
	sorting_4(stackA, stackB);
	pa(stackA, stackB);
}
