//Ryan Paglinawan
//CSE 570
#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE *fp;
	char *mode = "r";
	fp = fopen(argv[0], mode);

	if (fp != NULL){
		scanf();
		exit(1);
	}
	else{
		fprintf(stderr, "Can't open Tiny Basic file.\n");
	}

	return 0;
}