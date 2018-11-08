/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 09:38:22 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/06 19:16:44 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc < 2)
		return (0);
	i = 0;
	while (argv[++i] != '\0')
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
