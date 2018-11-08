/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 10:17:13 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/06 11:25:17 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;
	int		size;

	size = 0;
	while (src[size] != '\0')
		size++;
	if (!(copy = malloc(sizeof(*copy) * (size + 1))))
		return (0);
	i = -1;
	while (src[++i] != '\0')
		copy[i] = src[i];
	copy[i] = '\0';
	return (copy);
}
