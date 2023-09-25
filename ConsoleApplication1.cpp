//第一次正式的练习代码，多多努力\
#include <stdio.h>
//求十个数里面最大值b

#include <stdio.h>
int main()
{
	int arr[10];
	//输入十个数
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//比较两个数的大小
	int max = arr[0];
	for (int j = 0; j < 10; j++)
	{
		if (arr[j] > max)
		{
			max = arr[j];
		}
	}
	//打印最大数字
	printf("%d", max);
	return 0;
}