#include <stdio.h>
#include <time.h>
#include <stdbool.h>

void GetUseTreatment(int answer);
int GetUserAnswer();
void CheckUserAnswer(int realAnswer, int userAnswer);

int main_array_project(void) {
	/*
	���� ��
	5���� �߸��� �� �ϳ��� ��
	1���� ��ȸ���� 2���� �߸����� �߶� ����� �� �� ����
	��ȸ�� �� 3������ ��� ��ȸ ��� �� ������ �������
	*/
	srand(time(NULL)); // ������ ���� ���� ����

	printf("\n\n === �ƺ��� ��Ӹ� ���� === \n\n");
	
	int treatmentCount = 4;
	printf("�߸��� �� %d ��\n\n", treatmentCount);

	// ���� : 0~3���� �� �������� +1 �ؼ� �߸��� ��ȣ 1���� �����ϰ� ��
	int answer = rand() % treatmentCount + 1;
	
	int chance = 3;
	for (int i = 0; i < chance; i++) {
		GetUseTreatment(answer);
	}

	int userAnswer = GetUserAnswer();
	CheckUserAnswer(answer, userAnswer);

	return 0;
}

void GetUseTreatment(int answer) {
	int useTreatment;
	bool inAnswer = false;
	printf("����� �߸��� 2���� �����ϼ���\n");
	for (int i = 0; i < 2; i++) {
		scanf_s("%d", &useTreatment);
		if (useTreatment == answer) inAnswer = true;
	}

	if (inAnswer) printf("��!! �Ӹ��� �ڶ���!!\n");
	else printf("��!! ������ ��Ӹ���!!\n");
}

int GetUserAnswer() {
	int userAnswer;
	printf("\n\n ȿ���� �ִ� �߸����� �����ϼ���!!\n");
	scanf_s("%d", &userAnswer);
	return userAnswer;
}

void CheckUserAnswer(int realAnswer, int userAnswer) {
	if (realAnswer == userAnswer) printf("��!! ����!!");
	else printf("Ʋ�� ��� ����");
}
