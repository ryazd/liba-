/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluthor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:33:00 by hluthor           #+#    #+#             */
/*   Updated: 2019/09/13 15:26:27 by hluthor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		pos;
	char	*str;

	pos = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[pos])
		pos++;
	str = (char *)malloc(pos + 1);
	if (!str)
		return (NULL);
	pos = 0;
	while (s[pos])
	{
		str[pos] = f(pos, s[pos]);
		pos++;
	}
	str[pos] = '\0';
	return (str);
}
