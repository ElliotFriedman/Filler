#include "filler.h"

//x,y coords for input block
int		g_yin;
int		g_xin;

//x,y coords of map size
int		g_mapx;
int		g_mapy;

//player's number 
int		g_num;
//player's character
char	g_char;

/*
 * this function will manipulate coordinates so that they can be placed on the map
void	push_coord(char **str, int *x, int *y)
{
	size_t	i;

	i = 0;
	while (i < g_mapx)
	{
		


	}


}

void	create_cord(char *str, int x1, int y1)
{
	int		x[x1];
	int		y[y1];
	size_t	ix;
	size_t	iy;
	char	**split;

	g_yin = y1;
	g_xin = x1;
	iy = 0;
	ix = 0;
	i = 0;
	split = ft_strsplit(str, '\n');
	ft_bzero((void*)x, x1 * 4);
	ft_bzero((void*)y, y1 * 4);
	while (split[ix] && split[ix][iy])
	{
		if (split[ix][iy] == '*')
		{
			x[i] = ix;
			y[i] = iy;
			i++;
		}
		iy++;
		if (!split[ix][iy])
		{
			g_mapy = iy;
			iy = 0;
			ix++;
		}
	}
	g_mapx = ix;
	push_coord	
}
*/

int		find_plateau(char *str)
{
	size_t	i;

	i = 0;
	if (ft_strstr(str, "Plateau"))
	{
		while (str[i] && str[i] != ' ')
			i++;
		g_mapx = ft_atoi((const char *)&str[i]);
		while (str[i] && str[i] == ' ')
			i++;
		while (str[i] && ft_isdigit(str[i]))
			i++;
		g_mapy = ft_atoi((const char *)&str[i]);
		ft_putendl("Found plateau\n");
		return (1);
	}
	return (0);
}

void	find_player(void)
{
	char	*buf;

	if (!get_next_line(0, &buf))
	{
		ft_putendl("\nError, could not read in player number\n\n");
		exit(0);
	}
	if (ft_strstr(buf, "p2"))
	{
		g_num = 2;
		g_char = 'X';
	}
	else if (ft_strstr(buf, "p1"))
	{
		g_num = 1;
		g_char = 'O';
	}
}

int		main(void)
{
	char	*buf;
	int		i = 1;

	find_player();
	while (i)
	{
		if (get_next_line(0, &buf))
			find_plateau(buf);
		while (get_next_line(0, &buf) > 0)
		{
			ft_dprintf(1, "%s\n", buf);
			free(buf);
		}
	//	i = 0;
	}
	return 0;
}
