#include<iostream>
#include<cstdlib> //rand() �Լ��� ����ϱ� ���� �������
#include<ctime> //time() �Լ��� ����ϱ� ���� �������
using namespace std;
class diff20 {
	int check[20];
	int data[10];
public:
	void init(){
		for (int i = 0; i <20; i++) {
			check[i] = 0; //check�迭 ���� �� 0���� �ʱ�ȭ
		}
		for (int i = 0; i < 10; i++) {
			data[i] = 0; //data�迭 ���� �� 0���� �ʱ�ȭ
		}

		srand(static_cast<unsigned>(time(0))); //���� �ð��� �õ�� ����Ͽ� �پ��� ������ �����ϴ� ����

		int cnt = 0;
		while (cnt < 10) { //10���� ���� �ٸ� ������ ������ ������ �ݺ�
			int rem = rand() % 20 + 1; //1���� 20���� �������� ���� //rand() % 20�� 0���� 19���� �̱� ������ +1�� �ϰ�
			if (check[rem - 1] == 0) { //rem�������� -1�� ��.
				data[cnt] = rem;
				check[rem - 1] = 1;
				cnt++;
			}
		}
	}

	void prnbyCreatedOrder() { //������ ���� �ٸ� ������ ������ ������ ���� ����ϴ� ����Լ�
		for (int i = 0; i < 10; i++) {
			cout << data[i] << ' ';
		}
		cout << endl;
	}

	void prnbyDecreasingOrder() { //�������İ� ���� ���� ?�� ����Լ�
		int tmp;
		for (int i = 0; i < 10; i++) {
			for (int j = i; j < 10; j++) {
				if (data[i] < data[j]) { //�� �κп��� ���� or ���Ұ� ����
					tmp = data[i];
					data[i] = data[j];
					data[j] = tmp;
				}
			}
		}
		for (int i = 0; i < 10; i++) {
			cout << data[i] << ' '; //������ ������ �����ϴ� ������ �����.
		}
	}
	
};
int main() {
	diff20 diff;
	diff.init();
	diff.prnbyCreatedOrder();
	diff.prnbyDecreasingOrder();
}