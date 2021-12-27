/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 10:18:20 by yasinbest         #+#    #+#             */
/*   Updated: 2021/12/24 12:22:38 by yasinbest        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Minitalk.h"



void ft_sendsignal(int pid, int* msg)
{
	int i;

	i = -1;
	while (++i < 8)
	{
		if (msg[i] == 0)
			kill(pid, 30);
		else
			kill(pid, 31);
		usleep(100);
	}



}

void ft_signal(char *outpid, char *str)
{
	int pid;
	int i;
	int *binary;

	i = -1;
	pid = ft_atoi(outpid);
	while (str[++i] != 0)
	{
		binary = ft_itob(str[i]);
		ft_sendsignal(pid, binary);
	}
	free(binary);

}

int	*ft_itob(int c)
{
	int	*bin;
	int	n;

	n = 0;
	if (c < 0)
		c = 255 - c;
	bin = malloc(sizeof(int) * 8);
	if (!bin)
		return (NULL);
	while (n < 8)
	{
		bin[7 - n++] = c % 2;
		c /= 2;
	}
	return (bin);
}

int main(int argc, char *argv[])
{
	if (ft_check(argc, argv) == -1)
	{
		write(1, "incorrect form or message\ncorrect form is : pid, message\n",
			57);
		return (-1);
	}
	else if (ft_atoi(argv[1]) < 0)
	{
		write(1, "pid non-existent\n", 17);
		return (-1);
	}
	ft_signal(argv[1], argv[2]);
}
