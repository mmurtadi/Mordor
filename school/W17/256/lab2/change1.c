#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
	int fd;
	int w = 101;
	char potato[] = "\t\t";
	fd = open("list2.txt", O_WRONLY,  0755);
	write(fd, &w, 3);
	write(fd, potato, 2);
	close(fd);
}

	// 