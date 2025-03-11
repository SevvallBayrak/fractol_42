/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrak <sbayrak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 00:41:50 by sbayrak           #+#    #+#             */
/*   Updated: 2025/03/11 05:18:21 by sbayrak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractal.h"

static void	init_fractal(int ac, char **av, t_fractal *fractal)
{
	if (ac == 2 && !ft_strcmp(av[1], "mandelbrot"))
	{
		fractal->name = av[1];
	}
	else if (ac == 4 && !ft_strcmp(av[1], "julia"))
	{
		fractal->name = av[1];
		fractal->julia_x = atodbl(av[2]);
		fractal->julia_y = atodbl(av[3]);
	}
	else
	{
		putstr_fd("error", 2);
		exit(0);
	}
}

int	main(int ac, char **av)
{
	t_fractal	fractal;

	init_fractal(ac, av, &fractal);
	fractal_init(&fractal);
	fractal_render(&fractal);
	mlx_loop(fractal.mlx_connection);
	return (0);
}
