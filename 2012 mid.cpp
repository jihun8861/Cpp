#include<iostream>
#include<cstdlib> //rand() 함수를 사용하기 위한 헤더파일
#include<ctime> //time() 함수를 사용하기 위한 헤더파일
using namespace std;
class diff20 {
	int check[20];
	int data[10];
public:
	void init(){
		for (int i = 0; i <20; i++) {
			check[i] = 0; //check배열 선언 후 0으로 초기화
		}
		for (int i = 0; i < 10; i++) {
			data[i] = 0; //data배열 선언 후 0으로 초기화
		}

		srand(static_cast<unsigned>(time(0))); //현재 시간을 시드로 사용하여 다양한 난수를 생성하는 역할

		int cnt = 0;
		while (cnt < 10) { //10개의 서로 다른 정수가 생성될 때까지 반복
			int rem = rand() % 20 + 1; //1부터 20까지 랜덤으로 생성 //rand() % 20이 0부터 19까지 이기 때문에 +1을 하고
			if (check[rem - 1] == 0) { //rem변수에서 -1을 함.
				data[cnt] = rem;
				check[rem - 1] = 1;
				cnt++;
			}
		}
	}

	void prnbyCreatedOrder() { //생성된 서로 다른 정수를 생성된 순서에 따라 출력하는 멤버함수
		for (int i = 0; i < 10; i++) {
			cout << data[i] << ' ';
		}
		cout << endl;
	}

	void prnbyDecreasingOrder() { //버블정렬과 같은 개념 ?의 멤버함수
		int tmp;
		for (int i = 0; i < 10; i++) {
			for (int j = i; j < 10; j++) {
				if (data[i] < data[j]) { //이 부분에서 증가 or 감소가 결정
					tmp = data[i];
					data[i] = data[j];
					data[j] = tmp;
				}
			}
		}
		for (int i = 0; i < 10; i++) {
			cout << data[i] << ' '; //생성된 정수를 감소하는 순서로 출력함.
		}
	}
	
};
int main() {
	diff20 diff;
	diff.init();
	diff.prnbyCreatedOrder();
	diff.prnbyDecreasingOrder();
}