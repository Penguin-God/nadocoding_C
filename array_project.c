#include <stdio.h>
#include <time.h>
#include <stdbool.h>

void GetUseTreatment(int answer);
int GetUserAnswer();
void CheckUserAnswer(int realAnswer, int userAnswer);

int main_array_project(void) {
	/*
	게임 룰
	5개의 발모제 중 하나만 찐
	1번의 기회마다 2개의 발모제를 발라서 결과를 볼 수 있음
	기회는 총 3번으로 모든 기회 사용 후 정답을 맞춰야함
	*/
	srand(time(NULL)); // 랜덤값 쓰기 위한 공식

	printf("\n\n === 아빠는 대머리 게임 === \n\n");
	
	int treatmentCount = 4;
	printf("발모제 총 %d 개\n\n", treatmentCount);

	// 정답 : 0~3까지 중 랜덤값에 +1 해서 발모제 번호 1부터 시작하게 함
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
	printf("사용할 발모제 2개를 선택하세요\n");
	for (int i = 0; i < 2; i++) {
		scanf_s("%d", &useTreatment);
		if (useTreatment == answer) inAnswer = true;
	}

	if (inAnswer) printf("와!! 머리가 자랐어!!\n");
	else printf("와!! 여전히 대머리야!!\n");
}

int GetUserAnswer() {
	int userAnswer;
	printf("\n\n 효과가 있는 발모제를 선택하세요!!\n");
	scanf_s("%d", &userAnswer);
	return userAnswer;
}

void CheckUserAnswer(int realAnswer, int userAnswer) {
	if (realAnswer == userAnswer) printf("와!! 정답!!");
	else printf("틀림 븅신 ㅋㅋ");
}
