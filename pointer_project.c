# include<stdio.h>
# include<time.h>

void InitData();
void ShowFishsStatus();
void DecreaseWater(long time);
void IncreaseWater(int num);
void LevelUp(long time);
void Clear();
void CheckFishStatus();


int level;
int arr_Fishs[6];
int arr_Fishs_Daed[6] = { 0,0,0,0,0,0 };
int* cursor;
int isClear = 0;

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
	while (1) {
		int previous_total_elapesd_time = total_elapesd_time;
		CheckFishStatus();
		LevelUp(total_elapesd_time);

		int deadCount = 0;
		for (int i = 0; i < 6; i++) {
			if (arr_Fishs[i] > 0) break;
			deadCount++;
		}
		if (deadCount >= 6) break;

		if (level >= 6) {
			Clear();
			break;
		}

		ShowFishsStatus();
		printf("몇 번 어항에 물을 주시겠습니까?\n");
		scanf_s("%d", &getNum);

		if (getNum > 6 || getNum < 1) {
			printf("입력값이 잘못돼었습니다.\n");
			continue;
		}
		if (arr_Fishs[getNum - 1] <= 0) {
			printf("그 물고기는 죽었어!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
			continue;
		}

		IncreaseWater(getNum);

		total_elapesd_time = (clock() - start_Time) / CLOCKS_PER_SEC;
		printf("총 경과 시간 : %d초\n", total_elapesd_time);
		
		// 직전 물 준 시간(마지막으로 물 준 시간 이후 흐른 시간)
		previous_elapesd_time = total_elapesd_time - previous_total_elapesd_time;
		printf("최근 경과 시간 : %d초\n", previous_elapesd_time);

		DecreaseWater(previous_elapesd_time);
	}

	if (isClear == 1) printf("ㅊㅋ");
	else printf("털렸구나아~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

	getchar();
	getchar();
	getchar();
	getchar();

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
		if (arr_Fishs[i] <= 0) {
			printf(" %4s ", "DEAD");
			continue;
		}
		printf(" %4d ", arr_Fishs[i]);
	}
}


void DecreaseWater(long time) {
	for (int i = 0; i < 6; i++) {
		arr_Fishs[i] -= time * level * 3;
	}
}

void IncreaseWater(int num) {
	arr_Fishs[num - 1]++;
}

void LevelUp(long time) {
	if (time > level * 3) { 
		level++;
		if (level <= 5)
			printf("\n 와!!! 레밸업 아시는구나!!!! %d레밸 아시는구나!!!!\n", level);
	}
}

void CheckFishStatus() {
	for (int i = 0; i < 6; i++) {
		if (arr_Fishs[i] <= 0 && arr_Fishs_Daed[i] == 0) {
			printf("%d번 물고기 컷!!! 컷컷컷!!!\n", i + 1);
			arr_Fishs_Daed[i] = 1;
		}
	}
}

void Clear() {
	printf("\n\n\n");
	for (int i = 0; i < 6; i++) {
		if (arr_Fishs_Daed[i] == 0)
			printf("%d번 물고기 스틸 얼라이브\n", i + 1);
	}
	isClear = 1;
}