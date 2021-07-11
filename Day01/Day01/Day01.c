#include <stdio.h>

// ---- ������ �Ұ� ----
// 010 9852 3335
// ���ѿ�
//
// ---- �ڷᱸ�� ----
// ȿ��, ����� �񱳷� ���� �ڷᱸ��, ���� �ڷᱸ�� ���� �� �ִ�
//
// ---- VS ��� ----
// c++ �� ����� ����ũž ���� �� ���(VS installer)
//
// �� ������Ʈ �� �� ������Ʈ �����
// 
// ---- ������ ���� ----
// A pointer variable is for storing addresses.
// (Addresses are predefined before data is allocated in memory. Can think of them like actual locations and names for them)
//
// How to declare a pointer: Data type *(asterisk) variable name;
// 
// To check the value of the location stored in the pointer variable, we use an * in front of the pointer. We call this dereferencing (������)
//
// Storing variables, pointer variables, and pointers to pointer variables are possible using pointers.
//
// ---- �Լ� ���� ----
// ������ �Լ� ó�� �ϳ��� �Լ��� �������� ���� �� ������, �ϳ��� ����� �����ϴ�. (One-to-one, Many-to-one)
// 
// ---- �Լ� ��� ----
// �ڵ� ������ �̿�, ���� �� ���� ����(�븮������), ó�� ���� ���α׷��� �����ϱ� ��������(������UP)
//
// ��ȯ�� "int" - ��ȯ ���� �ڷ���
// �Լ��̸� "add" - ȣ��� �̸�
// �Ű� ���� "(int a, int b)" - �Լ� ȣ�⿡ �ʿ��� ����
// �Լ� ��� "{ return a + b; }" - �Լ� ��� ���� �ڵ� ����
//
// int add(int a, int b)
// {
//     return a + b;
// }
//
// ---- �Լ� ȣ�� ----
// ȣ���� �Լ� �̸�(�μ�);
// ��ȭ���� ������ ���� = ȣ���� �Լ� �̸�(�μ�); <-- ��ȯ�� ����
//
// ex) int sum = add(5, 7);

int Add(int a, int b) {
	return a + b;
}

void Add2(int a, int b) {
	printf("Sum: %d", a + b);
}

void add(int a, int b) {
	printf("���� ��: %d\n", a + b);
}

void subtract(int a, int b) {
	printf("�� ��: %d\n", a - b);
}

int multiply(int a, int b) {
	return a * b;
}

int divide(int a, int b) {
	return a / b;
}

void Calc(char ch, int num1, int num2) {
	switch (ch)
	{
	case '+':
		add(num1, num2);
		break;
	case '-':
		subtract(num1, num2);
		break;
	case '*':
		printf("���� ��: %d\n", multiply(num1, num2));
		break;
	case '/':
		printf("���� ��: %d\n", divide(num1, num2));
	}
}

int totalMarks(int korS, int mathS, int engS) {
	return korS + mathS + engS;
}

double averageMarks(int total, int count) {
	return (double) total / count; // alternative: use 3.0 (convert count instead)
}

char gradeLetter(int score) {
	/*if (score >= 90) {
		return 'A';
	} else if (score >= 80) {
		return 'B';
	} else if (score >= 70) {
		return 'C';
	} else if (score >= 60) {
		return 'D';
	}*/

	// return 'F'; // rest is all F
	
	// using switch
	switch (score / 10) {
	case 10:
	case 9:
		return 'A';
		// no need to break here because of the return statement (see �Լ� ����, ���� �� �ϳ� �� ����)
	case 8:
		return 'B';
	case 7:
		return 'C';
	case 6:
		return 'D';
	default:
		return 'F'; // rest is all F
	}

}

int main() {

	// ������ ���

	//int num = 5;
	//int* ptr; // ���� ������, ���� ���� ������
	//int** dptr; // int ���� ������
	//int*** tptr; // int ���� ������

	//ptr = &num; // store address of num into pointer
	//dptr = &ptr;
	//tptr = &dptr;

	//printf("num address: %p\n", &num); // ampersand symbol to denote address of
	//printf("ptr value: %p\n", ptr);
	//printf("\n");

	//printf("num value: %d\n", num);
	//printf("num value using ptr pointer: %d\n", *ptr); // use asterisk here to follow the pointer in ptr
	//printf("num value using dptr pointer: %d\n", **dptr); // double asterisk
	//printf("num value using tptr pointer: %d\n", ***tptr); // triple asterisk
	//printf("\n");

	//printf("address of ptr: %p\n", &ptr); 
	//printf("value of dptr: %p\n", dptr);
	//printf("\n");

	//printf("address of dptr: %p\n", &dptr); 
	//printf("value of tptr: %p\n", tptr);


	// ���� 1

	//int n = 0;
	//int* n_ptr = &n;

	//printf("�Է�: ");
	//scanf("%d", n_ptr);

	//printf("���: ");
	//printf("%d", n);

	// �Լ� ���

	//int sum = Add(5, 6); // ��ȯ�� �ִ� �Լ�
	//printf("Sum: %d\n", sum);

	//Add2(5, 6); // ��ȯ�� ���� �Լ�

	// ���� 2

	//int num1;
	//int num2;

	//printf("�� �� �Է�: ");
	//scanf("%d%d", &num1, &num2);

	//add(num1, num2);
	//subtract(num1, num2);

	//printf("���� ��: %d\n", multiply(num1, num2));
	//printf("���� ��: %d\n", divide(num1, num2));

	// ���� 3

	//int num1;
	//int num2;
	//char ch;

	//printf("���� �Է�: ");
	//scanf("%d %c %d", &num1, &ch, &num2); // use space between scanf %d/%c

	// analyze ch and output result
	//if (ch == '+') {
	//	add(num1, num2);
	//}
	//else if (ch == '-') {
	//	subtract(num1, num2);
	//}
	//else if (ch == '*') {
	//	printf("���� ��: %d\n", multiply(num1, num2));
	//}
	//else if (ch == '/') {
	//	printf("���� ��: %d\n", divide(num1, num2));
	//}
	//switch(ch)
	//{
	//case '+':
	//	add(num1, num2);
	//	break;
	//case '-':
	//	subtract(num1, num2);
	//	break;
	//case '*':
	//	printf("���� ��: %d\n", multiply(num1, num2));
	//	break;
	//case '/':
	//	printf("���� ��: %d\n", divide(num1, num2));
	//}
	//Calc(ch, num1, num2);

	// ���� 4

	int korS, mathS, engS;
	printf("����, ����, ���� �Է�: ");
	scanf("%d %d %d", &korS, &mathS, &engS);

	int total = totalMarks(korS, mathS, engS);
	double avg = averageMarks(total, 3);
	char grade = gradeLetter(avg);

	printf("����: %d\n", total);
	printf("���: %.2f\n", avg);
	printf("���: %c", (int) grade);

	return 0;
}