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


	// �� �Է½� �Է��� ����ŭ �Ƕ�̵� �ױ�
	int floor;
	scanf_s("%d", &floor);
	for (int i = 1; i <= floor*2; i += 2) {
		for (int a = 0; a < (floor-1) - ((i-1)/2); a++) {
			printf(" "); // a�� ���ǰ��� �ݺ����� �ѹ� �������� 1�� ������ 
		}
		for (int k = 0; k < i; k++) {
			printf("*"); // �������� i++�� �ϰ� k�� ������ i * 2 + 1�� �ϴ� ����� ����
		}
		printf(" \n");
	}

	return 0;
}