# include<stdio.h>
# include<time.h>

void InitData();
void ShowFishsStatus();

int level;
int arr_Fishs[6];
int* cursor;

int main(void) {
	long start_Time = 0;
	// elapesd : ���
	long total_elapesd_time = 0;
	// previous ����
	long previous_elapesd_time = 0;

	int chance = 3;
	int getNum = 0;
	InitData();
	cursor = arr_Fishs;

	start_Time = clock(); // ���� �ð��� milli second (1000���� 1��)�� ��ȯ

	ShowFishsStatus();

	return 0;
}

void InitData() {
	level = 1;
	for (int i = 0; i < 6; i++) {
		arr_Fishs[i] = 100;
	}
}

void ShowFishsStatus() {
	// %3d �� ������ 4ĭ�� �ο��ϰڴٴ� �ǹ� 1�� �͵� ���� �� ĭ�� ������ ��
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d�� \n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf(" %4d ", arr_Fishs[i]);
	}
}
