#include <stdio.h>

int main(void) {
	int ary[100];//100개의 정수형 변수를 100까지 선언할 수 있음(0~99)100개
	ary[99] = 45;//99번째 변수에 45값을 저장
	ary[0] = 11;
	printf("%p, %d\n",ary, ary[23]+ary[0]);

	return 0;
}