#include<stdio.h>

int main(){
	int  a, b;
	for(a = 0; a < 5; a++)
	{
		/*this loop increase number of columns */
		for(b = 0; b < a; b++)
		{
			/* this puts the star on boundaries */
			if(a==0 || a==5-1 || b==0 || b==5-1)
				printf("*"); //prints the star
			else
				printf(" "); /* leaves the middle columns of square blank*/
		}
		printf("\n");
	}
	return 0;
}
