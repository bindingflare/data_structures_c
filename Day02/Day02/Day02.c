#include <stdio.h>

// --- 변수의 범의 ----
// 지역, 전역, 정적 변수 type 가능
// (블록 내부, 프로그렘 종료*, 둘다 특성 있음)    * = 중요
// ――――――――――――――――――――――――――――――――――――――――――――――――――――――
// |(위) CODE | DATA 전역, 정적 | HEAP | STACK 지역 (아래)|
// ――――――――――――――――――――――――――――――――――――――――――――――――――――――
// 
// ---- 변수의 선언 범의 ----
// 지역 내부에 새로운 지역 생성하고 똑같은 이름 갖고있는 변수를 선언하게 되면 내부에 있는 변수가 더 높은 우선순위를 갖게 된다
// 전역 변수는 별도의 초기화를 진행하지 않으면 별도로 0으로 초기화 된다
// 전역 변수와 지역 변수의 이름이 같으면, 지역 변수가 더 높은 우선순위를 갖게 된다
// 전적 변수는 지역 변수와 전역 변수의 특징을 둘 다 갖고있다
// - 프로그렘 종료 때 공간이 헤제되는 특성
// - 선언된 내부에서만 활용 가능한 특성
// 
// ---- 전적 변수 선언 방법 ----
// static 자료형 변수명;

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
	(*num)++; // 역참조 보다 후기 ++ 연산이 먼저 우선순위 있음
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
	//int num = 5; // 지역 변수
	//int num2 = 7;

	//{
	//	int num = 3;
	//	printf("num의 값: %d\n", num);
	//	printf("num2의 값: %d\n", num2);
	//}

	//printf("num의 값: %d\n", num);

	//int num = 4;
	//printf("num의 값: %d\n", num);
	////printf("char의 숫자 값: %d\n", global_char);

	//func();
	//func();

	//int num = 4;

	//func(&num);

	//printf("num의 값: %d\n", num); 

	int korS, matS, engS;

	int total;
	double avg;
	char grade;

	printf("국어, 수학, 영어 입력: ");
	scanf("%d %d %d", &korS, &matS, &engS);

	Total(&total, korS, matS, engS);
	Avg(&avg, total, 3);
	Grade(&grade, avg);

	printf("총합: %d\n", total);
	printf("평균: %.2f\n", avg);
	printf("등급: %c", grade);

	return 0;
}