#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int common;
	
	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		if (num1 > num2)
			common = num2;
		else
			common = num1;

		while (common > 0)
		{
			if (num1 % common == 0 && num2 % common == 0)
			{
				printf("%d", common);
				break;
			}
			common--;
		}
	}
	printf("\n");
	return (0);
}
