#include <stdio.h>
#include <time.h>

int getAnswer(int answer);
int getRandomNumber(int step);
void showQuestion(int step, int num1, int num2);
void Success(int step);
void Fail(int count);

int main(void) { // 단계에 따라 어려운 랜덤한 곱하기가 나오면 곱하기 문제 풀면 됨  
	int count = 0; // 맞힌 개수
	srand(time(NULL));
	for (int i = 1; i <= 5; i++) {
		// 문제 출제
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		showQuestion(i, num1, num2);

		// 답 입력받기
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
		printf("\n오 쉬벌 다맞춤 ㅋㅋ");
	else
		printf("\n\t올ㅋ 정답\n\n\n");
}

void Fail(int count) {
	printf("틀렸다 이생끼야\n");
	printf("%d개 맞추었다 이생끼야", count);
}

int getAnswer(int answer) {
	return scanf_s("%d", &answer);
}

int getRandomNumber(int step) {
	int numberRange = step * 10;
	return rand() % numberRange + 1;
}

void showQuestion(int step, int num1, int num2) {
	printf("##########  %d번째 문제   ##########\n\n", step);
	printf("\t %d X %d = ?\n\n", num1, num2);
	printf("##################################\n\n");
	printf("정답을 입력하세요 >> ");
}