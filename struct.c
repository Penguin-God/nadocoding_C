#include<stdio.h>

struct GameInfo
{
	char* name;
	int year;
	int price;
	char* company;
	
	struct GameInfo * subGame;
};

void PrintGameInfo(struct GameInfo gameInfo);

int main(void) {
	
	struct GameInfo gameInfo;
	gameInfo.name = "컬러 랜덤 디펜스";
	gameInfo.year = 2021;
	gameInfo.price = 0;
	gameInfo.company = "장조격 컴퍼니";
	//PrintGameInfo(gameInfo);

	// 배열처럼 구조체 선언하기
	// 선언한 자료형 순서대로 대입하면 됨
	struct GameInfo nextGameInfo = {"Happy NightMare", 2023, 0, "펭귄갓 컴퍼니"};
	//PrintGameInfo(nextGameInfo);

	// 구조체 배열
	struct GameInfo arr_GameInfo[2] = {
		{"컬러 랜덤 디펜스", 2021, 0, "장조격 컴퍼니"},
		{"Happy NightMare", 2023, 0, "펭귄갓 컴퍼니"}
	};
	//PrintGameInfo(arr_GameInfo[0]);
	//PrintGameInfo(arr_GameInfo[1]);

	// 구조체 포인터
	struct GameInfo* gameInfoPointer;
	gameInfoPointer = &gameInfo;

	// 구조체 포인터를 접근할 때는 안에 자료에 접근하기 전에 구조체에 별을 붙여서 정의해줘야함
	//printf("게임 이름 : %s\n", (*gameInfoPointer).name);
	// 
	// 요렇게 -> 써서 하는 표현도 있음
	//printf("게임 이름 : %s\n", gameInfoPointer->name);
	// 
	// 함수에는 어차피 포인터 값으로 정의된 구조체가 들어가니까 상관없음
	//PrintGameInfo(*gameInfoPointer);

	// 구조체 안에 구조체
	// 그냥 선언한 다음에 쓰면됨 (이유는 모르겠지만 안에꺼는 포인터로 선언해야됨)
	gameInfo.subGame = &nextGameInfo;
	PrintGameInfo(*gameInfo.subGame);
	return 0;
}

void PrintGameInfo(struct GameInfo gameInfo) {
	printf("\n--------------게임 정보-----------------\n");
	printf("게임 이름 : %s\n", gameInfo.name);
	printf("게임 출시 년도 : %d\n", gameInfo.year);
	printf("게임 가격 : %d\n", gameInfo.price);
	printf("게임 회사 이름 : %s\n", gameInfo.company);
}