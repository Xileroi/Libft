/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 04:55:26 by yalounic          #+#    #+#             */
/*   Updated: 2023/04/26 03:35:00 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*s;

	s = NULL;
	if (!nmemb || !size)
		s = (unsigned char *)malloc(1);
	else
	{
		if (nmemb <= INT_MAX / size)
		{
			s = (unsigned char *)malloc(nmemb * size);
			if (!s)
				return (NULL);
			ft_memset(s, 0, nmemb * size);
		}
	}
	return (s);
}
