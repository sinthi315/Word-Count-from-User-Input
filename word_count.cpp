#include<stdio.h>
int main()
{
	char s[100], c[100];

	printf("Enter the name of the input file : ");
	scanf("%s",c);

	FILE *fin = fopen(c,"r");
	FILE *fout = fopen("output.txt","w");

	fprintf(fout, "File name is -  %s and output is :\n", c);
	fprintf(fout, "--------------------------------------\n");

	int i=0;
	while(fscanf(fin, "%s", &s)==1)
	{
		fprintf(fout, "%s\n", s) ;
		i++;
	}
	fprintf(fout, "There are %d words.\n", i);
	printf("\nSuccessful.\nSee Output.txt file to see the output.\n");

	fclose(fin);
	fclose(fout);

	return 0;
}