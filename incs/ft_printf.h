/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:03:22 by meferraz          #+#    #+#             */
/*   Updated: 2024/11/04 10:04:47 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <strings.h>
#include <string.h>
//#include <bsd/string.h>
#include <stddef.h>
#include <stdarg.h>
#include "./ansi.h"
#include <limits.h>

int		ft_printf(const char *string, ...);
void	ft_printchar(char c, int *len);
void	ft_printstring(char *str, int *len);
void	ft_printnum(int num, int *len);
void	ft_printunsigned(unsigned int num, int *len);
void	ft_printpointer(void *ptr, int *len);
void	ft_printhexa(unsigned int num, int *len, char s);

size_t	ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
