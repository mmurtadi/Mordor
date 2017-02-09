#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
	int fd;
	char s[255] = "101   GM\tBuick\t2010\n102   Ford\tLincoln\t2005";
	fd = open("list2.txt", O_WRONLY | O_CREAT | O_TRUNC, 0755);
	write(fd, s, 44);
	close(fd);
	}

	// 