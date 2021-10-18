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
	// elapesd : ���
	long total_elapesd_time = 0;
	// previous ����
	long previous_elapesd_time = 0;

	int chance = 3;
	int getNum = 0;
	InitData();
	cursor = arr_Fishs;

	start_Time = clock(); // ���� �ð��� milli second (1000���� 1��)�� ��ȯ

	// ��Ʈ�� �Լ� �� exit���� ������ ��ü ���α׷��� ���� ����
	while (1) {
		// �ֱ� ��� �ð� ����� ���� ����
		int previous_total_elapesd_time = total_elapesd_time;

		ShowFishsStatus();
		printf("�� �� ���׿� ���� �ֽðڽ��ϱ�?\n");
		scanf_s("%d", &getNum);

		// �Է°��� ������ ����ٸ�
		if (getNum > 6 || getNum < 1) {
			printf("�Է°��� �߸��ž����ϴ�.\n");
			continue;
		} // �Է°��� �����ε� �� ����Ⱑ �׾��ٸ�
		else if (cursor[getNum - 1] <= 0) {
			printf("�� ������ �׾���!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
			continue;
		}
		cursor[getNum - 1]++; // ���ֱ�

		total_elapesd_time = (clock() - start_Time) / CLOCKS_PER_SEC;
		printf("�� ��� �ð� : %d��\n", total_elapesd_time);
		
		// ���� �� �� �ð�(���������� �� �� �ð� ���� �帥 �ð�) 
		// �� �ֱ� ���� previous_total_elapesd_time �� �����ϰ� �� �帥 �ڿ� �ð��� ���� �ð� ����
		previous_elapesd_time = total_elapesd_time - previous_total_elapesd_time;
		printf("�ֱ� ��� �ð� : %d��\n", previous_elapesd_time);

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
	// %3d �� ������ 4ĭ�� �ο��ϰڴٴ� �ǹ� 1�� �͵� ���� �� ĭ�� ������ ��
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d�� \n", 1, 2, 3, 4, 5, 6);
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
		if (level < 5) printf("\n ��!!! ����� �ƽô±���!!!! %d���� �ƽô±���!!!!\n", level);
		else Clear();
	}
}

void CheckFishStatus() {
	int deadCount = 0;
	for (int i = 0; i < 6; i++) {
		if (arr_Fishs[i] <= 0) {
			if (arr_Fishs_Daed[i] == 0) {
				printf("%d�� ����� ��!!! ������!!!\n", i + 1);
				arr_Fishs_Daed[i] = 1;
			}
			deadCount++;
		}
	}

	if (deadCount >= 6) {
		printf("�зȱ�����~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
		getchar(); // ������ ���ڱ� �����°� ������
		getchar();
		getchar();
		exit();
	}
}

void Clear() {
	printf("\n\n");
	printf("\n ��!!! ����� ��!!! �ƽ� ���� �ƽô±���!!!!\n");
	for (int i = 0; i < 6; i++) {
		if (arr_Fishs[i] > 0)
			printf("%d�� ����� ��ƿ ����̺�\n", i + 1);
	}
	printf("����");
	getchar();
	getchar();
	getchar();
	exit();
}