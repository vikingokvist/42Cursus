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

char	*ft_strdup(const char *s)
{
	char	*temp;
	size_t	i;
	size_t	len;

	len = ft_strchrlen(s, '\0');
	temp = (char *)malloc((len + 1) * sizeof(char));
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		temp[i] = s[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

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
	size_t	s2_len;
	size_t	i;
	size_t	j;

	s1_len = ft_strchrlen(total_chars, '\0');
	s2_len = ft_strchrlen(temp, '\0');
	res = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		res[i] = total_chars[i];
		i++;
	}
	j = 0;
	while (j < s2_len)
	{
		res[i + j] = temp[j];
		j++;
	}
	res[i + j] = '\0';
	free(total_chars);
	return (res);
}

char	*ft_save_res(char *total_chars)
{
	size_t	len;
	size_t	i;
	char	*res;

	len = ft_strchrlen(total_chars, '\n');
	res = malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
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
	size_t	max_len;
	size_t	i;
	size_t	len;

	max_len = ft_strchrlen(total_chars, '\0');
	len = max_len - ft_strchrlen(total_chars, '\n');
	if (len <= 0)
	{
		free(total_chars);
		return (NULL);
	}
	new_total_chars = malloc((len + 1) * sizeof(char));
	if (new_total_chars == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_total_chars[i] = total_chars[len + i];
		i++;
	}
	new_total_chars[i] = '\0';
	free(total_chars);
	return (new_total_chars);
}
