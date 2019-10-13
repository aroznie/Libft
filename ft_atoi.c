/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 11:49:34 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/13 14:49:06 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

int		ft_atoi(const char *str)
{
	int i;
	int negatif;
	int resultat;

	i = 0;
	negatif = 1;
	resultat = 0;
	while (str[i] == ' ' || (str[i] == '\t' || str[i] == '\n'
				|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] == '-')
	{
		negatif *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10 + (str[i] - 48);
		i++;
	}
	resultat *= negatif;
	return (resultat);
}
