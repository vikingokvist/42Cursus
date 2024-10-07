/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:39:20 by ctommasi          #+#    #+#             */
/*   Updated: 2024/09/30 10:39:22 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_save_static(char *total_chars)
{
	char	*new_chars;
	long long	i;
	long long	j;

	i = 0;
	while (total_chars[i] != '\0' && total_chars[i] != '\n')
		i++;
	if (total_chars[i] == '\0')
		return (free(total_chars), NULL);
	new_chars = ft_calloc_z(sizeof(char), (ft_strlen(total_chars) - i + 1));
	i++;
	j = 0;
	while (total_chars[i] != '\0')
		new_chars[j++] = total_chars[i++];
	free(total_chars);
	return (new_chars);
}

char	*ft_save_line(char *total_chars)
{
	char	*line;
	long long	i;

	i = 0;
	if (total_chars[i] == '\0')
		return (NULL);
	while (total_chars[i] != '\0' && total_chars[i] != '\n')
		i++;
	line = ft_calloc_z(sizeof(char), i + 2);
	i = 0;
	while (total_chars[i] != '\0' && total_chars[i] != '\n')
	{
		line[i] = total_chars[i];
		i++;
	}
	if (total_chars[i] == '\n')
		line[i] = '\n';
	return (line);
}

char	*ft_read_line(int fd, char *total_chars)
{
	char	*temp;
	long long	bytes_read;

	if (!total_chars)
		total_chars = ft_calloc_z(sizeof(char), 1);
	temp = ft_calloc_z(sizeof(char), BUFFER_SIZE + 1);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, temp, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(temp), free(total_chars), NULL);
		temp[bytes_read] = '\0';
		total_chars = ft_strjoin_free(total_chars, temp);
		if (ft_strchr(total_chars, '\n'))
			break ;
	}
	free(temp);
	return (total_chars);
}

char	*get_next_line(int fd)
{
	static char	*total_chars;
	char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	total_chars = ft_read_line(fd, total_chars);
	if (total_chars == NULL)
		return (NULL);
	line = ft_save_line(total_chars);
	total_chars = ft_save_static(total_chars);
	return (line);
}
