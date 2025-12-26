/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 10:47:00 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/26 16:59:42 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>



int	main(int argc, char **argv)
{
	node *a;
	node *b;

	a = NULL;
	b = NULL;
	int count;
	
	if (argc < 2)
		return (1);
	if (!add_numbers_tostack(&a, argc, argv))
		write(1, "error", 5);
	else
	{
		// printf("%d", a->next->next->next->next->value);
		// printf("%d", a->next->next->next->value);
		// printf("%d", a->next->next->value);
		 printf("%d", a->next->value);
		printf("%d", a->value);
	}
		
	// while (count < a.content)
	// {
	// 	printf("\n %d \n", a.data[count]);
	// 	count++;
	// }
	
}