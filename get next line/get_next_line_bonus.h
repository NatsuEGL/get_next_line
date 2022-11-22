/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:41:48 by akaabi            #+#    #+#             */
/*   Updated: 2022/11/21 23:14:33 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>
# include <string.h>

size_t		ft_strlen(char *str);
size_t		ft_checkc(char *s, int c);
char		*ft_strjoin(char *s1, char *s2);
void		*ft_memcpy(void *dst, const void *src, size_t n);
char		*readp(int fd, char *str);
char		*get_next_line(int fd);
char		*uppdate(char *str);
char		*ft_ret1(char *str);
char		*ft_strdup(char *s1);

#endif