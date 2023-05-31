/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <yegpark@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:06:55 by yegpark           #+#    #+#             */
/*   Updated: 2023/05/31 16:45:36 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *block, int c, size_t size)
{
	unsigned char	*new_block;
	size_t			i;

	new_block = (unsigned char *)block;
	i = 0;
	while (i < size)
	{
		if (*new_block == (unsigned char)c)
		{
			return (new_block);
		}
		new_block++;
		i++;
	}
	return (0);
}
