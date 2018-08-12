#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <string.h>

//max width = 99
//max height = 100

int main()
{
	char	buf[2];

	buf[0] = 0;
	while (read(0, buf, 1) > 0)
		printf("%s", buf);
	printf("\n");
}

