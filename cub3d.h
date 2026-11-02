#include <stdio.h>


enum	e_player_orientation {
	N,
	S,
	E,
	W
};

typedef struct	s_scene 
{
	char					*texture_path[4];
	char					**map; // Une map est composee de plusieurs lignes
	int						floor_color[3]; // RGB, 3 int differents
	int						ceil_color[3];
	int						player_x;
	int						player_y;
	int						nb_lines;
	int						line_size;
	e_player_orientation	orientation;
} t_scene;

typedef struct	s_player
{
	double	player_x;
	double	player_y;
	double	vision_direction;
} t_player;

void	move_forward(char **map, t_player *player);
void	move_backward(char **map, t_player *player);
void	move_left(char **map, t_player *player);
void	move_right(char **map, t_player *player);
void	turn_left(t_player *player);
void	turn_right(t_player *player);


