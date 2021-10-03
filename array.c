#include <stdio.h>

int main(void) {
	// 배열값은 반드시 초기화를 해야함
	/* int subway[3]; // 3개의 int형 변수를 가진 배열
	subway[0] = 10;
	subway[1] = 20;
	subway[2] = 30; // 선언 후 값 넣기
	int add = 33;
	int arr[3] = { 1, add ,3 }; // 바로 값 넣기, 크기에는 변수 못넣고 값에는 가능
	printf("%d", arr[1]); */

	// 문자(한글자) vs 문자열(여러 문자)
	//char a = 'a'; // char : 한글자만 들어갈 수 있음
	//printf("%c", a);

	// 문자열 끝에는 끝을 의미하는 "\0"이 들어가야하는데 문자열크기보다 크게 설정거나 하지않으면 자동으로 달림
	// char str[6] = "coding";  // 이렇게 크기가 같은데 \0 안붙이면 이상하게 출력됨
	//char str[] = "coding"; // 문자(char)는 '' 문자열(string)은 ""
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str)); // 문자열 사이즈 출력 (자동으로 들어가는 끝을 의미하는 \0 까지 계산해서 7 출력)

	//char kor[] = "박준";
	//printf("%d", sizeof(kor));
	// 영어 : 한글자에 1byte
	// 한글 : 한글자에 2byte 서로 같은 글자수여도 sizeof에 따른 글자수가 다르게 byte에 따라 다르게 나옴

	// char str[] = "cccccc" 이나 char c_array[7] = { 'c', 'c', 'c', 'c', 'c', 'c', '\0'} 나 같음
	//char c_array[7] = { 'c', 'c', 'c', 'c', 'c', 'c'}; // 사이즈 안채우면 자동으로 공백 들어감
	//for (int i = 0; i < sizeof(c_array); i++) {
	//	printf("%c\n", c_array[i]);
	//}

	//for (int i = 0; i < sizeof(c_array); i++) {
	//	// int 형이기 때문에 글자가 아닌 그에 따른 ASCII 코드 값이 출력됨(null은 0) 
	//	printf("%d\n", c_array[i]);
	//}

	// ASCII 코드 : ANSI (미국 표준 협회) 에서 제시한 코드 표준 체계
	// 7bit : 총 128개 (0 ~ 127)
	// 0 -> 1 -> ... -> A -> B -> C ... -> a -> b -> c 순으로 커짐

	//printf("%d\n", '\0'); // 0
	//printf("%d\n", 'a'); // 97
	//printf("%d\n", 'b'); // 98
	//printf("%d\n", 'A'); // 65
	//printf("%d\n", 'B'); // 66

	//printf("%d\n", '0'); // 48
	//printf("%d\n", '1'); // 49


	// 모든 아스키 코드 출력
	for (int i = 0; i < 128; i++) {
		// %c 부분에 정수 넣으면 알아서 아스키 코드 됨
		printf("아스키코드 정수 %d : %c\n", i, i);
	}

	return 0;
}