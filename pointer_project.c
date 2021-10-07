# include<stdio.h>
# include<time.h>

void InitData();
void ShowFishsStatus();

int level;
int arr_Fishs[6];
int* cursor;

int main(void) {
	long start_Time = 0;
	// elapesd : 경과
	long total_elapesd_time = 0;
	// previous 이전
	long previous_elapesd_time = 0;

	int chance = 3;
	int getNum = 0;
	InitData();
	cursor = arr_Fishs;

	start_Time = clock(); // 현재 시간을 milli second (1000분의 1초)로 반환

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
	// %3d 는 저곳에 4칸을 부여하겠다는 의미 1이 와도 앞이 두 칸은 공백이 됨
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번 \n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf(" %4d ", arr_Fishs[i]);
	}
}
