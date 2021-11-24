/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:14:04 by jmaia             #+#    #+#             */
/*   Updated: 2021/11/24 13:35:13 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			len_s;
	char			*sub;
	unsigned int	i_s;
	unsigned int	i_sub;

	len_s = ft_strlen(s);
	if (len_s > len)
		sub = malloc(sizeof(*sub) * (len + 1));
	else
		sub = malloc(sizeof(*sub) * (len_s + 1));
	if (sub == 0)
		return (0);
	i_s = start;
	i_sub = 0;
	while (i_s < start + len && i_s < len_s)
		sub[i_sub++] = s[i_s++];
	sub[i_sub] = 0;
	return (sub);
}
