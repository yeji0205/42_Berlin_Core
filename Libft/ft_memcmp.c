/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegipark <yegipark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:53:54 by yegpark           #+#    #+#             */
/*   Updated: 2023/05/26 14:42:34 by yegipark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *a1, const void *a2, size_t size)
{
	size_t		i;
	unsigned char	*new_a1;
	unsigned char	*new_a2;

	new_a1 = (unsigned char *)a1;
	new_a2 = (unsigned char *)a2;
	if (size == 0)
	{
		return (0);
	}
	i = 0;
	while (new_a1[i] && new_a2[i] && new_a1[i] == new_a2[i] && (i < size - 1))
	{
		i++;
	}
	return (new_a1[i] - new_a2[i]);
}
