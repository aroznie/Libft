/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstadd_back_bonus.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/04 17:53:42 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 18:12:38 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *list;

	if (*alst && new)
	{
		list = *alst;
		while (list->next)
			list = list->next;
		list->next = new;
	}
	else if (!(*alst) && new)
	{
		*alst = new;
		new->next = NULL;
	}
}
