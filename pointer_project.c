# include<stdio.h>
# include<time.h>

void InitData();
void ShowFishsStatus();
void DecreaseWater(long time);
void LevelUp(long time);
void Clear();
void CheckFishStatus();


int level;
int arr_Fishs[6];
int arr_Fishs_Daed[6] = { 0,0,0,0,0,0 };
int* cursor;
int isClear = 0;

int main_pointer_project(void) {
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

	// 루트는 함수 내 exit에서 끝나서 전체 프로그램도 같이 끝남
	while (1) {
		// 최근 경과 시간 경신을 위한 변수
		int previous_total_elapesd_time = total_elapesd_time;

		ShowFishsStatus();
		printf("몇 번 어항에 물을 주시겠습니까?\n");
		scanf_s("%d", &getNum);

		// 입력값이 범위를 벗어났다면
		if (getNum > 6 || getNum < 1) {
			printf("입력값이 잘못돼었습니다.\n");
			continue;
		} // 입력값을 정상인데 그 물고기가 죽었다면
		else if (cursor[getNum - 1] <= 0) {
			printf("그 물고기는 죽었어!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
			continue;
		}
		cursor[getNum - 1]++; // 물주기

		total_elapesd_time = (clock() - start_Time) / CLOCKS_PER_SEC;
		printf("총 경과 시간 : %d초\n", total_elapesd_time);
		
		// 직전 물 준 시간(마지막으로 물 준 시간 이후 흐른 시간) 
		// 물 주기 전에 previous_total_elapesd_time 을 갱신하고 물 흐른 뒤에 시간에 빼서 시간 구함
		previous_elapesd_time = total_elapesd_time - previous_total_elapesd_time;
		printf("최근 경과 시간 : %d초\n", previous_elapesd_time);

		DecreaseWater(previous_elapesd_time);
		CheckFishStatus();
		LevelUp(total_elapesd_time);
	}
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
		arr_Fishs[i] -= (int)time * level * 4;
	}
}

void LevelUp(long time) {
	if (time > level * 3) { 
		level++;
		if (level < 5) printf("\n 와!!! 레밸업 아시는구나!!!! %d레밸 아시는구나!!!!\n", level);
		else Clear();
	}
}

void CheckFishStatus() {
	int deadCount = 0;
	for (int i = 0; i < 6; i++) {
		if (arr_Fishs[i] <= 0) {
			if (arr_Fishs_Daed[i] == 0) {
				printf("%d번 물고기 컷!!! 컷컷컷!!!\n", i + 1);
				arr_Fishs_Daed[i] = 1;
			}
			deadCount++;
		}
	}

	if (deadCount >= 6) {
		printf("털렸구나아~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
		getchar(); // 게임이 갑자기 끝나는거 방지용
		getchar();
		getchar();
		exit();
	}
}

void Clear() {
	printf("\n\n");
	printf("\n 와!!! 레밸업 끝!!! 맥스 레벨 아시는구나!!!!\n");
	for (int i = 0; i < 6; i++) {
		if (arr_Fishs[i] > 0)
			printf("%d번 물고기 스틸 얼라이브\n", i + 1);
	}
	printf("ㅊㅋ");
	getchar();
	getchar();
	getchar();
	exit();
}