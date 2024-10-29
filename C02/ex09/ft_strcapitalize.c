/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayildiz <ayildiz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:03:31 by ayildiz           #+#    #+#             */
/*   Updated: 2024/07/14 16:13:31 by ayildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (str[i])
	{
		if ((a == 0) && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			a++;
		}
		else if (a > 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			a = 0;
		else
			a++;
		i++;
	}
	return (str);
}
