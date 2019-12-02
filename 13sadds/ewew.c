#pragma warning(disable : 4996)
#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<string.h>
int main()

{
	char arr1[] = "weclome to bit.......";
	char  arr2[] = "###################";

	int left = 0;
	int right = strlen(arr1) - 1;
	
	while (left <= right)
	{

		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\r", arr2);
		Sleep(1000);
	}
	printf("\n");

	system("pause");
	return 0;
}