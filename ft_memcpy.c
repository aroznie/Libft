/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 11:39:56 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 17:03:13 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst2;
	unsigned const char	*src2;

	dst2 = dst;
	src2 = src;
	if (dst == NULL && src == NULL)
		return (dst);
	while (n > 0)
	{
		dst2[n - 1] = src2[n - 1];
		n--;
	}
	return (dst);
}
