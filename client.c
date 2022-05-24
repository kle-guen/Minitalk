/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 23:09:44 by kle-guen          #+#    #+#             */
/*   Updated: 2022/05/24 18:26:53 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Minitalk.h"

void	send_byte(char c, int pid)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (c & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		c >>= 1;
		i++;
		usleep(100);
	}
}

int main(int ac, char **av)
{
	int	i;
	int pid;

	i = 0;
	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		while (av[2][i])
		{
			send_byte(av[2][i], pid);
			i++;
		}
	}
	else
		ft_printf("%s\n", "Error");
	return (0);
}
