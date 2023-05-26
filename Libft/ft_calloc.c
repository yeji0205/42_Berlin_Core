/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegipark <yegipark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:08:09 by yegipark          #+#    #+#             */
/*   Updated: 2023/05/27 00:33:40 by yegipark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_block, size_t size_block)
{
	void	*ptr;

	ptr = malloc(num_block * size_block);
	if (!ptr)
	{
		return (0);
	}
	ft_bzero(ptr, num_block * size_block);
	return (ptr);
}
