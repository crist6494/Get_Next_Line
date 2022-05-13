/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 19:22:35 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/13 20:13:19 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
 
static char	*ft_readline(int	fd)
{
	int	pos;
	char	*esp;
	
	esp = (char *)malloc((sizeof(char) * 55));
	pos = read(fd, esp, 10 );
	esp[pos] = '\0';
	printf("%s", esp);
	return (0);
}


int	main()
{
	int	fd;
	
	fd = open("pepe.txt", O_RDONLY);
	ft_readline(fd);
	return (0);
}