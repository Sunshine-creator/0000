#pragma warning(disable : 4996)
#include<stdio.h>
#include<Windows.h>
int Add(int x, int u)
{
	int z = x + u;
	return z;
}
int main()
{  
	int a;
	int b;
	int sum = 0;
	printf("输入两个操作数：>");
	scanf("%d %d", &a, &b);
	sum = Add(a, b);
	printf("sum =%d\n", sum);

	
	

		



	
		


	system("pause");
	return 0;
}