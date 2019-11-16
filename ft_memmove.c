/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 13:18:43 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 17:08:55 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*dest2;
	unsigned const char		*src2;

	i = 0;
	dest2 = dest;
	src2 = src;
	if (dest == NULL && src == NULL)
		return (dest);
	if (src2 < dest2)
		dest2 = ft_memcpy(dest2, src2, n);
	else
	{
		while (n > i)
		{
			dest2[i] = src2[i];
			i++;
		}
	}
	return (dest);
}
