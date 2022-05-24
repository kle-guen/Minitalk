/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:01:16 by kle-guen          #+#    #+#             */
/*   Updated: 2022/04/11 21:40:32 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		tmp;
	char	*str;

	tmp = 0;
	i = 0;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			tmp = i;
		i++;
	}
	if (c == '\0')
		return (str + i);
	if (tmp != 0 || str[0] == (unsigned char)c)
		return (str + tmp);
	return (NULL);
}
/*
int main()
{
	printf("%s\n", ft_strrchr("tidsads dsanjdaj", 'i'));
	printf("%s", strrchr("tidsads dsanjdaj", 'i'));	
	return (0);
}
*/
