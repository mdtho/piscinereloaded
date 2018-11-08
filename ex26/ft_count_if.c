/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:10:28 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/06 19:47:08 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			x++;
		i++;
	}
	return (x);
}
