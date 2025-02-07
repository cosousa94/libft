/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlaoli <carlaoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:31:46 by carlaoli          #+#    #+#             */
/*   Updated: 2025/02/07 12:54:22 by carlaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fill_line(int fd, char *buf, char *line)
{
	int		bytes_read;
	char	*temp;

	bytes_read = 1;
	temp = NULL;
	while (bytes_read != 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == -1)
			return (NULL);
		if (bytes_read == 0)
			break ;
		buf[bytes_read] = '\0';
		if (line == NULL)
			line = ft_strdup("");
		temp = line;
		line = ft_strjoin(temp, buf);
		free(temp);
		temp = NULL;
		if (ft_strchr(line, '\n'))
			break ;
	}
	return (line);
}

char	*separate(char *line)
{
	int		end;
	char	*rest;
	char	*result_line;

	if (line != NULL && ft_strchr(line, '\n') != NULL)
	{
		result_line = ft_strchr(line, '\n');
		end = ft_strlen(line) - ft_strlen(result_line) + 1;
		rest = ft_strdup(result_line + 1);
		line[end] = '\0';
		return (rest);
	}
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	*remaining_text;
	char		*buffer;
	char		*current_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	current_line = fill_line(fd, buffer, remaining_text);
	free(buffer);
	buffer = NULL;
	if (current_line == NULL && remaining_text != NULL)
		free(remaining_text);
	remaining_text = separate(current_line);
	if (current_line == NULL || *current_line == '\0')
	{
		free(current_line);
		current_line = NULL;
	}
	return (current_line);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <fcntl.h>

// int	main(void)
// {
// 	int		fd1;
// 	char	*line;

// 	fd1 = open("teste.txt", O_RDONLY);
// 	// fd1 = 0;
// 	while ((line = get_next_line(fd1)) != NULL)
// 	{
// 		printf("%s\n", line);
// 		free(line);
// 	}
// 	close(fd1);
// 	return (0);
// }
