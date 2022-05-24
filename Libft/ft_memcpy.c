/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:26:23 by kle-guen          #+#    #+#             */
/*   Updated: 2022/04/13 17:27:19 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*des;
	unsigned char	*str;

	i = 0;
	if (!src && !dest)
		return (NULL);
	des = (unsigned char *)dest;
	str = (unsigned char *)src;
	while (i < n)
	{
		des[i] = str[i];
		i++;
	}
	return (des);
}
