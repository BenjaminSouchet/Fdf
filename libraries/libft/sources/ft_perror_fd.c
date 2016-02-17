/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/17 18:01:27 by bsouchet          #+#    #+#             */
/*   Updated: 2016/02/17 19:01:22 by bsouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_pr2(t_data s, int type)
{
	if (type == 5)
		ft_putstr_fd(ft_strjoin(ft_strjoin(MSG03, s.file), MSG06), 2);
	else if (type == 6 && s.x++ > -1)
	{
		ft_putstr_fd(ft_strjoin(ft_strjoin(MSG03, s.file), " (line "), 2);
		ft_putnbr_fd(s.l, 2);
		ft_putstr_fd(" col ", 2);
		ft_putnbr_fd(s.x, 2);
		ft_putstr_fd(MSG08, 2);
	}
	else if (type == 7 && s.x++ > -1)
	{
		ft_putstr_fd(ft_strjoin(ft_strjoin(MSG03, s.file), " (line "), 2);
		ft_putnbr_fd(s.l, 2);
		ft_putstr_fd(" col ", 2);
		ft_putnbr_fd(s.x, 2);
		ft_putstr_fd(MSG07, 2);
	}
}

int			ft_pr(t_data s, int type)
{
	if (type == 1)
		write(2, MSG01, 52);
	else if (type == 2)
		write(2, MSG02, 40);
	else if (type == 3)
	{
		ft_putstr_fd(ft_strjoin(MSG03, s.file), 2);
		ft_putstr_fd(ft_strjoin("\t\t\t --> ", strerror(errno)), 2);
	}
	else if (type == 4 && s.x++ > -1)
	{
		ft_putstr_fd(ft_strjoin(ft_strjoin(MSG03, s.file), " (line "), 2);
		ft_putnbr_fd(s.l, 2);
		ft_putstr_fd(" col ", 2);
		ft_putnbr_fd(s.x, 2);
		ft_putstr_fd(MSG05, 2);
	}
	else if (type > 4)
		ft_pr2(s, type);
	write(2, "\n", 1);
	return (-1);
}