#include<stdio.h>
#include<string.h>

int main()
{
	int size = 0;
	int i = 0;
	
	char str[50];
	char* p_str = NULL;	

	scanf("%s", str);	

	size = strlen(str);
	p_str = str;
	
	for(i = size; i > 0;)
	{
		printf("%c", *p_str++);
		i--;		
	
		if(i%3 == 0 && i > 0)
		{
			printf(",");
		}	
	}
	puts("");




	return 0;
}