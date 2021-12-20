/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:18:25 by ybestrio          #+#    #+#             */
/*   Updated: 2021/12/20 15:53:13 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Minitalk.h"























int main(int argc, char *argv[])
{

	g_msg.pid = getpid();

	printf("Server PID is : %d\n", g_msg.pid);

	while (1)
	{
		signal(30, thisfunct());// Right way ?
		signel(31, thisotherfunct);// Right way ?



	}






}
