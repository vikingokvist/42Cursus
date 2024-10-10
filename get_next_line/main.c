/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:33:35 by ctommasi          #+#    #+#             */
/*   Updated: 2024/09/30 11:33:37 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "get_next_line.h"

int	main(int argc, char *argv[])
{
	int	fd;
	int	i;
	char	*line;
	
	if (argc != 3)
	{
		printf("\nWrong Amount of Arguments\n");
		printf("Usage: ./a.out test0.txt 1\n");
		printf("-------------------------\n\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		printf("Error opening file");
		return (1);
	}
	i = 0;
	while ((line = get_next_line(fd)) != NULL && i < 100)
	{
		printf("%s", line);
		free(line);
		i++;
	}
	while ((line = get_next_line(fd)) != NULL)
		free(line);
	close(fd);
	return (0);
}*/

#include "get_next_line_bonus.h"

int	main(int argc, char *argv[])
{
	int	fd[3];
	int	i;
	int	j;
	int	k;
	char	*line;
	
	if (argc < 2)
	{
		printf("\n-------Wrong Amount of Arguments------\n");
		printf("Usage: ./a.out test0.txt test1.txt etc\n");
		printf("--------------------------------------\n\n");
		return (1);
	}
	i = 0;
	while (i < argc)
	{
		fd[i] = open(argv[i+1], O_RDONLY);
		i++;
	}
	printf("-------%d\n", i);
	j = 0;
	k = 0;
	while ((line = get_next_line(fd[j])) != NULL)
	{
		printf("%s", line);
		free(line);
		j++;
		k++;
		if (j == i - 1)
			j = 0;
	}
	free(line);
	return (0);
}
