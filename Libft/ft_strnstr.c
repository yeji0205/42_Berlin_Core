/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <yegpark@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:09:48 by yegpark           #+#    #+#             */
/*   Updated: 2023/05/24 18:17:46 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	/*
	if little is empty -> return big
	if little not in big -> NULL
	if little is in big -> where little character starting
	*/
	int	i;
	int	j;
	int	k;
	
	if (!*to_find)
	{
		return ((char *)str);
	}
	i = 0;
	while (str[i])
	{
		j = 0;
		k = 0;
		while ((str[i] == to_find[j]) && (j < ft_strlen(to_find)))
		{
			if (k == (ft_strlen(to_find) - 1))
			{
				i = i - (ft_strlen(to_find) - 1);
				return (&str[i]);
			}
			j++;
			k++;
			i++;
		}
		i = i - (k - 1);
	}
	return (0);
}