#include "Header.h"


#define POINT 100
#define PIE 3.141592

//define�� ��ũ�θ� ����� ����Դϴ�.
//��ũ�δ� �����ϰ� ����ڰ� ����� ���� �̸��� ���̴� ��


// ���α׷� �ڵ尡 ����Ǵ� ����
// ���� *ǥ�� ���� ��ư ctrl+c
// ������Ʈ ������ �۾��� ��� main�� 1���� ��� ����
int main()
{
#if POINT == 100
	printf("����Ʈ�� �ִ�ġ�Դϴ�.");
#elif POINT < 100 
	printf("���� ����Ʈ�� %d�Դϴ�.", POINT);
#endif

	float length = 0; //float�� �Ǽ��� ǥ���ϴ� �������Դϴ�.
	int radius = 2; // int�� ������ ǥ���ϴ� �������Դϴ�.

	//length�� ���� ���� ���̸� �����ϰ��� �մϴ�.

	length = 2 * 3.141592 * radius;
	length = 2 * PIE * radius;
	
	// PIE�� ���ǵǾ��ִٸ� ROUND�� �����մϴ�.
	// ROUND�� ���� �ѷ��� ���ϴ� ��ũ���Դϴ�.
#ifdef PIE 
#define ROUND 2 * PIE * radius
#endif
	length = ROUND; 


	printf("���� �ѷ� : %.2f", length);
		// %2f�� �Ҽ��� ���ڸ����� ǥ���ϴ� ��
		// , �� ���� �����͸� ������ �� �����Ͱ� �Ѿ�ϴ�.
		// ���� %.2f�� length�� ���� ������ �˴ϴ�. 



	return 0;

}