#include <stdio.h>

char	*ft_save_line(char *total_chars)
{
	char	*line;
	size_t	i;

	i = 0;
	if (total_chars[i] == '\0')
		return (NULL);
	while (total_chars[i] && total_chars[i] != '\n')
		i++;
	printf("%zu\n", i);
	/*line = ft_calloc_z(i + 2, sizeof(char));//16+2=18
	if (line == NULL)
		return (NULL);
	i = 0;
	while (total_chars[i] && total_chars[i] != '\n')
	{
		line[i] = total_chars[i];
		i++;
	}
	if (total_chars[i] == '\n' && total_chars[i])
		line[i] = '\n';*/
	return (line);
}
int		main(void)
{
	ft_save_line("Hola como estas?\n");
	ft_save_line("Hola como estas?");
}
