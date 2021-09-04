#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *ptr;
	ptr = (int*)malloc(sizeof(int)*100);
	FILE *fileptr;
	fileptr = fopen("data.txt","r");
	if(fileptr==NULL)
	{
		printf("That file couldn't be opened\n");
		return EXIT_FAILURE;
	}
	int i;
	int sum=0;
	
	for(i=0;i<100;i++)
	{
		fscanf(fileptr,"%d\n",(ptr+i));
	}
	for(i=0;i<100;i++)
	{
		printf("%d\n",*(ptr+i));
		sum += *(ptr+i);
	}
	printf("\nsum = %d",sum);
	fclose(fileptr);
	return EXIT_SUCCESS;
}