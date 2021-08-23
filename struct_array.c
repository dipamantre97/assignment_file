#include<stdio.h>
#include<stdlib.h>
struct stu{
	char ch;



};

void sort(struct stu*);
int main(){
	
	struct stu *str=(struct stu*)malloc(sizeof(struct stu)*5);
	int i;

	printf("enter the string\n");
	for(i=0;i<5;i++)
		scanf("%c",&str[i].ch);
	
	
	for(i=0;i<5;i++)
	printf("%c\t",str[i].ch);/*unsorted*/
	printf("\n");
	
	
	sort(str);
	
	for(i=0;i<5;i++)
	printf("%c\t",str[i].ch);

	return 0;
}

void sort(struct stu *p){
	int i,j;
    char temp;
    for(i=4; i>=0; i--)
    {
        for(j=0; j<i; j++)
        
        {
        	if((p+i)->ch<(p+j)->ch){
			temp=(p+i)->ch;
			(p+i)->ch=(p+j)->ch;
			(p+j)->ch=temp;
		}
	}
}
}
        


