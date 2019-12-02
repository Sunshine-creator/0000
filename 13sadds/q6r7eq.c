#pragma warning(disable : 4996)
#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
# if 0
int main()    
{
	int i = 0;
	int j = 0;
	int  count = 0;
	for (i = 101; i < 200; i++)/*i += 2;*/
	{
		for (j = 2; j <= sqrt(i); j++)   /*i = 13; j = 13; i = 8; j < i; [2,i/2]*/
		{
			/*优化：j<i; --> j = i; j <= i / 2; --->j>i / 2; j <= sqrt(i)------>j>sqrt(i) 只判断奇数*/
			/*i = 13------>j = [2, 6] 循环： j = 8;  j <= i / 2;*/
			if (i%j == 0)
				break;
		}
		if (j>sqrt(i))
		{
			count++;
			printf(" %d ", i);
		}
	}
	printf("\ncount = %d\n",count);
	system("pause");
	return 0;
}
#endif

//int  main()
//{
//	int a = 10;
//	int b = 20;
//	
//	printf("%d %d\n ", a, b);
//	a += b;      /*临时变量：对角线一样标准*/  /* a = a + b; b = a - b; a = a - b;缺陷：a+bde结果可能 或溢出*/
//	b = a-b;
//	a = a - b;
//	printf("%d %d \n", a, b);
//	system("pause");
//	return 0;
//}
# if 0
int main()
{
	int a = 3; //假设所有数据都是成对出现，只有一个不是，就能找出这个数//
	int b = 4;
	int c = 5;
	int d = 4;
	int e = 3;
	int ret = a^b^c^c^d^e;
	printf("%d\n", ret);
	system("pause");
		return 0;
	
}
#endif
//int main()
//{
//	int array[10];     /*相同类型 数据的一个集合*/
//	int i = 0;
//	int max = 0;
//	printf("输入10个整数：\n");
//	for (; i < 10; i++)
//	{
//		scanf("%d", &array[i]);
//	}
//	max = array[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (array[i]>max)
//			max = array[i];
//	}
//	printf("%d\n", max);
//	system("pause");
//
//	return 0;
//
//}
//
//int main()
//{
//	int a, b, c;
//
//	scanf("%d %d % d", &a, &b, &c);
//	if (a > b)
//	{
//		if (c > a)
//			printf("%d %d %d", c, a, b);
//		else if (c < b)
//			printf("%d %d %d", a, b, c);
//		else
//			printf("%d %d %d", a, c, b);
//	}
//	else /*a<b*/
//	{
//		if (c < a)
//			printf("%d %d %d", b, a, c);
//		else  if (c>b)
//			printf("%d %d %d", c, b, a);
//		else
//			printf("%d %d %d", b, c, a);
//
//
//	}
//	system("pause");
//	return 0;


//int main()
//{
//	int a, b, c, t;
//	scanf("%d %d % d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a, a = b, b = t;
//	}
//	if (a > c)
//	{
//		t = a, a = c, c = t;     /*冒泡法*/
//	}
//	if (b > c)
//	{
//		t = b, b= c, c = t;
//	}
//	printf("%d %d %d", a, b, c);
//	system("pause");
//	return 0;
//}
# if 0
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf(" %d*%d = %-2d", i, j, i*j);
		}
		    printf("\n");
	}
	  
	  system("pause");
	  return 0;
}
#endif
#if 0
int main()
{
	int year = 0;
	int count = 0;
	for (; year <= 2000; year++)
	{
		if ((year % 4 == 0) && (year % 100 != 0)|| (year % 400 == 0))
		{
			printf(" %d", year);
			count++;
		}
		printf("\ncount = %d\n", count);
	}
	system("pause");
	return 0;
}
#endif
# if 0
int main()
{
	int num1 = 0;
	int num2 = 0;
	
	scanf("%d %d\n", &num1, &num2);
	printf(" num1 =%d num2 = %d \n", num1, num2);
	num1 = num1^num2;
	num2 = num1^num2;
	num1 = num1^num2;
	printf(" num1 =%d num2 = %d \n", num1, num2);
	system("pause");
	return 0;
}
#endif
# if 0
int main()
{
	int day = 0;
	switch (day)
	{
	    case 1:
			printf("星期一\n");
			break;
		case 2:
			printf("星期二\n");
			break;
		case 3:
			printf("星期三\n");
			break;
		case 4:
			printf("星期四\n");
			break;
		case 5:
			printf("星期五\n");
			break;
		case 6:
			printf("星期六\n");
			break;
		case 7:
			printf("星期七\n");
			break;		
	}
	system("pause");
	return 0;
}
#endif
int main()

{
     char str1[] = "weclome to bit.......";
	 char  str2[] = "#####################";

	 int num = strlen(str1);
	int left = 0;
	int right = num - 1;
	while (left <= right)
	{
		Sleep(1000);
		str2[left] = str1[left];
		str2[right] = str1[right];
		left++;
		right--;
		printf("%s\r", str2);

	}
	printf("\n");
	system("pause");
	return 0;
}

		/*int i = 1;
	while (i <= 10)
	{
		if (i == 5)
		{

			i++;
			continue;
		}
		
		printf("% d", i);
		i++;
	}*/
	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if ((ch<'0' || ch > '9'))
			continue;
		putchar(ch);
	}*/
	//while (1)    /*也可以写成 for (;;)*/
	//{
	//	printf("hehe\n");
	//}
	





