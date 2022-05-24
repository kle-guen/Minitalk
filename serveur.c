/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serveur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:11:19 by kle-guen          #+#    #+#             */
/*   Updated: 2022/05/24 18:38:31 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Minitalk.h"

void	ft_get_byte(int sig)
{
	char c;
	int	i;

	i = 0;
	while (i < 8)
	{
		if (sig == SIGUSR1)
			c = 1;
		else
			c = 0;	
		c <<= 1;
		i++;
	}
	ft_printf("%c\n", c);
}

int	main()
{
	int	pid;

	pid = getpid();
	ft_printf("[SERV] : PID = %d", pid);
	signal(SIGUSR1, ft_get_byte);
	signal(SIGUSR2, ft_get_byte);
	while(1)
		pause();
}
