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
}//����Ҳ�������-1 �ҵõ������������Ǹ���������
int main(void) {
	int i;
	int a[5];
	for (i = 0; i < 5; i++) {
		printf("a�ĵ�%d��Ԫ���ǣ�", i + 1);
		scanf_s("%d", &a[i]);
	}
	//�Ѿ��������������
	int number;
	printf("��Ҫ���ҵ������ǣ�");  scanf_s("%d", &number);
	//�Ѿ���������Ҫ���ҵ�����
	int result = search(a, number, 5); 
	printf("%d", result);
	if (result == -1) {
		puts("δ�ҵ�");
	}
	else {
		printf("������ĵ�%d��λ��", result + 1);
	}
	return 0;
}


