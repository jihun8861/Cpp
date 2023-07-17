#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class diff20 {
	int check[20];
	int data[10];
public:
	void init(){
		for (int i = 0; i < 20; i++) {
			check[i] = 0; //check배열 선언 후 0으로 초기화
		}
		for (int i = 0; i < 10; i++) {
			data[i] = 0; //data배열 선언 후 0으로 초기화
		}
	}

	void prnbyCreatedOrder() {
		for (int i = 0; i < 10; i++) {
			cout << data[i] << ' ';
		}
		cout << endl;
	}

	void prnbyDecreasingOrder() { //버블정렬과 같은 개념 ?
		int tmp;
		for (int i = 0; i < 10; i++) {
			for (int j = i; j < 10; j++) {
				if (data[i] < data[j]) {
					tmp = data[i];
					data[i] = data[j];
					data[j] = tmp;
				}
			}
		}
		for (int i = 0; i < 10; i++) {
			cout << data[i] << ' ';
		}
	}
	void random() {

	}
};
int main() {
	diff20 diff;
	diff.init();
	diff.prnbyCreatedOrder();
	diff.prnbyDecreasingOrder();
}