#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	int	fd = open("token", O_RDONLY);
	char	buf[1024];

	bzero(buf, 1024);

	int	sz = read(fd, buf, 1024);
	printf("%s ----- %d\n", buf, sz);

	int	i = -1;
	while (++i < sz)
	{
		printf("%c", buf[i] - i);
	}
}
