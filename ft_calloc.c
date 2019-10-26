/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_calloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 03:56:07 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/26 12:04:18 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char *str;

	if (!(str = malloc(count * size)))
		return (0);
	while (count > 0)
	{
		str[count - 1] = 0;
		count--;
	}
	return ((void *)str);
}
