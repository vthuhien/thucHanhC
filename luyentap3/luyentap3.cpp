
#include <iostream>
#include <algorithm>;
#include<random>;
using namespace std;
// nhập vào 2 pt ab và hoán đổi gtri của chúng

//void Hoandoi(double* pt1, double* pt2) {
//	double chua = *pt1;// gán giá trị biến chứa cho a
//	*pt1 = *pt2;
//	*pt2 = chua;
//}
//
//
//int main()
//{
//	double a;
//	double b;
//	cout << "moi nhap vào bien a" << endl;
//	cin >> a;
//	cout << "moi nhap vào bien b" << endl;
//	cin >> b;
//	Hoandoi(&a, &b);
//	cout << "sau khi hoan doi , gtri cua a la " << a << " va gtri cua b la " << b << endl;
//}

//sử dụng mảng con trỏ để nhập vào 1 mảng 1 chiều M có pt 
// là các số ngẫu nhiên và sắp xếp mảng m theo chiều giảm dần

void khaibao(int*& m, int n) { //khai báo con trỏ m và pt
	m = new int[n]; //  cấp phát bộ nhớ 
    random_device test;
	mt19937 gen(test());
	uniform_int_distribution<> dis(0, 99);
	for (int i = 0; i < n; i++) {
		*(m + i) = dis(gen);
	}
	for (int i = 0; i < n; i++) {
		cout << *(m + i) << " ";
	}
}
int main()
{
	int* m;
	int n=10;
	cout << "ham co cac pt ngau nhien la" << endl;
	khaibao(m, n);
}