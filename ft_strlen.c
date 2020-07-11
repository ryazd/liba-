/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluthor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 12:53:27 by hluthor           #+#    #+#             */
/*   Updated: 2019/09/06 16:57:26 by hluthor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s1)
{
	size_t	pos;

	pos = 0;
	while (s1[pos] != '\0')
		pos++;
	return (pos);
}
