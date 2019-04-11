/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcskp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalexand <nalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:19:58 by nalexand          #+#    #+#             */
/*   Updated: 2019/04/09 17:23:28 by nalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcskp(const char *str, char c)
{
	while (*str == c)
		str++;
	return ((char *)str);
}