/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:40:42 by kle-guen          #+#    #+#             */
/*   Updated: 2022/04/12 16:39:07 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	size_t	len1;
	size_t	len2;
	char	*str;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{	
		str[i] = s1[i];
		i++;
	}
	while (s2[i - len1])
	{
		str[i] = s2[i - len1];
		i++;
	}
	str[i] = '\0';
	return (str);
}
