#include <stdio.h>
// �ϳ��� ������Ʈ�� �������� main�Լ��� ������ ���尡 �ȵ�
int main(void) {
	int a = 10;
	// ++�� b = b + 1�̹Ƿ� �������� ������ó�� ������ ���� ����
	printf("a�� %d\n", ++a); // 11 �ڵ尡 ����Ǳ� ���� 1�� ���ؼ� 11�� ���
	printf("a�� %d\n", a++); // 11 �ڵ尡 ����� �Ŀ� 1�� ���ؼ� 11 ���
	printf("a�� %d\n", a); // 12 ������ 1�� ���߱� ������ 12 ���

	// for c# for��
	/*for (int i = 0; i < 10; i++) {
		printf("Hello C %d\n", i);
	}*/

	// while : ������ �ƴ� �� while��
	// do while�� : do{ code } while(����);
	//int i = 0;
	//do {
	//	printf("Hello C %d\n", i++);
	//} while (i < 10);

	// ������
	/*for (int i = 1; i < 10; i++) {
		printf("%d�� \n", i);
		for (int k = 1; k < 10; k++) {
			printf("%d X %d = %d\n", i, k, i * k);
		}
	}*/


	/*
	    *
	   **
	  ***
	 ****
	***** �����
	*/
	int inputmanager;
	scanf_s("%d", &inputmanager);
	for (int i = 1; i <= inputmanager; i++) {
		for (int a = inputmanager; a >= i; a--) {
			printf(" ");
		}
		for (int k = 0; k < i; k++) {
			printf("*");
		}
		printf(" \n");
	}

	return 0;
}