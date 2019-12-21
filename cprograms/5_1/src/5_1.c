#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float *ptr=NULL;
	ptr= (float *)malloc(sizeof(float)*1);
	if(ptr==NULL)
		printf("\n unable to allocate memory");
	else
	{

		printf("\n Enter *ptr=");
		scanf("%f",ptr);
		printf("\n *ptr=%f", *ptr);

		free(ptr);
		ptr=NULL;
		printf("\n memory is freed");
		//printf("\n *ptr=%d", *ptr); //error
	}
	return 0;
}

// on terminal
// gcc demo4.c   --->> a.out
// ./a.out  -->> to run
// to check memory leakage
//valgrind ./a.out


