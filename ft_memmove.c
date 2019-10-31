/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 13:18:43 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/29 17:29:55 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*dest2;
	const char		*src2;

	dest2 = dest;
	src2 = src;
	if (!dest && !src)
		return (NULL);
	if (src > dest)
		dest2 = ft_memcpy(dest, src, n);
	else
	{
		i = n;
		while (i > 0 && n > 0)
		{
			dest2[i - 1] = src2[i - 1];
			i--;
		}
	}
	return (dest2);
}
