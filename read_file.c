#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	FILE *fp;
	int ch;
	if((fp=fopen("myfile.txt","r"))==NULL)
	{
		printf("Error in opening source file\n");
		exit(1);
	}
	printf("enter text\n");	
	while((ch=fgetc(fp))!=EOF)
	printf("%c",ch);
	
	fclose(fp);	
}
