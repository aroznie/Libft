/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstsize_bonus.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/01 06:05:06 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/01 06:16:14 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	unsigned int i;

	if (lst != NULL)
	{
		i = 1;
		while (lst->next != 0)
		{
			i++;
			lst = lst->next;
		}
		return (i);
	}
	return (0);
}
