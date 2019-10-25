/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 12:31:33 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/25 17:57:21 by arroznie    ###    #+. /#+    ###.fr     */
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
	while ((unsigned char)src2[i] && n > 0)
	{
		if ((unsigned char)src2[i] == (unsigned char)c)
		{
			dst2[i] = (unsigned char)src2[i];
			return (&dst2[i + 1]);
		}
		dst2[i] = src2[i];
		i++;
		n--;
	}
	return (0);
}
