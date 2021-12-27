/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:18:25 by ybestrio          #+#    #+#             */
/*   Updated: 2021/12/24 12:07:16 by yasinbest        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Minitalk.h"
int	ft_2power(int index)
{
	int	nbr;

	nbr = 1;
	while (index-- > 0)
		nbr *= 2;
	return (nbr);
}

void	ft_retrieve(int n)
{
	if (g_msg.ind > 0)
	{
		if (n % 30)
			g_msg.msg += ft_2power(g_msg.ind - 1);
		g_msg.ind--;
	}
}

int main()
{
	g_msg.msg = 0;
	g_msg.ind = 8;
	printf("Server PID is : %d\n", getpid());
	signal(30, ft_retrieve);
	signal(31, ft_retrieve);

	while (1)
	{
		if (g_msg.ind == 0)
		{
			printf("COMPLETE");
			write(1, &g_msg.msg, 1);
			g_msg.msg = 0;
			g_msg.ind = 8;
		}
		pause(); //need to try with and without and read theory;
	}
}
