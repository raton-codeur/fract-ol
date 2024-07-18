/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deep_free_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:42:21 by qhauuy            #+#    #+#             */
/*   Updated: 2024/04/26 17:42:32 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	deep_free_int(int **a, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
		free(a[j++]);
	free(a);
}