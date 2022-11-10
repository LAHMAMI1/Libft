/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:58:10 by olahmami          #+#    #+#             */
/*   Updated: 2022/11/03 01:48:30 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len > 0)
	{
		if ((char)c == s[len])
			return ((char *)&s[len]);
		len--;
	}
	if (s[len] == (char)c)
		return ((char *)&s[len]);
	return (0);
}
