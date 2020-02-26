/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msiivone <msiivone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 01:16:08 by msiivone          #+#    #+#             */
/*   Updated: 2019/10/23 17:36:58 by msiivone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	char	*t;
	int		x;

	x = 0;
	t = s;
	if (*t && *f)
	{
		while (*t)
		{
			f(t);
			t++;
		}
	}
}
