/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <yegpark@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 01:57:40 by yegipark          #+#    #+#             */
/*   Updated: 2023/05/31 16:43:18 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	char	*joined;

	len = ft_strlen(s1) + ft_strlen(s2);
	joined = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (joined)
	{
		while (i < ft_strlen(s1))
		{
			joined[i] = s1[i];
			i++;
		}
		while (i < len)
		{
			joined[i] = s2[i - ft_strlen(s1)];
			i++;
		}
		joined[i] = 0;
		return (joined);
	}
	return (0);
}
