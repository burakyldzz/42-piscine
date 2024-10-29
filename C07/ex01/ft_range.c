/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayildiz <ayildiz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:15:21 by ayildiz           #+#    #+#             */
/*   Updated: 2024/07/24 16:01:04 by ayildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		range;
	int		index;
	int		*str;

	if (min >= max)
		return (NULL);
	range = max - min;
	str = (int *)malloc(sizeof(int) * range);
	if (str == NULL)
		return (NULL);
	index = 0;
	while (min < max)
	{
		str[index] = min;
		min++;
		index++;
	}
	return (str);
}
