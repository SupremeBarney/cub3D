#ifndef CUB3D_H
#	define CUB3D_H

enum	e_player_orientation {
	ORIENT_N,
	ORIENT_S,
	ORIENT_E,
	ORIENT_W
};

typedef struct	s_scene 
{
	char						*texture_path[4];
	char						**map; // Une map est composee de plusieurs lignes
	int							floor_color[3]; // RGB, 3 int differents
	int							ceil_color[3];
	int							player_x;
	int							player_y;
	int							nb_lines;
	int							line_size;
	enum e_player_orientation	orientation;
} t_scene;

typedef struct	s_player
{
	double	player_x;
	double	player_y;
	double	dir_x;
	double	dir_y;
	double	plane_x;
	double	plane_y;
} t_player;

void	move_forward(t_player *player, t_scene *scene);
void	move_backward(t_player *player, t_scene *scene);
void	move_left(t_player *player, t_scene *scene);
void	move_right(t_player *player, t_scene *scene);
void	turn_left(t_player *player);
void	turn_right(t_player *player);
void	rotate_vec(double *x, double *y, double a);
void	init_player(t_player *player, t_scene *scene);

#endif
