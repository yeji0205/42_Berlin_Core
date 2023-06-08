/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <yegpark@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:46:29 by yegpark           #+#    #+#             */
/*   Updated: 2023/06/08 15:00:01 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_num(int n)
{
	int	num;
	int	len;

	num = n;
	len = 0;
	if (n < 0)
	{
		num = -num;
		len++;
	}
	if (n == 0)
		len = 1;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		str_i;
	int		n_str;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_len_num(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	n_str = n;
	if (n < 0)
		n_str = -n_str;
	str_i = len - 1;
	while (0 <= str_i)
	{
		str[str_i] = n_str % 10 + '0';
		n_str /= 10;
		str_i--;
	}
	if (n < 0)
		str[0] = '-';
	str[len] = '\0';
	return (str);
}
