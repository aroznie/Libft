/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/13 10:54:51 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 17:35:56 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	i;

	i = 0;
	lendst = 0;
	while (dst[lendst] && lendst <= size)
		lendst++;
	if (size < lendst)
		return (ft_strlen(src) + size);
	while (src[i])
	{
		if ((lendst + i) < size - 1)
			dst[lendst + i] = src[i];
		if ((lendst + i) == size - 1)
			dst[lendst + i] = '\0';
		i++;
	}
	if (lendst + i <= size - 1)
		dst[lendst + i] = '\0';
	return (lendst + i);
}
