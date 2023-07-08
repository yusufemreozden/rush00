/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozden <yozdeni@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:36:55 by yozden            #+#    #+#             */
/*   Updated: 2023/03/26 15:53:24 by yozden           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		w;
	int		h;

	w = 1;
	h = y;
	while (h >= 1 && x > 0)
	{
		if ((w == x && h == y && w != 1) || (w == 1 && h == 1 && y != 1))
			ft_putchar('\\');
		else if (((w == 1 && h == y) || (w == x && h == 1 && x != 1)))
			ft_putchar('/');
		else if (w == 1 || w == x || h == 1 || h == y)
			ft_putchar('*');
		else
			ft_putchar(' ');
		if (w == x)
		{
			ft_putchar('\n');
			w = 1;
			h--;
		}
		else
			w++;
	}
}
