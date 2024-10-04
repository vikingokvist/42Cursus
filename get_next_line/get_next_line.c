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

static int	ft_checkpoint(int fd, char **temp, char **total_chars)
{
	if (fd < 0 || fd > 3 || BUFFER_SIZE <= 0)
		return (0);
	*temp = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (*temp == NULL)
		return (free(*temp), 0);
	if (*total_chars == NULL)
	{
		*total_chars = ft_strsave("");
		if (*total_chars == NULL)
			return (free(*temp), 0);
	}
	return (1);
}

char	*get_next_line(int fd)
{
	ssize_t		bytes_read;
	static char	*total_chars;
	char		*temp;

	if (ft_checkpoint(fd, &temp, &total_chars) == 0)
		return (NULL);
	while (ft_strchrlen(total_chars, '\n') == ft_strchrlen(total_chars, '\0'))
	{
		bytes_read = read(fd, temp, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(temp), NULL);
		if (bytes_read == 0)
			break ;
		temp[bytes_read] = '\0';
		total_chars = ft_strjoin(total_chars, temp);
	}
	free(temp);
	if (total_chars[0] == '\0')
		return (free(total_chars), NULL);
	temp = ft_strsave(total_chars);
	total_chars = ft_save_static(total_chars);
	return (temp);
}
