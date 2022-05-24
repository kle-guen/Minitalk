/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:54:24 by kle-guen          #+#    #+#             */
/*   Updated: 2022/04/01 19:41:35 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && --n)
		i++;
	return ((unsigned char )s1[i] - (unsigned char)s2[i]);
}
/*
int main(int ac, const char **av)
{
	printf("%d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
	printf("%d\n", strncmp(av[1], av[2], 6));
	printf("%d", strncmp("test\200", "test\0", 6));
	printf("%d", ft_strncmp("test\200", "test\0", 6));
	return (0);
}
*/
