#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
	int fd;
	int w = 101;
	fd = open("list3.txt", O_WRONLY, 0755);
	lseek(fd, 3, SEEK_SET);
	write(fd, &w, 4);

	close(fd);
}

	// 