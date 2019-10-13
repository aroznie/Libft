/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   memcpy.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 11:39:56 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/13 11:34:46 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	*ft_memcpy(void dst, const void src, size_t n)
{
	char		*dst2;
	const char	*src2;
	int			i;

	i = 0;
	dst2 = dst;
	src2 = src;
	while (src2[i] && n > 0)
	{
		dst2[i] = src2[i];
		i++;
		n--;
	}
	return (dst);
}
