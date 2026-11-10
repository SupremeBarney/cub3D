#include "cub3d.h"
#include <math.h>

void	rotate_vec(double *x, double *y, double a)
{
	double	temp_x;

	temp_x = *x * cos(a) - *y * sin(a);
	*y = *x * sin(a) + *y * cos(a);
	*x = temp_x;
}

void turn_left(t_player *player)
{
	rotate_vec(&player->dir_x, &player->dir_y, -0.05);
	rotate_vec(&player->plane_x, &player->plane_y, -0.05);
}

void turn_right(t_player *player)
{
	rotate_vec(&player->dir_x, &player->dir_y, 0.05);
	rotate_vec(&player->plane_x, &player->plane_y, 0.05);
}
