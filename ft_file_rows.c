/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_rows.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 09:45:31 by lasalmi           #+#    #+#             */
/*   Updated: 2022/07/29 10:48:22 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_error(char *error)
{
	ft_putstr(error);
	exit(1);
}

/* Counts the rows of a given file */
size_t	ft_file_rows(char *file)
{
	size_t	rows;
	int		fd;
	char	*line;
	int		ret;

	rows = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (rows);
	ret = get_next_line(fd, &line);
	ft_strdel(&line);
	if (ret > 0 && fd > 0)
		rows++;
	else
		ft_error("Open failed!");
	while (ret > 0)
	{
		ret = get_next_line(fd, &line);
		ft_strdel(&line);
		if (ret > 0)
			rows++;
	}
	close (fd);
	return (rows);
}
