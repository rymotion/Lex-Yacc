#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE *fp;
	char *mode = "r";
	fp = fopen(argv[0], mode);

	if (fp != NULL)
	{
		fprintf(stderr, "Can't open Tiny Basic file.\n");
		exit(1);
	}

	return 0;
}