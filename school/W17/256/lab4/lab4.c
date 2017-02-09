#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

	if (fork() == 0){
		fork();
	}
	else{
		int s = getpid();
		fd = open("data.dat", O_WRONLY | O_CREAT | O_TRUNC, 0755);
		write(fd, s, sizeof(s));
		close(fd);
	}		
	
	return 0;
}
