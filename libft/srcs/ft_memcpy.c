/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shedelin <shedelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:39:15 by shedelin          #+#    #+#             */
/*   Updated: 2013/11/25 16:09:18 by shedelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	if (!s1 || !s2)
		return (s1);
	while (n-- > 0)
		((unsigned char *)s1)[n] = ((unsigned char *)s2)[n];
	return (s1);
}
