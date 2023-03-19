/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jo-tan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:23:36 by jo-tan            #+#    #+#             */
/*   Updated: 2022/12/14 05:38:34 by jo-tan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ptr = ft_lstlast(*lst);
	ptr -> next = new;
}

/* update: 19 Mar 2023. rewrite the syntax and comment*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *ptr;
    /*Check parameters: 
    if new node is empty, exit
    if lst is empty, point to new and exit*/
    if(!new)
    	return ;
    if (*lst == NULL) //if value of pointer lst is NULL
	{
    	*lst = new);
        return ;
    }
    ptr = ft_lstlast(*lst); //use ft_lstlast() to go to the last (*lst).next
    *(*lst).next = new; //value of pointer (struct type) lst's field, next, point to new
}