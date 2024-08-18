#include "Header.h"

//정수 3개를 입력받아서 입력한 숫자 중에서 가장 큰 수를
// 화면에 출력합니다.

// 힌트) scanf("%d %d %d" , &a &b &c);
// 를 사용시 1 2 3과 같이 한번에 적어놓은 수만큼 입력이 가능합니다.

////내풀이
//	//int number1;
//	//int number2;
//	//int number3;
//	//printf("정수 3개를 입력해주세요. >>")
//	//scanf("%d %d %d", &number1, &number2, &number3);
//
//int a, b, c;
//int largest; // 가장 큰 수
//
//printf("정수 3개를 입력해주세요. >>");
//scanf("%d %d %d", &a, &b, &c);
//
//largest = a;
//// 첫번재 값을 가장 큰 값으로 잡음
//// 그리고 값을 비교해 더 큰 값이 나오면 그 값으로 변경
//
//if (largest < b)
//{
//	largest = b;
//}
//else if (largest < c)
//{
//	largest = c;
//}
//printf("가장 큰 수 = %d입니다.\n", largest);

int main()
{
	////조건을 2개 이상 붙이는 방법
	//if (a > 0 && b > 0) // a가 0보다 크면서 b가 0보다 크다면(AND)
	//{

	//}

	//if (a > 0 || b > 0) // a가 0보다 크거나 b가 0보다 크다면(OR)
	//{

	//}
	//if (a > 0 && b > 0 || c > 0) // &&를 먼저 계산합니다.
		// a가 0보다 크면서 b가 0보다 크거나 c가 0보다 크다면

		//문제) 세 변의 길이로 유효한 삼각형인지를 조사하는 프로그램을 구현합니다.

		// 힌트) 두 변의 길이의 합이 나머지 한 변의 길이보다 커야합니다.

		//출력에시)
		// 변 A B C의 길이를 순서대로 입력해주세요  5 4 6
		// 삼각형이 성립합니다.

	int a, b, c;
	
    printf("변 a b c의 길이를 순서대로 입력해주세요. >>");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && c + b > a)
    {
	    printf("삼각형이 성립합니다.\n");
    }
    else 
	{
	    printf("삼각형이 아닙니다.\n");
    }
	    
   
	return 0;
}