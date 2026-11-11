#include "cub3d.h"

void	put_pixel(t_img *img, int x, int y, int color)
{
	char	*dst;
	int		offset;

	if (x < 0 || x >= img->width || y < 0 || y >= img->height)
		return ;
	offset = y * img->size_line + x * img->bpp / 8;
	dst = img->addr + offset;
	*(unsigned int *)dst = color;
}
