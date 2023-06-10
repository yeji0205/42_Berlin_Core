/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <yegpark@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 00:38:03 by yegipark          #+#    #+#             */
/*   Updated: 2023/06/09 17:32:12 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*copy_str;
	size_t	len;
	size_t	i;

	len = ft_strlen(str);
	copy_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy_str)
		return (0);
	i = 0;
	while (str[i])
	{
		copy_str[i] = str[i];
		i++;
	}
	copy_str[i] = 0;
	return (copy_str);
}
