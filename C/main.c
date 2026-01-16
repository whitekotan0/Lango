#include <stdio.h>
#include <stdlib.h>
#include <string.h>






int main() 
{
	
	char langoCode;
	FILE* file = fopen("main.lango", "r");

	if (file != NULL)
	{
		while ((langoCode = fgetc(file)) != EOF)
		{
			printf("%c", langoCode);

		}
	}

	fclose(file);
	return 0;
}


/*

function sum(a, b)
{

return a + b;

}




*/