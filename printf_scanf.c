#include <stdio.h>
int main_printfscanf(void) {
	// ������ ����
	int age = 12;		 // css�� �ּ��� ���� /* code */    
	printf("%d\n", age); // %d : %d ��ġ�� �������� ����ϰڴٴ� �ǹ� , �ڿ� �������� ������ ��  \n : �ٹٲ�
	age = 13;
	printf("%d\n", age);

	// �Ǽ��� ����
	float ������ = 70.4f; // float���� ���� �ڿ� f�� �ٿ�����
	printf("%.1f\n", ������); // %f : �Ǽ����� ����ϰڴ�, %.1f : .�ڿ����� ���ڸ�ŭ�� �Ҽ����� ǥ���ϰڴ�
	double d = 40.428;
	printf("%.2lf\n", d); // 2���� ���� ����Ҷ� �ٷεڿ� ���� �ݿø��Ͽ� �����

	// ���
	const int ���� = 2003; // const : ���(���ٲٴ� ��)
	printf("���� �¾ ���� : %d\n", ����);
	// ���� = 13; �ּ�Ǯ�� ������

	//printf
	int a = 13;
	int b = 13;
	int c = a + b;
	printf("13 + 13 = %d\n", c);
	printf("%d * %d = %d\n", 14, 2366, 14 * 2366);

	//scanf : Ű���� �Է��� �޾Ƽ� �����ϴ� �Լ�
	int inputage;
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &inputage); // �������� ���� ���� �տ� &�� �־����
	printf("����� %d���̱���! \n", inputage);

	int one, two, three;
	printf("3���� ������ �Է��ϼ���");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);

	// ����(�� ����), ���ڿ�(�� ���� �̻��� ��������)
	char ch = 'A';
	printf("%c\n", ch);

	char str[256]; // 256���� ���ڸ� ���� �� �ִ� ������ ����ڴ�
	scanf_s("%s", str, sizeof(str)); // sizeof(����) : ������ ũ�� ������ ���ڿ��� �ްڴ� 
	printf("%s\n", str);
	

	// ������Ʈ : �������� �������� ����(�̸�, ���� ��)�Լ� (�����ۼ�)
	char �������̸�[30];
	printf("�̸���?");
	scanf_s("%s", �������̸�, sizeof(�������̸�));

	int �����ڳ���;
	printf("���̴�?");
	scanf_s("%d", &�����ڳ���);

	float �����ڸ�����;
	printf("�����Դ�?");
	scanf_s("%f", &�����ڸ�����);

	char �˸�[30];
	printf("�ֿ�?");
	scanf_s("%s", �˸�, sizeof(�˸�));

	// ���� ���
	printf("\n\n--- ������ ���� ---\n\n");
	printf("�̸�     : %s\n", �������̸�);
	printf("����     : %d\n", �����ڳ���);
	printf("������   : %.2f\n", �����ڸ�����);
	printf("�˸�     : %s\n", �˸�);

	return 0;
}