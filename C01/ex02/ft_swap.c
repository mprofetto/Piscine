/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:51:49 by mprofett          #+#    #+#             */
/*   Updated: 2022/07/08 11:26:06 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_swap(int *a, int*b)
{
	int	buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}
/*
int	main()
{
	int	a;
	int	b;

	a = 42;
	b = 17;
	ft_swap( &a, &b);
	printf("%d%d", a, b);

	return 0;
}*/
