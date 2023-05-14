/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 01:08:41 by yalounic          #+#    #+#             */
/*   Updated: 2023/04/26 01:51:26 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		count;

	if (!s1 || !s2)
		return (NULL);
	count = (ft_strlen(s1) + ft_strlen(s2));
	str = malloc(sizeof(char) * (count) + 1);
	if (!str)
		return (NULL);
	count = 0;
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[count])
	{
		str[i] = s2[count];
		i++;
		count++;
	}
	str[i++] = '\0';
	return (str);
}
