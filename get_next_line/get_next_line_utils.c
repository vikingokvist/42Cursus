/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:39:32 by ctommasi          #+#    #+#             */
/*   Updated: 2024/09/30 10:39:34 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

long long	ft_strlen(const char *s)
{
	long long	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin_free(char *total_chars, char *temp)
{
	char		*res;
	long long	i;
	long long	j;

	res = malloc(ft_strlen(total_chars) + ft_strlen(temp) + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(total_chars))
	{
		res[i] = total_chars[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(temp))
	{
		res[i + j] = temp[j];
		j++;
	}
	res[i + j] = '\0';
	free(total_chars);
	return (res);
}

void	*ft_calloc_z(long long nmemb, size_t size)
{
	unsigned char	*temp;
	long long		i;

	temp = malloc(nmemb * size);
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb)
		temp[i++] = '\0';
	return (temp);
}
