#include <stdio.h>
#include <time.h> // rand() �Լ��� �������� 2��
#include <stdlib.h>
int main_condition(void) {
	// break and continue
	// 1~5������ ���帮�� �ٵ� 3���� ���ļ� ���� �������� ����
	/*for (int i = 1; i < 31; i++) {
		if (i < 6) {
			if (i == 3) {
				printf("%d�� �� �������ϱ� ����\n", i);
				continue;
			}
			printf("%d�� ���ͼ� ����� ����\n", i);
		}
		else {
			printf("�������� ��������");
			break;
		}
	}*/

	// rand() : rand() % ���� ���� ����
	/* printf("���� �ʱ�ȭ ����\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", rand() % 30);

	srand(time(NULL)); // ���� �ʱ�ȭ : ���ϸ� ��� �������� ����
	printf("\n\n���� �ʱ�ȭ ����\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", rand() % 30); */

	// swich��
	/* srand(time(NULL));
	int age = rand() % 30;
	printf("%d\n", age);
	switch (age) // swich�������� �������� ������ ���༭ break������ ���� ������ ���ؾ� ��
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7: printf("���..."); break;
	case 8: 
	case 9:
	case 10:
	case 11:
	case 12:
	case 13: printf("�ʵ�"); break;
	case 14:
	case 15: 
	case 16: printf("�ߵ�"); break;
	case 17: 
	case 18: 
	case 19: printf("���"); break;
	default: printf("�ҽ��� ��ȸ�� �Ͽ�"); 
		break; // break�� ���� ���·� ������ ������ �ؿ� ������ ������ �ʰ� ������
	} */

	// ������Ʈ : up and down���� 1~100������ ������ ���� ���ߴ� ����
	srand(time(NULL));
	int RandomNumber = rand() % 100 + 1;
	for (int i = 5; i > 0; i--) {
		if (i == 1)
			printf("\n�������̴ϱ� ������ �ϰ� �����϶�~~~\n");
		else
			printf("\n��ȸ�� %d�� ���Ҵ� �̻�����\n", i);
		int �Է°�;
		scanf_s("%d", &�Է°�);
		if (�Է°� == RandomNumber) {
			if (i == 1)
				printf("\n���� �G �������� ����ųı�~~~\n");
			else
				printf("\n���� �G �����̶�~~~\n");
			break;
		}
		else if (i == 1 && �Է°� != RandomNumber) {
			printf("Ʋ�ȴ� �̻����� ������ %d���ٱ�~~~\n", RandomNumber);
			break;
		}
		else if (�Է°� > RandomNumber)
			printf("����\n");
		else if (�Է°� < RandomNumber)
			printf("����\n");
	}

	return 0;
}