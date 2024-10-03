/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:40:32 by ctommasi          #+#    #+#             */
/*   Updated: 2024/09/17 14:40:35 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
///////////////////////////////////////////////////////////ft_atoi.c
/*int	main(void)
{
	char	*str = " -153242";
	
	printf("ft_atoi(): %d\n", ft_atoi(str));
	printf("atoi()   : %d\n", atoi(str));
}*/
///////////////////////////////////////////////////////////ft_strlcpy.c
/*int	main(void)
{
	char	dst[8];
	char	src[12] = "Hello World";
	size_t	size = 12;
	
	printf("ft_strlcpy(): %zu\n", ft_strlcpy(dst, src, size));
	printf("strlcpy() : %zu\n", strlcpy(dst, src, size));
}*/
///////////////////////////////////////////////////////////ft_strncmp.c
/*int	main(void)
{
	char	first_str[100] = "::";
	char	second_str[100] = "4w5gb t  gtrs gw$$$";
	unsigned int	n = 18;
 

	printf("ft_strncmp(): %d\n", ft_strncmp(first_str, second_str, n));
	printf("strncmp()   : %d\n", strncmp(first_str, second_str, n));
}*/
///////////////////////////////////////////////////////////ft_tolower.c
/*int	main(void)
{
	printf("ft_tolower(): %c\n", ft_tolower('A'));
	printf("tolower()   : %c\n", tolower('A'));
}*/
///////////////////////////////////////////////////////////ft_toupper.c
/*int	main(void)
{
	printf("ft_toupper(): %c\n", ft_toupper('a'));
	printf("toupper()   : %c\n", toupper('a'));
}*/
///////////////////////////////////////////////////////////ft_isdigit.c
/*int	main(void)
{
	char	ch = '8';
	
	printf("ft_isdigit(): %d\n", ft_isdigit(ch));
	printf("isdigit()   : %d\n", isdigit(ch));
}*/
///////////////////////////////////////////////////////////ft_isalpha.c
/*int	main(void)
{
	char	ch = 'A';
	
	printf("ft_isalpha(): %d\n", ft_isalpha(ch));
	printf("isalpha()   : %d\n", isalpha(ch));
}*/
///////////////////////////////////////////////////////////ft_isalnum.c
/*int	main(void)
{
	char	ch = 'a';
	
	printf("ft_isalnum(): %d\n", ft_isalnum(ch));
	printf("isalnum()   : %d\n", isalnum(ch));
}*/
///////////////////////////////////////////////////////////ft_isascii.c
/*int	main(void)
{
	char	ch = '\0';
	
	printf("ft_isascii(): %d\n", ft_isascii(123));
	printf("isascii()   : %d\n", isascii(123));
}*/
///////////////////////////////////////////////////////////ft_strlen.c
/*int	main(void)
{
	char	*str = "Hello World";
	
	printf("ft_strlen(): %lu\n", ft_strlen(str));
	printf("strlen()   : %lu\n", strlen(str));
}*/
///////////////////////////////////////////////////////////ft_isprint.c
/*int	main(void)
{
	char	ch;

	ch = '\n';
	printf("ft_print(): %d\n", ft_isprint(ch));
	printf("isprint() : %d\n", isprint(ch));
}*/
///////////////////////////////////////////////////////////ft_strlcpy.c
/*int	main(void)
{
	char	dst[12];
	const char	*src;
	size_t	size;
	
	src = "Hello, Worxxxxxxx!";
	size = 8;
	printf("ft_strlcat(): %zu\n", ft_strlcpy(dst, src, size));
	//printf("strlcat() : %d\n", strlcpy(dst, src, size));
}*/
///////////////////////////////////////////////////////////ft_strchr.c
/*int	main(void)
{
	char	*lol;
	int		c;

	lol = "Hello Woxxrld";
	c = 'o';
	printf("ft_strchr(): %s\n", ft_strchr(lol, c));
	printf("strchr()   : %s\n", strchr(lol, c));
}*/
///////////////////////////////////////////////////////////ft_strrchr.c
/*int	main(void)
{
	char	*lol;
	int		c;

	lol = "Hello Worold";
	c = 'o';
	printf("ft_strrchr(): %s\n", ft_strrchr(lol, c));
	printf("strrchr()   : %s\n", strrchr(lol, c));
}*/
///////////////////////////////////////////////////////////ft_strnstr.c
/*int	main(void)
{
	char	*str; 
	char	*to_find;
	size_t	len;

	str = "Foo Bar Baz";
	to_find = "Bar";
	len = 7;
	printf("ft_strnstr(): %s\n", ft_strnstr(str, to_find, len));
	//printf("strnstr() : %d\n", strnstr(str, to_find));
}*/
///////////////////////////////////////////////////////////ft_memset.c
/*int	main(void)
{
	char	str[14]; // {A, A, A, A}
	//int	*str = NULL;

	printf("Before ft_memset(): %d\n", str); 
	ft_memset(str, 4, 4);
	printf("After ft_memset() : %d\n", str[0]);
	printf("After ft_memset() : %d\n", str[1]);
	printf("After ft_memset() : %d\n", str[2]);
	printf("After ft_memset() : %d\n", str[3]);
	printf("Before memset()   : %s\n", str); 
	memset(str, 'y', 5*sizeof(char));
	printf("After memset()    : %s\n", str);
}*/
///////////////////////////////////////////////////////////ft_bzero.c
/*int	main(void)
{
	char	str[14] = "Hello, World!";
	int		i;
	
	printf("Before ft_bzero(): %s\n", str);
	ft_bzero(str, 13);
	printf("After ft_bzero() : ");
	i = 0;
	while (i < 14)
	{
		if (str[i] == '\0')
			printf("\\0");
		else
			printf("%c", str[i]);
		i++;
	}
	printf("\n");
}*/
///////////////////////////////////////////////////////////ft_memcpy.c
/*int	main(void) 
{
	char	buffer[18];

	strcpy(buffer, "Hello, World!");
	printf("\nOriginal buffer: %s\n", buffer);

	memcpy(buffer + 7, buffer, 6);
	printf("After memcpy (non-overlapping): %s\n", buffer);

	strcpy(buffer, "Hello, World!");
	ft_memcpy(buffer + 7, buffer, 6); 
	printf("After ft_memcpy (non-overlapping): %s\n", buffer);

	printf("\nTesting memcpy and ft_memcpy (overlapping):\n");

	strcpy(buffer, "Hello, World!");
	printf("Original buffer: %s\n", buffer);

	memcpy(buffer + 6, buffer, 12);
	printf("After memcpy (overlapping): %s\n", buffer);

	strcpy(buffer, "Hello, World!"); 
	ft_memcpy(buffer + 6, buffer, 12);
	printf("After ft_memcpy (overlapping): %s\n\n", buffer);


}*/
///////////////////////////////////////////////////////////ft_memmove.c
/*int	main(void)
{
	char	buffer[30];


	strcpy(buffer, "Hello, World!");
	printf("\nOriginal buffer: %s\n", buffer);

	memmove(buffer + 7, buffer, 6);
	printf("After memmove (non-overlapping): %s\n", buffer);

	strcpy(buffer, "Hello, World!");
	ft_memmove(buffer + 7, buffer, 6);
	printf("After ft_memmove (non-overlapping): %s\n", buffer);

	printf("\nTesting memmove and ft_memmove (overlapping):\n");

	strcpy(buffer, "Hello, World!");
	printf("Original buffer: %s\n", buffer);

	memmove(buffer + 6, buffer, 12);
	printf("After memmove (overlapping): %s\n", buffer);

	strcpy(buffer, "Hello, World!");
	ft_memmove(buffer + 6, buffer, 12);
	printf("After ft_memmove (overlapping): %s\n\n", buffer);

}*/
///////////////////////////////////////////////////////////ft_memchr.c
/*int	main(void)
{
	void	*result;
	
	result = ft_memchr("Hello, World!", 'o', sizeof("Hello, World!"));
	printf("\nft_memchr(): %c\n", *(unsigned char *)result);
	result = memchr("Hello, World!", 'o', sizeof("Hello, World!"));
	printf("memchr()   : %c\n\n", *(unsigned char *)result);
}*/
///////////////////////////////////////////////////////////ft_memcmp.c
/*int	main(void)
{
	char	first_str[100] = " rf  ge54rfer";
	char	second_str[100] = " rfrefceveferrfrferrfrferrfrfer";
	int	n = 100;
 

	printf("ft_memcmp(): %d\n", ft_memcmp(first_str, second_str, n));
	printf("memcmp()   : %d\n", memcmp(first_str, second_str, n));
}*/
///////////////////////////////////////////////////////////ft_memcmp.c
/*int	main(void)
{

	int	*arr;
	int	i;

	arr = (int *)calloc(5, sizeof(int));
	if (arr == NULL)
	{
		printf("ERROR");
		return (1);
	}	
	i = 0;
	while (i < 5)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
}*/
///////////////////////////////////////////////////////////ft_strdup.c
/*int	main(void)
{
	char	src[] = "Hello, World!";
	char	*dst = NULL;
	char	src2[] = "Hello, World!";
	char	*dst2 = NULL;
	
	printf("src before ft_strdup(): %s\n", src);
	printf("src before strdup(): %s\n", src2);
	printf("dst before ft_strdup(): %s\n", dst);
	printf("dst before strdup(): %s\n", dst2);
	dst = ft_strdup(src);
	dst2 = ft_strdup(src2);
	printf("dst after ft_strdup() : %s\n", dst);
	printf("dst after strdup() : %s\n", dst2);
}*/
///////////////////////////////////////////////////////////ft_substr.c
/*int	main(void)
{
	char const	*str;
	unsigned int	starting;
	
	str = "hola";
	starting = 3;
	printf("str      : %s\n", str);
	printf("substring: %s\n", ft_substr(str, starting, 1));
}*/
///////////////////////////////////////////////////////////ft_strjoin.c
/*int	main(void)
{
	char	*str1 = "Hello, ";
	char	*str2 = "World!";
	
	printf("str1       : %s\n", str1);
	printf("str2       : %s\n", str2);
	printf("str1 + str2: %s\n", ft_strjoin(str1, str2));
}*/
///////////////////////////////////////////////////////////ft_strtrim.c
/*int	main(void)
{
	printf("%s\n", ft_strtrim("\t   \n\n\n  \n\n\t	Hello \t  Please\n T
	rim me !\t\t\t\n  \t\t\t\t  ", " \n\t"));
}*/
///////////////////////////////////////////////////////////ft_split.c
/*int	main(void)
{
	char	**result;
	size_t	i;

	result = ft_split("xxxxxxxxhello!", 'x');
	if (result != NULL)
	{
		i = 0;
		while (result[i] != NULL)
		{
			printf("res[%zu] = \"%s\"\n", i, result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	printf("res[last] = \"\\0\"\n");
}*/
///////////////////////////////////////////////////////////ft_itoa.c
/*int	main(void)
{
	printf("%s\n", ft_itoa(0));
}*/
///////////////////////////////////////////////////////////ft_strmapi.c
/*int	main(void)
{
	char	*result;

	result = ft_strmapi("", &ft_capitalize_if_even);
	printf("%s\n", result);
}*/
///////////////////////////////////////////////////////////ft_striteri.c
/*#include "libft.h"

int	main(void)
{
	char	str[] = "hello world";

	ft_striteri(str, &ft_capitalize_if_even2);
	printf("Modified string = %s\n", str);
}*/
///////////////////////////////////////////////////////////ft_putchar_fd.c
/*int	main(void)
{
	ft_putchar_fd('X', 1);
}*/
///////////////////////////////////////////////////////////ft_putstr_fd.c
/*int	main(void)
{
	ft_putstr_fd("Hello World!", 1);
}*/
///////////////////////////////////////////////////////////ft_putendl_fd.c
/*int	main(void)
{
	ft_putendl_fd("Hello World!", 1);
}*/
///////////////////////////////////////////////////////////ft_putnbr_fd.c
/*int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
}*/
///////////////////////////////////////////////////////////BONUS
///////////////////////////////////////////////////////////ft_lstnew.c
/*int	main(void)
{
	int	num;
	t_list	*node;

	num = 42;
	node = ft_lstnew(&num);
	if (node)
	{
		int	*ptr;
		int	value;
		
		ptr = (int *)(node->content);
		value = *ptr;
		printf("Node content: %d\n", value);
		free(node);
	}
	
}*/
///////////////////////////////////////////////////////////ft_lstadd_front.c
/*int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*temp;
	
	head = NULL;
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node1->content = "Hello";
	node2->content = "World";
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);
	temp = head;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	free(node1);
	free(node2);
}*/
///////////////////////////////////////////////////////////ft_lstsize.c
/*int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list	*node5;
	int	size;
	
	head = NULL;
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));
	node4 = malloc(sizeof(t_list));
	node5 = malloc(sizeof(t_list));
	node1->content = "Hello";
	node2->content = "World";
	node3->content = "You";
	node4->content = "Are";
	node5->content = "Confusing";
	ft_lstadd_front(&head, node5);
	ft_lstadd_front(&head, node4);
	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);
	size = ft_lstsize(head);
	printf("List Size: %d\n", size);
	free(node1);
	free(node2);
	free(node3);
	free(node4);
	free(node5);
}*/
///////////////////////////////////////////////////////////ft_lstlast.c
/*int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list	*node5;
	t_list	*temp;
	
	head = NULL;
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));
	node4 = malloc(sizeof(t_list));
	node5 = malloc(sizeof(t_list));
	node1->content = "First";
	node2->content = "Second";
	node3->content = "Third";
	node4->content = "Fourth";
	node5->content = "Last";
	ft_lstadd_front(&head, node5);
	ft_lstadd_front(&head, node4);
	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);
	temp = ft_lstlast(head);
	printf("Last Node: %s\n", (char *)temp->content);
	free(node1);
	free(node2);
	free(node3);
	free(node4);
	free(node5);
}*/
///////////////////////////////////////////////////////////ft_lstadd_back.c
/*int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list	*node5;
	t_list	*temp;
	
	head = NULL;
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));
	node4 = malloc(sizeof(t_list));
	node5 = malloc(sizeof(t_list));
	node1->content = "First";
	node2->content = "Second";
	node3->content = "Third";
	node4->content = "Fourth";
	node5->content = "Last one inserted";
	ft_lstadd_front(&head, node4);
	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);
	ft_lstadd_back(&head, node5);
	temp = head;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	free(node1);
	free(node2);
	free(node3);
	free(node4);
	free(node5);
}*/
///////////////////////////////////////////////////////////ft_lstdelone.c
/*int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list	*node5;
	t_list	*temp;
	
	head = NULL;
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));
	node4 = malloc(sizeof(t_list));
	node5 = malloc(sizeof(t_list));
	node1->content = strdup("First");
	node2->content = strdup("Second");
	node3->content = strdup("Third");
	node4->content = strdup("Fourth");
	node5->content = strdup("Fifth");
	ft_lstadd_front(&head, node5);
	ft_lstadd_front(&head, node4);
	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);

	temp = head;
	ft_lstdelone(node4, (void *)del);

	
	printf("Node 4 freed list:\n");
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	
	free(node1);
	free(node2);
	free(node3);
	free(node5);
}*/
///////////////////////////////////////////////////////////ft_lstclear.
/*int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list	*node5;
	t_list	*temp;
	
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));
	node4 = malloc(sizeof(t_list));
	node5 = malloc(sizeof(t_list));
	node1->content = strdup("First");
	node2->content = strdup("Second");
	node3->content = strdup("Third");
	node4->content = strdup("Fourth");
	node5->content = strdup("Fifth");
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = NULL;
	head = node1;
	temp = head;
	printf("Original list:\n");
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	temp = head;
	ft_lstclear(&node3, (void *)del);
	printf("\nFreed list:\n");
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
}*/
///////////////////////////////////////////////////////////ft_lstiter.c
/*int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list	*node5;
	t_list	*temp;
	
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));
	node4 = malloc(sizeof(t_list));
	node5 = malloc(sizeof(t_list));
	node1->content = strdup("First");
	node2->content = strdup("Second");
	node3->content = strdup("Third");
	node4->content = strdup("Fourth");
	node5->content = strdup("Fifth");
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = NULL;
	head = node1;
	temp = head;
	printf("Original list:\n");
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
}*/
///////////////////////////////////////////////////////////ft_lstmap.c
/*int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list	*node5;
	t_list	*temp;
	t_list	*temp2;
	
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));
	node4 = malloc(sizeof(t_list));
	node5 = malloc(sizeof(t_list));
	node1->content = strdup("First");
	node2->content = strdup("Second");
	node3->content = strdup("Third");
	node4->content = strdup("Fourth");
	node5->content = strdup("Fifth");
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = NULL;
	head = node1;
	temp = head;
	printf("Original list:\n");
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	temp = head;
	temp2 = ft_lstmap(temp, &f, &del);
	printf("Copied list:\n");
	while (temp2)
	{
		printf("%s\n", (char *)temp2->content);
		temp2 = temp2->next;
	}
}*/
