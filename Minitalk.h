/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:20:30 by ybestrio          #+#    #+#             */
/*   Updated: 2021/12/23 20:12:47 by yasinbest        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MINITALK_H
# define MINITALK_H

#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct s_msg {
	pid_t	pid;
	int		msg;
	int		ind;
} t_msg;

t_msg g_msg;
int *ft_itob(int c);


#endif
