#include "../filler.h"

void		get_plateau(void)
{
	char	buf[2];

	buf[0] = 0;
	while (read(0, buf, 1) > 0)
		printf("%s", buf);
	printf("\n");


}
