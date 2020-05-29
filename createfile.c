#include <stdio.h>

int main()
{

	FILE *fp = NULL;

	fp = fopen("test.txt", "w+");
	if(fp == NULL)
		return 0;
	fprintf(fp, "This is testing for fprintf...\n");
	fputs("This is testing for fputs...\n", fp);
	fclose(fp);

	return 0;

}