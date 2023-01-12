/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:31:36 by tpinto-e          #+#    #+#             */
/*   Updated: 2023/01/06 20:35:01 by tpinto-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_basevalid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (!base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		else
		{
			j = 0;
			while (j < i)
			{
				if (base[i] == base[j])
					return (0);
				j++;
			}
		}
		i++;
	}
	if (i <= 1)
		return (0);
	else
		return (1);
}

void	ft_putnbr(int nb, char *base, int size)
{
	if (nb >= size)
	{
		ft_putnbr(nb / size, base, size);
		ft_putnbr(nb % size, base, size);
	}
	else
		ft_putchar_fd(base[nb], 1);
}

void	ft_toospecific(int nbr, char *base, int size)
{
	int	helper;

	write(1, "-", 1);
	if (nbr % size != 0)
	{
		helper = (nbr % size) * (-1);
		nbr += helper;
		nbr *= -1;
		ft_putnbr(nbr / size, base, size);
		ft_putnbr(helper, base, size);
	}
	else
	{
		nbr = nbr / size;
		nbr *= -1;
		ft_putnbr(nbr / size, base, size);
		ft_putnbr(nbr % size, base, size);
		write(1, &base[0], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	if (ft_basevalid(base) == 0)
		return ;
	i = 0;
	while (base[i])
		i++;
	if (nbr == -2147483648)
		ft_toospecific(nbr, base, i);
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		ft_putnbr(nbr, base, i);
	}
	else
		ft_putnbr(nbr, base, i);
}
