/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:16:21 by kle-guen          #+#    #+#             */
/*   Updated: 2022/03/31 17:05:18 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>
int main(int ac, char **av)
{
	printf("%c", ft_toupper(*av[1]));
	printf("%c", toupper(*av[1]));
	return (0);
}
*/
