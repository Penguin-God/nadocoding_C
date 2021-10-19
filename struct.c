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
	gameInfo.name = "�÷� ���� ���潺";
	gameInfo.year = 2021;
	gameInfo.price = 0;
	gameInfo.company = "������ ���۴�";
	//PrintGameInfo(gameInfo);

	// �迭ó�� ����ü �����ϱ�
	// ������ �ڷ��� ������� �����ϸ� ��
	struct GameInfo nextGameInfo = {"Happy NightMare", 2023, 0, "��ϰ� ���۴�"};
	//PrintGameInfo(nextGameInfo);

	// ����ü �迭
	struct GameInfo arr_GameInfo[2] = {
		{"�÷� ���� ���潺", 2021, 0, "������ ���۴�"},
		{"Happy NightMare", 2023, 0, "��ϰ� ���۴�"}
	};
	//PrintGameInfo(arr_GameInfo[0]);
	//PrintGameInfo(arr_GameInfo[1]);

	// ����ü ������
	struct GameInfo* gameInfoPointer;
	gameInfoPointer = &gameInfo;

	// ����ü �����͸� ������ ���� �ȿ� �ڷῡ �����ϱ� ���� ����ü�� ���� �ٿ��� �����������
	//printf("���� �̸� : %s\n", (*gameInfoPointer).name);
	// 
	// �䷸�� -> �Ἥ �ϴ� ǥ���� ����
	//printf("���� �̸� : %s\n", gameInfoPointer->name);
	// 
	// �Լ����� ������ ������ ������ ���ǵ� ����ü�� ���ϱ� �������
	//PrintGameInfo(*gameInfoPointer);

	// ����ü �ȿ� ����ü
	// �׳� ������ ������ ����� (������ �𸣰����� �ȿ����� �����ͷ� �����ؾߵ�)
	gameInfo.subGame = &nextGameInfo;
	PrintGameInfo(*gameInfo.subGame);
	return 0;
}

void PrintGameInfo(struct GameInfo gameInfo) {
	printf("\n--------------���� ����-----------------\n");
	printf("���� �̸� : %s\n", gameInfo.name);
	printf("���� ��� �⵵ : %d\n", gameInfo.year);
	printf("���� ���� : %d\n", gameInfo.price);
	printf("���� ȸ�� �̸� : %s\n", gameInfo.company);
}