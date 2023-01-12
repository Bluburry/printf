/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:37:55 by tpinto-e          #+#    #+#             */
/*   Updated: 2023/01/12 19:33:50 by tpinto-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_print_str(char *str);
int		ft_print_uns_dec(unsigned int nbr);
int		ft_print_dec(int nbr);
int		ft_print_hexa(char c, unsigned int num);
int		ft_print_ptr(unsigned long hex);
int		ft_printf(const char *str, ...);

#	endif
