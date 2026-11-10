#include "cub3d.h"

static void	face_north(t_player *player)
{
	player->dir_x = 0;
	player->dir_y = -1;
	player->plane_x = 0.66;
	player->plane_y = 0;
}

static void	face_east(t_player *player)
{
	player->dir_x = 1;
	player->dir_y = 0;
	player->plane_x = 0;
	player->plane_y = 0.66;
}

static void	face_south(t_player *player)
{
	player->dir_x = 0;
	player->dir_y = 1;
	player->plane_x = -0.66;
	player->plane_y = 0;
}

static void	face_west(t_player *player)
{
	player->dir_x = -1;
	player->dir_y = 0;
	player->plane_x = 0;
	player->plane_y = -0.66;
}

void	init_player(t_player *player, t_scene *scene)
{
	player->player_x = scene->player_x + 0.5;
	player->player_y = scene->player_y + 0.5;
	if (scene->orientation == ORIENT_N)
		face_north(player);
	else if (scene->orientation == ORIENT_E)
		face_east(player);
	else if (scene->orientation == ORIENT_S)
		face_south(player);
	else if (scene->orientation == ORIENT_W)
		face_west(player);
}
