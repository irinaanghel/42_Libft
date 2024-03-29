/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:48:41 by aanghel           #+#    #+#             */
/*   Updated: 2022/12/22 18:51:58 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief This funcion del all char in str *del
 * The synatx of char *del is "A B C" with this *del
 * the funcion del all A B C in the char *str
 * 
 * @param str Str to find the char to del
 * @param del Str with the char to del
 * @return char* Str clear of char del
 */
char	*ft_strtrim3(char *str, char *del)
{
	int		i;
	char	**matrix;
	char	*rtr;

	i = 0;
	matrix = ft_split(del, 32);
	while (1)
	{
		rtr = ft_strtrim2(str, matrix[i][0]);
		if (!ft_strchr(str, matrix[i][0]))
		{
			i++;
			if (!matrix[i])
				break ;
		}
		str = ft_strdup(rtr);
		free(rtr);
	}
	ft_free_matrix(matrix);
	return (rtr);
}