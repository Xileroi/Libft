/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalounic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 02:11:40 by yalounic          #+#    #+#             */
/*   Updated: 2023/04/20 02:38:38 by yalounic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	save;

	i = 0;
	save = -1;
	while (str[i])
	{
		if (str[i] == (char)c)
			save = i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&str[i]);
	if (save != -1)
		return ((char *)&str[save]);
	return (NULL);
}
