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
			check[i] = 0; //check�迭 ���� �� 0���� �ʱ�ȭ
		}
		for (int i = 0; i < 10; i++) {
			data[i] = 0; //data�迭 ���� �� 0���� �ʱ�ȭ
		}
	}

	void prnbyCreatedOrder() {
		for (int i = 0; i < 10; i++) {
			cout << data[i] << ' ';
		}
		cout << endl;
	}

	void prnbyDecreasingOrder() { //�������İ� ���� ���� ?
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