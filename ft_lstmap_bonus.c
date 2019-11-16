/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap_bonus.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/12 14:47:55 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/12 19:03:43 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newlst;
	t_list *start;

	if (!lst)
		return (NULL);
	if (!(newlst = ft_lstnew(f(lst->content))))
		return (NULL);
	start = newlst;
	while (lst)
	{
		if (lst->next)
		{
			if (!(newlst->next = ft_lstnew(f(lst->next->content))))
			{
				ft_lstclear(&start, del);
				return (NULL);
			}
			newlst = newlst->next;
		}
		lst = lst->next;
	}
	newlst->next = NULL;
	return (start);
}
