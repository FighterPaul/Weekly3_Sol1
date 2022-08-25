#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()						//Problem 95, Solution 1, ID Student 65010902
{

	int num;
	scanf("%d", &num);

	char number[12];
	sprintf(number, "%d", num);

	char a = number[strlen(number) - 1];

	if (a == 48 || a == 50 || a == 52 || a == 54 || a == 56)
		printf("%d is an EVEN number.", num);
	else printf("%d is a ODD number.", num);
	

	
	
	return 0;
}
