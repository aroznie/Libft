/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 12:31:33 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/13 20:54:10 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst2;
	unsigned char	*src2;
	int				i;

	dst2 = dst;
	src2 = (unsigned char*)src;
	i = 0;
	while (src2[i] && n > 0)
	{
		if (src2[i] == c)
		{
			dst2[i] = src2[i];
			return (&dst[i + 1]);
		}
		dst2[i] = src2[i];
		i++;
		n--;
	}
	return (0);
}
