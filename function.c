#include <stdio.h>
// �Լ� ���� 
void printInt(int num);
int intFunction(int num);
int add(int num, int addValue);
int subtrack(int num, int subValue);
int multiply(int num, int mulValue);
int division(int num, int divValue);

int main_function(void) {
	printInt(intFunction(4124));
	printInt(add(33, 1252));

	return 0;
}

// �Լ� ����
void printInt(int num) {
	printf("num �� %d �Դϴ�.", num);
}

// ��ȯ���� �ִ� �Լ�
int intFunction(int num) {
	return num *= num;
}

int add(int num, int addValue) {
	return num + addValue;
}

int subtrack(int num, int subValue){
	return num - subValue;
}

int multiply(int num, int mulValue){
	return num * mulValue;
}

int division(int num, int divValue){
	return num / divValue;
}