//#include <stdio.h>
//
//void fruit(int count);
//
//int main() {
//	fruit(1);
//
//	return 0;
//}
////count값이 fruit함수로 1로 지정되었을 때 count값이 3이 될 때까지 +1을 실행
////count값이 3이되기 전까지 사과함수를 실행 count값이 3이되면 return값이 실행되어
////printf(사과)가 실행안함
//void fruit(int count) {
//	printf("apple\n");
//	if (count == 3) return;//count값이 3이되면 return값이 실행되어 printf(사과)가 실행안함
//	fruit(count + 1); //+1값
//	printf("사과\n");//count값이 3이되기 전까지 사과함수를 실행 count값이 3이되면 return값이 실행되어 printf(사과)가 실행안함
//}