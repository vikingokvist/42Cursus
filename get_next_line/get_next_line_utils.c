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

size_t	ft_strchrlen(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
	{
		if (s[len] == c)
			return (len);
		len++;
	}
	return (len);
}

char	*ft_strjoin(char *total_chars, char *temp)
{
	char	*res;
	size_t	s1_len;
	size_t	i;
	size_t	j;

	s1_len = ft_strchrlen(total_chars, '\0');
	res = malloc((s1_len + ft_strchrlen(temp, '\0') + 1) * sizeof(char));
	if (res == NULL)
		return (free(total_chars), free(temp), NULL);
	i = 0;
	while (i < s1_len)
	{
		res[i] = total_chars[i];
		i++;
	}
	j = 0;
	while (j < ft_strchrlen(temp, '\0'))
	{
		res[i + j] = temp[j];
		j++;
	}
	res[i + j] = '\0';
	free(total_chars);
	return (res);
}

char	*ft_strsave(char *total_chars)
{
	char	*res;
	size_t	len;
	size_t	i;

	len = ft_strchrlen(total_chars, '\n');
	res = malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (free(total_chars), NULL);
	i = 0;
	while (i <= len)
	{
		res[i] = total_chars[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_save_static(char *total_chars)
{
	char	*new_total_chars;
	size_t	start_len;
	size_t	i;
	size_t	len;

	start_len = ft_strchrlen(total_chars, '\n');
	len = ft_strchrlen(total_chars, '\0') - start_len;
	if (len <= 0)
		return (free(total_chars), NULL);
	new_total_chars = malloc((len + 1) * sizeof(char));
	if (new_total_chars == NULL)
		return (free(total_chars), NULL);
	i = 0;
	while (i <= len)
	{
		new_total_chars[i] = total_chars[start_len + i + 1];
		i++;
	}
	new_total_chars[i] = '\0';
	free(total_chars);
	return (new_total_chars);
}
