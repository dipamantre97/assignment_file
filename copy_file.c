//copy content of one file to another file

#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	FILE *sfp,*dfp;
	int ch;
	if((sfp=fopen("source.txt","r"))==NULL)
	{
		printf("Error in opening source file\n");
		exit(1);
	}
	if((dfp=fopen("destination.txt","w"))== NULL)
	{
		printf("Error in opening source file\n");
		exit(1);
		
	}
	
	while((ch=fgetc(sfp))!=EOF)
	fputc(ch,dfp);
	fclose(sfp);
	fclose(dfp);	
}
