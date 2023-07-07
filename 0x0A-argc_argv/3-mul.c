#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)

{
	int a, mul = 1;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			/*printf("%s\n", argv[a]);*/

			mul = mul * atoi(argv[a]);

			/*printf("%d\n", mul);*/
		}

		printf("%d\n", mul);
	}

	else
	{
		printf("error\n");
	}

	return (0);
}
