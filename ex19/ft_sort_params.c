/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 09:47:31 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/06 19:17:05 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
}

int			ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

int			main(int argc, char **argv)
{
	int		i;
	char	*temp;

	i = 1;
	if (argc < 2)
		return (0);
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) <= 0)
			i++;
		else
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 0;
		}
	}
	i = 0;
	while (argv[++i] != '\0')
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
}
