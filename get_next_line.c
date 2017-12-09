/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   getnextline.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: prosnobl <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/09 14:34:20 by prosnobl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/09 16:22:45 by prosnobl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

int		buffer(const int fd, char **buff)
{
	char *tab;
	int nb;

	tab = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1));
	nb = read(fd, buff, BUFF_SIZE + 1);
	tab[nb] = '\0';
	return (nb);
}

int		get_next_line(const int fd, char **line)
{
	static char *buff;
	int		nb;

	buff = ft_strnew(BUFF_SIZE + 1);
	nb = buffer(fd, &buff);

	return (0);
}
