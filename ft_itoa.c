/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/25 16:38:32 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/25 16:43:27 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static int	sizeofstring(int n)
{
	int count;

	count = 2;
	if (n > 0)
		count = 1;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	int		count;
	char	*s;
	long	temp;

	temp = n;
	count = sizeofstring(n);
	if (!(s = malloc(sizeof(char) * count)))
		return (0);
	if (n < 0)
	{
		s[0] = '-';
		temp = -temp;
	}
	while ((n < 0 && count > 2) || (n >= 0 && count > 1))
	{
		s[count - 2] = (temp % 10) + 48;
		temp = temp / 10;
		count--;
	}
	return (s);
}
