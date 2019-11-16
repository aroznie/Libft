/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/25 16:38:32 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 19:28:40 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static int	sizeofstring(int n)
{
	int count;

	count = 1;
	if (n > 0)
		count = 0;
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
	if (!(s = malloc(sizeof(char) * (count + 1))))
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		temp = -temp;
	}
	s[count] = '\0';
	while ((n < 0 && count > 1) || (n >= 0 && count > 0))
	{
		s[count - 1] = (temp % 10) + 48;
		temp = temp / 10;
		count--;
	}
	return (s);
}
