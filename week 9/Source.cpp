#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char arr[100000];
    int i = 0;
	int big = 0, small = 0;
    scanf("%[^\n]",arr);
	while(arr[i]!='\0')
	{
		if (arr[i] >= 'A' && arr[i] <= 'Z') big++;
		else if (arr[i] >= 'a' && arr[i] <= 'z') small++;
		i++;
	}
	printf("Capital letter = %d\nLower-case letter = %d",big,small);
    return 0;
}