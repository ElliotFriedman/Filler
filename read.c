#include "filler.h"

int		main(void)
{
	char	*buf;

	buf = malloc(sizeof(char*));
	ft_dprintf(0, "hi\n");
	
	while (get_next_line(0, &buf) > 0)
	{
		ft_dprintf(1, "%s\n", buf);
		free(buf);
	}

	return 0;
}
