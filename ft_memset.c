/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 23:06:01 by yalounic          #+#    #+#             */
/*   Updated: 2023/04/26 01:51:08 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char	c;
	size_t			i;

	c = value;
	i = 0;
	while (i < count)
	{
		((unsigned char *)pointer)[i] = c;
		i++;
	}
	return (pointer);
}
