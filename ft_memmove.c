/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 13:18:43 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/14 05:57:18 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst2;
	unsigned char const	*src2;
	unsigned char		tmp[len];
	unsigned int		i;

	i = 0;
	src2 = src;
	dst2 = dst;
	while (i < len)
	{
		tmp[i] = src2[i];
		i++;
	}
	while (len > 0)
	{
		dst2[len - 1] = tmp[len - 1];
		len--;
	}
	return (dst);
}
