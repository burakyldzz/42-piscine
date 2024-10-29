/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayildiz <ayildiz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:11:05 by ayildiz           #+#    #+#             */
/*   Updated: 2024/07/20 19:38:09 by ayildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	while (nb < 0)
		return (0);
	while (nb == 0)
		return (1);
	result = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
