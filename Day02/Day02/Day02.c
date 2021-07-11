#include <stdio.h>

// --- ������ ���� ----
// ����, ����, ���� ���� type ����
// (��� ����, ���α׷� ����*, �Ѵ� Ư�� ����)    * = �߿�
// ������������������������������������������������������������������������������������������������������������
// |(��) CODE | DATA ����, ���� | HEAP | STACK ���� (�Ʒ�)|
// ������������������������������������������������������������������������������������������������������������
// 
// ---- ������ ���� ���� ----
// ���� ���ο� ���ο� ���� �����ϰ� �Ȱ��� �̸� �����ִ� ������ �����ϰ� �Ǹ� ���ο� �ִ� ������ �� ���� �켱������ ���� �ȴ�
// ���� ������ ������ �ʱ�ȭ�� �������� ������ ������ 0���� �ʱ�ȭ �ȴ�
// ���� ������ ���� ������ �̸��� ������, ���� ������ �� ���� �켱������ ���� �ȴ�
// ���� ������ ���� ������ ���� ������ Ư¡�� �� �� �����ִ�
// - ���α׷� ���� �� ������ �����Ǵ� Ư��
// - ����� ���ο����� Ȱ�� ������ Ư��
// 
// ---- ���� ���� ���� ��� ----
// static �ڷ��� ������;

//char global_char;
//int num;


//void func() {
//	int num1 = 3;
//	static int num2 = 3;
//
//	printf("num1: %d, num2: %d\n", num1, num2);
//	num1++;
//	num2++;
//}

void func(int* num) {
	(*num)++; // ������ ���� �ı� ++ ������ ���� �켱���� ����
}

void Total(int* score, int korS, int matS, int engS) {
	*score = korS + matS + engS;
}

void Avg(double* avg, int total, int count) {
	*avg = (double) total / count;
}

void Grade(char* grade, double score) {
	switch((int) score / 10)
	{
		case 10:
		case 9:
			*grade = 'A';
			break;
		case 8:
			*grade = 'B';
			break;
		case 7:
			*grade = 'C';
			break;
		case 6:
			*grade = 'D';
			break;
		default:
			*grade = 'F';
	}
}

int main() {
	//int num = 5; // ���� ����
	//int num2 = 7;

	//{
	//	int num = 3;
	//	printf("num�� ��: %d\n", num);
	//	printf("num2�� ��: %d\n", num2);
	//}

	//printf("num�� ��: %d\n", num);

	//int num = 4;
	//printf("num�� ��: %d\n", num);
	////printf("char�� ���� ��: %d\n", global_char);

	//func();
	//func();

	//int num = 4;

	//func(&num);

	//printf("num�� ��: %d\n", num); 

	int korS, matS, engS;

	int total;
	double avg;
	char grade;

	printf("����, ����, ���� �Է�: ");
	scanf("%d %d %d", &korS, &matS, &engS);

	Total(&total, korS, matS, engS);
	Avg(&avg, total, 3);
	Grade(&grade, avg);

	printf("����: %d\n", total);
	printf("���: %.2f\n", avg);
	printf("���: %c", grade);

	return 0;
}