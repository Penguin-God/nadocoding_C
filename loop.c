#include <stdio.h>
// 하나의 프로젝트에 여러개의 main함수가 있으면 빌드가 안됨
int main(void) {
	int a = 10;
	// ++은 b = b + 1이므로 선언하지 않은것처럼 보여도 값이 변함
	printf("a는 %d\n", ++a); // 11 코드가 실행되기 전에 1을 더해서 11이 출력
	printf("a는 %d\n", a++); // 11 코드가 실행된 후에 1을 더해서 11 출력
	printf("a는 %d\n", a); // 12 위에서 1을 더했기 때문에 12 출력

	// for c# for문
	/*for (int i = 0; i < 10; i++) {
		printf("Hello C %d\n", i);
	}*/

	// while : 누구나 아는 그 while문
	// do while문 : do{ code } while(조건);
	//int i = 0;
	//do {
	//	printf("Hello C %d\n", i++);
	//} while (i < 10);

	// 구구단
	/*for (int i = 1; i < 10; i++) {
		printf("%d단 \n", i);
		for (int k = 1; k < 10; k++) {
			printf("%d X %d = %d\n", i, k, i * k);
		}
	}*/


	// 층 입력시 입력한 층만큼 피라미드 쌓기
	int floor;
	scanf_s("%d", &floor);
	for (int i = 1; i <= floor*2; i += 2) {
		for (int a = 0; a < (floor-1) - ((i-1)/2); a++) {
			printf(" "); // a의 조건값이 반복문을 한번 돌때마다 1씩 떨어짐 
		}
		for (int k = 0; k < i; k++) {
			printf("*"); // 맨위에서 i++를 하고 k의 조건을 i * 2 + 1로 하는 방법도 있음
		}
		printf(" \n");
	}

	return 0;
}