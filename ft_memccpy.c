/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 12:31:33 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 16:44:54 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst2;
	unsigned char const	*src2;
	unsigned int		i;

	dst2 = dst;
	src2 = src;
	i = 0;
	while (n > i)
	{
		dst2[i] = src2[i];
		i++;
		if (dst2[i - 1] == (unsigned char)c)
			return (dst2 + i);
	}
	return (0);
}
