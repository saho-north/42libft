/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 23:06:36 by sakitaha          #+#    #+#             */
/*   Updated: 2024/03/13 22:17:00 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static bool	line_continued(char **buffer, char **line, char *new_line_marker)
{
	char	*tmp;

	*line = ft_substr(*buffer, 0, new_line_marker - *buffer + 1);
	if (!*line)
	{
		return (false);
	}
	tmp = ft_strdup(new_line_marker + 1);
	if (!tmp)
	{
		free(*line);
		*line = NULL;
		return (false);
	}
	free(*buffer);
	*buffer = tmp;
	return (true);
}

static bool	extract_line(char **buffer, char **line)
{
	char	*new_line_marker;

	if (ft_strlen(*buffer) == 0)
	{
		free(*buffer);
		*buffer = NULL;
		return (true);
	}
	new_line_marker = ft_strchr(*buffer, '\n');
	if (new_line_marker)
	{
		return (line_continued(buffer, line, new_line_marker));
	}
	*line = ft_strdup(*buffer);
	if (!*line)
	{
		return (false);
	}
	free(*buffer);
	*buffer = NULL;
	return (true);
}

static bool	read_file(int fd, char **buffer)
{
	char	read_buffer[BUFFER_SIZE + 1];
	char	*tmp;
	ssize_t	bytes_read;

	while (!ft_strchr(*buffer, '\n'))
	{
		bytes_read = read(fd, read_buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (false);
		if (bytes_read == 0)
			break ;
		read_buffer[bytes_read] = '\0';
		tmp = ft_strjoin(*buffer, read_buffer);
		if (!tmp)
			return (false);
		free(*buffer);
		*buffer = tmp;
	}
	return (true);
}

static bool	init_buffer(char **buffer)
{
	if (!*buffer)
	{
		*buffer = (char *)ft_calloc(1, sizeof(char));
		if (!*buffer)
		{
			return (false);
		}
	}
	return (true);
}

char	*get_next_line(int fd, bool *line_status)
{
	static char	*buffer;
	char		*line;

	*line_status = false;
	line = NULL;
	if (!init_buffer(&buffer))
	{
		return (NULL);
	}
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		free(buffer);
		buffer = NULL;
		return (NULL);
	}
	if (!read_file(fd, &buffer) || !extract_line(&buffer, &line))
	{
		free(buffer);
		buffer = NULL;
		return (NULL);
	}
	*line_status = true;
	return (line);
}
