/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/13 10:54:51 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/13 17:14:23 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	i;

	i = 0;
	lendst = ft_strlen(dst);
	if (size < lendst)
		return (ft_strlen((char *)(src)) + size);
	while (src[i])
	{
		if ((lendst + i) < size - 1)
			dst[lendst + i] = src[i];
		if ((lendst + i) == size - 1)
			dst[lendst + i] = '\0';
		i++;
	}
	if (lendst + i <= size - 1)
		dst[lendst + i] = '\n';
	return (lendst + i);
}
