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

	// 문자열에는 끝을 의미하는 "\0"이 들어가야하는데 문자열크기보다 크게 설정거나 하지않으면 자동으로 달림
	//char str[] = "coding"; // 문자는 '' 문자열은 ""
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str));

	/*char kor[] = "박준";
	printf("%d", sizeof(kor));*/
	// 영어 : 한글자에 1byte
	// 한글 : 한글자에 2byte 서로 같은 글자수여도 sizeof에 따른 글자수가 다르게 byte에 따라 다르게 나옴


	return 0;
}