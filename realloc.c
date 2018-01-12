/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shedelin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/05 15:00:01 by shedelin          #+#    #+#             */
/*   Updated: 2015/02/05 15:00:03 by shedelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>
#include "includes/malloc.h"

void		*realloc(void *ptr, size_t size)
{
	void	*tmp;

	if (!ptr)
		return (NULL);
	tmp = malloc(size);
	//ft_memcpy(tmp, ptr, ((t_malloc *)(ptr))->size);
	free(ptr);
	return (tmp);
	//free(ptr);
	//return (malloc(size));
}
