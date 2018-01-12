/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdezier <hdezier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/29 13:55:00 by hdezier           #+#    #+#             */
/*   Updated: 2016/06/29 15:54:30 by hdezier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "stdio.h"
#include "../includes/malloc.h"

#define START 20
#define SIZEMAX 40000

/*void		test_alloc(char *s, int size)
{
	printf("Test alloc for size:%d__________________\n", size);
	write(1, "_______Malloc:\n", 15);
	s = (char *)malloc(size * sizeof(char));

	show_alloc_mem();
	write(1, "_______Write:\n", 14);
	for (int i = 0; i < size; ++i)
	{
		s[i] = 'a';
	}
	s[size - 1] = '\0';
	show_alloc_mem();
	write(1, "_______Free:\n", 13);
	free(s);
	printf("!END!Test alloc for size:%d__________________\n", size);
}

int		main(void)
{
	char			*s[SIZEMAX];
	int				total = 0;

	for (int i = START; i < SIZEMAX - 1; ++i)
	{
		total += i;
		printf("[%d]\n", total);
		test_alloc(s[i], i);
	}
	return (0);
}*/

int main()
{
	malloc(1024);
	malloc(1024 * 32);
	malloc(1024 * 1024);
	malloc(1024 * 1024 * 16);
	malloc(1024 * 1024 * 128);
	show_alloc_mem();
	return (0);
}

