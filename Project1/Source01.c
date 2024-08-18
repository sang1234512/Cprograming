#include "Header.h"


#define POINT 100
#define PIE 3.141592

//define은 매크로를 만드는 기능입니다.
//매크로는 간단하게 사용자가 상수에 대해 이름을 붙이는 것


// 프로그램 코드가 실행되는 영역
// 위에 *표시 저장 버튼 ctrl+c
// 프로젝트 단위로 작업할 경우 main은 1개만 사용 가능
int main()
{
#if POINT == 100
	printf("포인트가 최대치입니다.");
#elif POINT < 100 
	printf("현재 포인트는 %d입니다.", POINT);
#endif

	float length = 0; //float는 실수를 표현하는 데이터입니다.
	int radius = 2; // int는 정수를 표현하는 데이터입니다.

	//length를 통해 원의 길이를 포현하고자 합니다.

	length = 2 * 3.141592 * radius;
	length = 2 * PIE * radius;
	
	// PIE가 정의되어있다면 ROUND를 정의합니다.
	// ROUND는 원의 둘레를 구하는 매크로입니다.
#ifdef PIE 
#define ROUND 2 * PIE * radius
#endif
	length = ROUND; 


	printf("원의 둘레 : %.2f", length);
		// %2f는 소수점 두자리까지 표현하는 값
		// , 를 통해 데이터를 넣으면 그 데이터가 넘어갑니다.
		// 현재 %.2f는 length의 값을 가지게 됩니다. 



	return 0;

}