/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 23:22:11 by yalounic          #+#    #+#             */
/*   Updated: 2023/04/26 01:52:01 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *)dest;
	s2 = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (s1 > s2)
	{
		while (size-- > 0)
			s1[size] = s2[size];
	}
	else
	{
		while (i < size)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	return (dest);
}
