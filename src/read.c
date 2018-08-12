#include "../filler.h"

int		main(void)
{
	char	*buf;

	buf = ft_strnew(0);
	while (get_next_line(0, &buf) > 0)
	{
		ft_printf("%s\n", buf);
		free(buf);
	}

	return 0;
}
