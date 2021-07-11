#include <stdio.h>

// ---- 교수님 소개 ----
// 010 9852 3335
// 임한울
//
// ---- 자료구조 ----
// 효율, 상대적 비교로 좋은 자료구조, 나쁜 자료구조 비교할 수 있다
//
// ---- VS 사용 ----
// c++ 을 사용한 데스크탑 개발 만 사용(VS installer)
//
// 빈 프로젝트 로 새 프로젝트 만들기
// 
// ---- 포인터 개념 ----
// A pointer variable is for storing addresses.
// (Addresses are predefined before data is allocated in memory. Can think of them like actual locations and names for them)
//
// How to declare a pointer: Data type *(asterisk) variable name;
// 
// To check the value of the location stored in the pointer variable, we use an * in front of the pointer. We call this dereferencing (역참조)
//
// Storing variables, pointer variables, and pointers to pointer variables are possible using pointers.
//
// ---- 함수 정의 ----
// 수학적 함수 처럼 하나의 함수는 여러값을 받을 수 있지만, 하나의 결과만 가능하다. (One-to-one, Many-to-one)
// 
// ---- 함수 사용 ----
// 코드 여러번 이용, 수정 및 관리 편함(용리해진다), 처음 보는 프로그레머 이해하기 쉬어진다(가독성UP)
//
// 반환형 "int" - 반환 값의 자료형
// 함수이름 "add" - 호출용 이름
// 매개 변수 "(int a, int b)" - 함수 호출에 필요한 값들
// 함수 기능 "{ return a + b; }" - 함수 기능 맡은 코드 영역
//
// int add(int a, int b)
// {
//     return a + b;
// }
//
// ---- 함수 호출 ----
// 호출할 함수 이름(인수);
// 반화값을 저장할 변수 = 호출할 함수 이름(인수); <-- 반환값 존재
//
// ex) int sum = add(5, 7);

int Add(int a, int b) {
	return a + b;
}

void Add2(int a, int b) {
	printf("Sum: %d", a + b);
}

void add(int a, int b) {
	printf("더한 값: %d\n", a + b);
}

void subtract(int a, int b) {
	printf("뺀 값: %d\n", a - b);
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
		printf("곱한 값: %d\n", multiply(num1, num2));
		break;
	case '/':
		printf("나눈 값: %d\n", divide(num1, num2));
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
		// no need to break here because of the return statement (see 함수 정의, 리턴 값 하나 만 가능)
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

	// 포인터 사용

	//int num = 5;
	//int* ptr; // 단일 포인터, 밑은 다중 포인터
	//int** dptr; // int 이중 포인터
	//int*** tptr; // int 삼중 포인터

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


	// 문제 1

	//int n = 0;
	//int* n_ptr = &n;

	//printf("입력: ");
	//scanf("%d", n_ptr);

	//printf("출력: ");
	//printf("%d", n);

	// 함수 사용

	//int sum = Add(5, 6); // 반환값 있는 함수
	//printf("Sum: %d\n", sum);

	//Add2(5, 6); // 반환값 없는 함수

	// 문제 2

	//int num1;
	//int num2;

	//printf("두 수 입력: ");
	//scanf("%d%d", &num1, &num2);

	//add(num1, num2);
	//subtract(num1, num2);

	//printf("곱한 값: %d\n", multiply(num1, num2));
	//printf("나눈 값: %d\n", divide(num1, num2));

	// 문제 3

	//int num1;
	//int num2;
	//char ch;

	//printf("연산 입력: ");
	//scanf("%d %c %d", &num1, &ch, &num2); // use space between scanf %d/%c

	// analyze ch and output result
	//if (ch == '+') {
	//	add(num1, num2);
	//}
	//else if (ch == '-') {
	//	subtract(num1, num2);
	//}
	//else if (ch == '*') {
	//	printf("곱한 값: %d\n", multiply(num1, num2));
	//}
	//else if (ch == '/') {
	//	printf("나눈 값: %d\n", divide(num1, num2));
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
	//	printf("곱한 값: %d\n", multiply(num1, num2));
	//	break;
	//case '/':
	//	printf("나눈 값: %d\n", divide(num1, num2));
	//}
	//Calc(ch, num1, num2);

	// 문제 4

	int korS, mathS, engS;
	printf("국어, 수학, 영어 입력: ");
	scanf("%d %d %d", &korS, &mathS, &engS);

	int total = totalMarks(korS, mathS, engS);
	double avg = averageMarks(total, 3);
	char grade = gradeLetter(avg);

	printf("총합: %d\n", total);
	printf("평균: %.2f\n", avg);
	printf("등급: %c", (int) grade);

	return 0;
}