#include <stdio.h>
#define failed -1
int search(int a[], int number,int n) {
	int i=0;
	while (1) {
		if (i == n) {
			return failed;
		}
		if (a[i] == number) {
			return i;
		}
		i++;
	}
}//如果找不到返回-1 找得到返回数组中那个数的索引
int main(void) {
	int i;
	int a[5];
	for (i = 0; i < 5; i++) {
		printf("a的第%d个元素是：", i + 1);
		scanf_s("%d", &a[i]);
	}
	//已经输入了这个数组
	int number;
	printf("你要查找的数字是：");  scanf_s("%d", &number);
	//已经输入了你要查找的数字
	int result = search(a, number, 5); 
	printf("%d", result);
	if (result == -1) {
		puts("未找到");
	}
	else {
		printf("在数组的第%d个位置", result + 1);
	}
	return 0;
}


