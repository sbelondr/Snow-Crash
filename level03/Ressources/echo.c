#include <stdio.h>
#include <unistd.h>

int main() {
	system("ls -la"); 
	system("getflag"); 
	printf("Code run as uid=%d\n", getuid());
	return (0);
}
