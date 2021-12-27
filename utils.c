/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 12:18:59 by yasinbest         #+#    #+#             */
/*   Updated: 2021/12/24 12:19:22 by yasinbest        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isnum(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		if (str[n] < '0' || str[n] > '9')
			return (-1);
		n++;
	}
	return (1);
}

int	ft_check(int argc, char *argv[])
{
	if (argc != 3)
		return (-1);
	else if (ft_isnum(argv[1]) == -1)
		return (-1);
	else if (ft_atoi(argv[1]) <= 0)
		return (-1);
	else if (!argv[2])
		return (-1);
	return (1);
}

int	ft_atoi(char *str)
{
	int	n;
	int	nbr;

	n = 0;
	nbr = 0;
	while (str[n])
		nbr = nbr * 10 + str[n++] - '0';
	return (nbr);
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}
