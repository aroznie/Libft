/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   lstclear_bonus.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/12 13:19:13 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/12 13:55:46 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *elem;

	while (*lst && del)
	{
		elem = *lst;
		*lst = elem->next;
		del(elem->content);
		free(elem);
	}
}
