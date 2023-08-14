#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int N;
	int i = 0;
	int a = 1, b = 1;
	char write[50];
	
	scanf("%d", &N);
	getchar();
	scanf("%s", write);

	while (write[i] != NULL)
	{
		switch (write[i]) {
			case 'D':
			{
				if(1 <= a + 1 && a+1 <= N)
					a++;
				break;
			}
			case 'U':
			{
				if(1 <= a - 1 && a-1 <= N)
					a--;
				break;
			}
			case 'L':
			{
				if(1 <= b - 1 && b-1 <= N)
					b--;
				break;
			}
			case 'R':
			{
				if(1 <= b + 1&& b+1 <= N)
					b++;
				break;
			}
		}
		i++;
	}

	printf("(%d, %d)", a, b);
	
}