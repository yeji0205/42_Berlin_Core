/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <yegpark@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:20:40 by yegpark           #+#    #+#             */
/*   Updated: 2023/06/09 17:43:14 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_p;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		next_p = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_p;
	}
	*lst = 0;
}
