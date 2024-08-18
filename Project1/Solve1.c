#include "Header.h"

int main()
{
	// 메뉴가격
	int menu1 = 1000;
	int menu2 = 2000;
	int menu3 = 3000;

	// 화면 출력
	printf("1. A  %d\n", menu1);
	printf("2. B  %d\n", menu2);
	printf("3. C  %d\n", menu3);

	//사용자 입력
	int menu_select;
	printf("메뉴의 번호를 입력해주세요");
	scanf("%d", &menu_select);

	int money = 2000;  // 사용자의 금액 따로 선택
	int cost = 0; // 지불해야하는 비용

	if (menu_select == 1)
	{
		cost = menu1;
	}
	else if (menu_select == 2)
	{
		cost = menu2;
	}
	else
	{
		cost = menu3;
	}

	//계산
	if (money >= cost)
	{
		money -= cost;
		printf("물건을 구매했습니다.");
	}
	else
	{
		printf("잔액이 부족합니다.");
	}


	return 0;
}