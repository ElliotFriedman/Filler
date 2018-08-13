#include "filler.h"

int		main(void)
{
	char	*buf;
	int		i = 1;

	ft_dprintf(0, "hello world\n");

	while (i)
	{
		while (get_next_line(0, &buf) > 0)
		{
			ft_dprintf(1, "\n%s\n", buf);
			free(buf);
		}
		i = 0;
	}
	return 0;
}
