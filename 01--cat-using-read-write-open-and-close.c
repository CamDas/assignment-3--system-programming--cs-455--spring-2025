#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/* cat: concatenate files, version 1 */
int main(int argc, char *argv[])
{
	FILE *fd;
	void filecopy(FILE *, FILE *);

	if(argc == 1)  // no args; copy standard input
		filecopy(STDIN_FILENO, STDOUT_FILENO);
	else
		while (--argc > 0)
			if ((fd = open("r", O_RDONLY)) == NULL)
			{
				printf("cat: can't open %s\n", *argv);
				return 1;
			}
			else
			{
				filecopy(fd, stdout);
				int close(int fd);
			}
	return 0;
}

/* filecopy: copy file ifp to file ofp */
void filecopy(FILE *ifp, FILE *ofp) {
	char buf[BUFSIZ];
	int c;
	while ((c = read(ifp, buf, sizeof(buf))) != EOF)
	{
		(write(ofp, buf, c));

	}
}
