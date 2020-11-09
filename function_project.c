#include <stdio.h>
#include <time.h>

int getAnswer(int answer);
int getRandomNumber(int step);
void showQuestion(int step, int num1, int num2);
void Success(int step);
void Fail(int count);

int main(void) { // �ܰ迡 ���� ����� ������ ���ϱⰡ ������ ���ϱ� ���� Ǯ�� ��  
	int count = 0; // ���� ����
	srand(time(NULL));
	for (int i = 1; i <= 5; i++) {
		// ���� ����
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		showQuestion(i, num1, num2);

		// �� �Է¹ޱ�
		int userAnswer;
		scanf_s("%d", &userAnswer);

		if (userAnswer != num1 * num2) {
			Fail(count);
			break;
		}
		else{
			Success(i);
			count++;
		}
	}
	return 0;
}

void Success(int step) {
	if (step == 5)
		printf("\n�� ���� �ٸ��� ����");
	else
		printf("\n\t�ä� ����\n\n\n");
}

void Fail(int count) {
	printf("Ʋ�ȴ� �̻�����\n");
	printf("%d�� ���߾��� �̻�����", count);
}

int getAnswer(int answer) {
	return scanf_s("%d", &answer);
}

int getRandomNumber(int step) {
	int numberRange = step * 10;
	return rand() % numberRange + 1;
}

void showQuestion(int step, int num1, int num2) {
	printf("##########  %d��° ����   ##########\n\n", step);
	printf("\t %d X %d = ?\n\n", num1, num2);
	printf("##################################\n\n");
	printf("������ �Է��ϼ��� >> ");
}