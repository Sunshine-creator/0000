#include<stdio.h>
#include<windows.h>
#pragma warning(disable : 4996)
#include<time.h>
#define N 80
//ð������
#if 0


void sort(int* b[], int k)
{
	int i, j, t, flag;
	for (j = 0; j < k - 1; j++)
	{
		flag = 0;
		for (i = 0; i < k - j - 1; i++)
		{
			if (b[i] > b[i + 1])
			{
				t = b[i];       /*����Ԫ�ؽ���*/
				b[i] = b[i + 1];
				b[i + 1] = t;
				flag = 1;    /* ��Ԫ�ؽ���λ�ã���־��һ*/
			}
			if (flag == 0)
				break;        /*û�н���Ԫ�ؽ���*/
		}
	}
}
void print(int* b[], int k)
{
	int i = 0;
	for (i=0; i < k; i++)
	{
		if (i % 4 == 0)
			putchar('\n');
		printf(" %-6d", b[i]);
	}

}
int main()
{
	int a[N];
	int i, m;
	void sort(int b[], int k);
	void print(int b[], int k);
	printf("\n input m(<80) :");  /*��������ĸ���*/
	scanf("%d", &m);
	for (i = 0; i < m;i++)
	{
		scanf("%d", &a[i]);   /*����m��Ԫ�ص�������*/
	}
	sort(a, m);
	printf(a, m);
	system("pause");
	return 0;
}
#endif // 0
#define N 13
void yanghui(int  a[][N], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i < n; i++)
		for (j = 1; j < i; j++)
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
}
                                 //��ӡһ��������ǣ�û���ö�̬�ڴ�malloc����,
int main()
{
	int i, j, n, b[N][N];
	void yanghui(int a[][N], int n);
	printf("Enter n:");
	scanf("%d", &n);
	yanghui(b, n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf(" % -4d ",b[i][j] );
			Sleep(1000);
		printf("\n");
		}
	}
	
	system("pause");
	return 0;
}