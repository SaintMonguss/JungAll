#include <iostream>

int main()
{
	int length = 0;
	scanf("%d", &length);
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if(i%2 == 0)
				printf("%c", ((i+j) % 26) + 65);
			else 
				printf("%c", ((i+j) % 26) + 65);
			if (j < length)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}