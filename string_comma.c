#include<stdio.h>
#include<string.h>

int main()
{
	char *str1;
	char tmp[150];
	int str_size = 50, size = 0;
	int i,j;

	str1 = (char*)malloc(sizeof(char) * str_size);

	fgets(str1, str_size, stdin);
	str1[strlen(str1) - 1] = NULL;

	size = strlen(str1);

	for (i = size - 1, j = 0; i > 0; i--, j++)
	{
		if (i % 3 == 0 && i > 0)
		{
			printf("ok --> \'i = %d\'\n", i);
			strcpy(tmp, &str1[j + 1]);

			str_size += 1;
			str1 = (char*)realloc(str1, sizeof(char) * str_size);
			
			strcpy(&str1[j + 2], tmp);
			str1[j + 1] = ',';
			j++;
		}
	}

	puts(str1);
	
	return 0;
	
}