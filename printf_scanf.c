#include <stdio.h>
int main_printfscanf(void) {
	// 정수형 변수
	int age = 12;		 // css식 주석도 가능 /* code */    
	printf("%d\n", age); // %d : %d 위치에 정수값을 출력하겠다는 의미 , 뒤에 정수값을 적으면 됨  \n : 줄바꿈
	age = 13;
	printf("%d\n", age);

	// 실수형 변수
	float 몸무게 = 70.4f; // float형은 숫자 뒤에 f를 붙여야함
	printf("%.1f\n", 몸무게); // %f : 실수값을 출력하겠다, %.1f : .뒤에오는 숫자만큼만 소수점을 표시하겠다
	double d = 40.428;
	printf("%.2lf\n", d); // 2번쩨 값을 출력할때 바로뒤에 값을 반올림하여 출력함

	// 상수
	const int 생일 = 2003; // const : 상수(못바꾸는 값)
	printf("내가 태어난 연도 : %d\n", 생일);
	// 생일 = 13; 주석풀면 에러뜸

	//printf
	int a = 13;
	int b = 13;
	int c = a + b;
	printf("13 + 13 = %d\n", c);
	printf("%d * %d = %d\n", 14, 2366, 14 * 2366);

	//scanf : 키보드 입력을 받아서 저장하는 함수
	int inputage;
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &inputage); // 정수값을 넣을 변수 앞에 &를 넣어야함
	printf("당신은 %d살이군요! \n", inputage);

	int one, two, three;
	printf("3개의 정수를 입력하세요");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);

	// 문자(한 글자), 문자열(한 글자 이상의 여러글자)
	char ch = 'A';
	printf("%c\n", ch);

	char str[256]; // 256개의 문자를 받을 수 있는 공간을 만들겠다
	scanf_s("%s", str, sizeof(str)); // sizeof(변수) : 변수의 크기 이하의 문자열만 받겠다 
	printf("%s\n", str);
	

	// 프로젝트 : 경찰관이 범죄자의 정보(이름, 나이 등)입수 (조서작성)
	char 범죄자이름[30];
	printf("이름은?");
	scanf_s("%s", 범죄자이름, sizeof(범죄자이름));

	int 범죄자나이;
	printf("나이는?");
	scanf_s("%d", &범죄자나이);

	float 범죄자몸무게;
	printf("몸무게는?");
	scanf_s("%f", &범죄자몸무게);

	char 죄목[30];
	printf("왜옴?");
	scanf_s("%s", 죄목, sizeof(죄목));

	// 정보 출력
	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf("이름     : %s\n", 범죄자이름);
	printf("나이     : %d\n", 범죄자나이);
	printf("몸무게   : %.2f\n", 범죄자몸무게);
	printf("죄목     : %s\n", 죄목);

	return 0;
}