#include<stdio.h>
int main()
{
	FILE *fp; //declaration of file pointer
	int ch;
	fp=fopen("myfile.txt","w");   
	                                 
	if(fp==NULL)
	{
		printf("failed in opening file\n");
		exit(1);
	}
	printf("enter text\n");
	while(  (ch=getchar()) != EOF)    
	
	fputc(ch,fp);
	fclose(fp);
	return 0;
}
