/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:30:29 by kle-guen          #+#    #+#             */
/*   Updated: 2022/03/31 17:04:54 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>
int main(int ac, char **av)
{
	printf("%c", ft_tolower(*av[1]));
	printf("%c", tolower(*av[1]));
	return (0);
}
*/
