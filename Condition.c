#include <stdio.h>
#include <time.h> // rand() 함수를 쓰기위한 2줄
#include <stdlib.h>
int main_condition(void) {
	// break and continue
	// 1~5번까지 엎드리기 근데 3번은 아파서 빼줌 나머지는 집감
	/*for (int i = 1; i < 31; i++) {
		if (i < 6) {
			if (i == 3) {
				printf("%d번 넌 다쳤으니까 가라\n", i);
				continue;
			}
			printf("%d번 나와서 엎드려 뻗쳐\n", i);
		}
		else {
			printf("나머지는 집에가라");
			break;
		}
	}*/

	// rand() : rand() % 랜덤 숫자 범위
	/* printf("난수 초기화 이전\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", rand() % 30);

	srand(time(NULL)); // 난수 초기화 : 안하면 계속 같은값이 나옴
	printf("\n\n난수 초기화 이후\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", rand() % 30); */

	// swich문
	/* srand(time(NULL));
	int age = rand() % 30;
	printf("%d\n", age);
	switch (age) // swich구문에는 조건으로 범위를 못줘서 break생략을 통해 범위를 정해야 함
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7: printf("어려..."); break;
	case 8: 
	case 9:
	case 10:
	case 11:
	case 12:
	case 13: printf("초딩"); break;
	case 14:
	case 15: 
	case 16: printf("중딩"); break;
	case 17: 
	case 18: 
	case 19: printf("고딩"); break;
	default: printf("불쌍한 사회의 일원"); 
		break; // break가 없는 상태로 조건이 맞으면 밑에 조건은 보지도 않고 실행함
	} */

	// 프로젝트 : up and down으로 1~100까지의 랜덤한 숫자 맞추는 게임
	srand(time(NULL));
	int RandomNumber = rand() % 100 + 1;
	for (int i = 5; i > 0; i--) {
		if (i == 1)
			printf("\n마지막이니까 생각좀 하고 선택하라구~~~\n");
		else
			printf("\n기회가 %d번 남았다 이생끼야\n", i);
		int 입력값;
		scanf_s("%d", &입력값);
		if (입력값 == RandomNumber) {
			if (i == 1)
				printf("\n오우 쒰 마지막에 맞춘거냐구~~~\n");
			else
				printf("\n오우 쒰 정답이라구~~~\n");
			break;
		}
		else if (i == 1 && 입력값 != RandomNumber) {
			printf("틀렸다 이생끼야 정답은 %d였다구~~~\n", RandomNumber);
			break;
		}
		else if (입력값 > RandomNumber)
			printf("낮아\n");
		else if (입력값 < RandomNumber)
			printf("높아\n");
	}

	return 0;
}