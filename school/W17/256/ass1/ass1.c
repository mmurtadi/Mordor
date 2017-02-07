#include <fcntl.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char *argv[]){
	
	int ppmFile, ppmBinary, numberConverter; cursorCounter = 11, i, j, k;

	unsigned char pixelBinary[];

	ppmFile = open(argv[1], O_RDONLY, 0);
	ppmBinary = open(argv[2], O_CREAT | 0_WRONLY | O_TRUNC, 0755);

	// length of a file in unix

	while (cursorCounter > 0){
		read(ppmFile, &buffer, 1);
		if (*buffer >= 0)
		cursorCounter--;
	}

	for (int i = 2; i >=0; i--){
		read(ppmFile, &buffer, 1);
		numberConverter += buffer*(pow(10, i));
	}

















	close(ppmFile);
	close(ppmBinary);

	return 0;

}