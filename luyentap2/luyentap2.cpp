#include <iostream>
#include <cmath> // tính căn bậc 2
#include <algorithm>// set random
#include <random>
using namespace std;
//int main()
//{

	// vẽ chữ n bằng vòng lặp for lồng for

	/*for (int i = 1; i <= 7; i++) {
		for (int j = 1; j <= 7; j++) {
			if (j == 1 || j == 7 || i == j) {
				cout << i << j << " ";
			}
			else
			{
				cout << "  " << " ";
			}


		}
		cout << "  " << endl;
	}*/

	// vẽ hình vuông bằng vòng lặp lồng for

	/*for (int i = 1; i <= 7; i++) {
		for (int j = 1; j <= 7; j++) {
			if (j==1||j==7||i==1||i==7)
			{
				cout << i << j << " ";
			}
			else
			{
				cout << "  " << " ";
			}

		}
		cout << endl;
	}*/

	// vẽ hình tam giac bằng vòng lặp lồng for

	/*for (int i = 1; i <= 7; i++) {
		for (int j = 1; j <= 7; j++) {
			if (j==1||i==7||j<=i)
			{
				cout << i << j << " ";
			}
			else
			{
				cout << "  " << " ";
			}
		}
		cout << endl;
	}*/

	//}

	// giải pt bậc 2 dùng hàm thủ tục :

	//void giaiPtb2(double a, double b, double c) {
	//	double x1,x2;
	//	double dental = (b * b) - (4 * a * c);
	//	if (dental > 0){
	//		x1 = (-b + sqrt(dental) / 2 * a);
	//		x2 = (-b - sqrt(dental) / 2 * a);
	//		cout << "pt co 2 nghiem"<<endl;
	//		cout << "x1 =" << x1 << endl;
	//		cout << "x2 =" << x2 << endl;
	//	}
	//	else if(dental == 0){
	//		x1 =  -b / (2 * a);
	//		cout << "phuong trinh co nghiem kep x1 = x2 "<<x1 << endl;
	//	}
	//	else
	//	{
	//		cout << "phuong trinh vo nghiem" << endl;
	//	}
	//}
	//int main()
	//{
	//	giaiPtb2(1, 2, 3);
	//	giaiPtb2(1, 2, 1);
	//	giaiPtb2(1, 2, -3);
	//
	//	double a, b, c;
	//	cout << "moi nhap vao a";
	//	cin >> a;
	//	cout << "moi nhap vao b";
	//	cin >> b;
	//	cout << "moi nhap vao c ";
	//	cin >> c;
	//	giaiPtb2(a, b, c);
	// }

	// giải pt bậc 2 dùng hàm return :

	//double giaiPtb2(double a, double b, double c) {
	//	double x1, x2;
	//	double dental = (b * b) - (4 * a * c);
	//	if (dental > 0) {
	//		x1 = (-b + sqrt(dental) / 2 * a);
	//		x2 = (-b - sqrt(dental) / 2 * a);
	//		
	//		cout << "phuong trinh co 2 nghiem" << endl;
	//		return x1, x2;
	//	}
	//	else if (dental == 0)
	//	{
	//		x1 = -b / (2 * a);
	//		cout << " phuong trinh co 2 nghiem kep x1 = x2 ="  << endl;
	//		return x1;
	//	}
	//	else
	//	{
	//		cout << "phuong trinh vo nghiem" << endl;
	//		return 0;
	//	}
	//	
	//}
	//int main()
	//{
	//	int kq = giaiPtb2(1, 2, 1);
	//	cout << "ket qua phep tinh la" << kq << endl;
	//}

	// nhập vào 2 số a,b tính +,-,*,/

	//void phepTinh(int a, int b, string giaTri) {
	//	double kq;
	//	if (giaTri._Equal("+")) {
	//		kq = a + b;
	//		cout << "tong cua chung " << kq << endl;
	//	}
	//	else if (giaTri._Equal("-")) {
	//		kq = a - b;
	//		cout << "hieu cua chung " << kq << endl;
	//	}
	//	else if (giaTri._Equal("*")) {
	//		kq = a * b;
	//		cout << "tich cua chung " << kq << endl;
	//	}
	//	else if (giaTri._Equal("/")) {
	//		kq = a / b;
	//		cout << "thuong cua chung " << kq << endl;
	//	}
	//}
	//int main()
	//{
	//	int a;
	//	int b;
	//	string giaTri;
	//	cout << "moi nhap vao so a" <<endl;
	//	cin >> a;
	//	cout << "moi nhap vao so b"<< endl;
	//	cin >> b;
	//	cout << "ket qua cua phep tinh" << endl;
	//	cin >> giaTri;
	//	phepTinh(a, b, giaTri);
	//
	//}

	// đệ quy

	// tính n bằng dãy fibonaci
	// + quy luật : Fn = F(n-1) + F(n-2);
	// + điểm dừng : n<=2 thì Fn =1 

	//int pheptinh(int n) {
	//	if (n <= 2)
	//		return 1;
	//	return pheptinh(n - 1) + pheptinh(n - 2);
	//}
	//int main()
	//{
	//	int kq = pheptinh(4);
	//	cout << "kq =" << kq;
	//}

	//mảng 1 chiều -array
	//int main()
	//{

	//cho ng dÙng tự nhập vào các phần tử rồi in ra mảng đó

		//	int mang[4]; // cho mang co 4 pt
		//	for (int i = 0; i < size(mang); i++) {
		//		cout << "nhap so di" << i << endl;
		//		cin >> mang[i];
		//	}
		//	cout << "mang b vua nhap la" << endl;
		//	for (int pt : mang) {
		//		cout<< pt << " ";
		//	}

	//tạo 1 mảng ngẫu nhiêu có 10 phần tử

		/*random_device test;
		mt19937 gen(test());
		uniform_int_distribution<> dis(0, 99);

		int c[10];
		for (int i = 0; i < size(c); i++) {
			c[i] = dis(gen);

		}
		cout << "mang ngau nhien cua b la" << endl;
		for (int pt : c) {
			cout << pt << " ";
		}*/

		//a. xuất ra các pt trong mảng

		//	random_device test;
		//	mt19937 gen(test());
		//	uniform_int_distribution<> dis(0, 99);
		//
		//	int mang[7];
		//	for (int i = 0; i < size(mang); i++) {
		//		mang[i] = dis(gen);
		//	}
		//	cout << "cac  phan tu cua mang la " << endl;
		//	for (int pt : mang) {
		//		cout << pt << " ";
		//	}
		//	cout << endl; 

		//b. đảo ngược mảng và xuất ra

		//	for (int i = 0; i < size(mang); i++) {
		//		reverse(mang, mang + size(mang));
		//	}
		//	cout << "mang dao nguoc la" << endl;
		//	for (int pt : mang) {
		//		cout << pt << " ";
		//	}
		//	cout << endl;

		//c.sap xep mang tang dan       

		//	for (int i = 0; i < size(mang); i++) {
		//		sort(mang, mang + size(mang));
		//	}
		//	cout << "sap xep mang tang dan la" << endl;
		//	for (int pt : mang) {
		//		cout << pt << " ";
		//	}
		//	cout << endl; 

		//d. tinh tong cac pt trong mang

		//	int sum = 0;
		//	cout << "cac phan tu cua mang la" << endl;
		//	for (int pt : mang) {
		//		cout << pt << " ";
		//	}
		//	cout << endl;
		//	for (int i = 0; i < size(mang); i++) {
		//		 sum += mang[i]; //mang[i] - giá trị của mạng tại index -nghĩa là từng phần tử
		//	}
		//	cout << "tong cua cac pt trong mang la" << sum << endl;

		//e.  cho ng dùng nhập số bất kì và ktra xem số đó là số thứ mấy trong bảng

		/*int mang[] = { 23,12,45,67,57,98 };
		int pt;
		cout << "nhap vao 1 so nguyen" << endl;
		cin >> pt;
		int dem = 0;
		for (int i = 0; i < size(mang); i++) {
		if (pt == mang[i]) {
			dem++;
		}
	
		}
		if (dem == 0) {
		cout << "so cua b k co trong mang" << endl;
		}
		else
		{
		cout << "so cua b o vi tri thu" << dem << endl;
		}*/

//}

// mảng 2 chiều - matrix
int main()
{
	// tạo 1 mảng 2 chiều ngẫu nhiên

	random_device test;
	mt19937 gen(test());
	uniform_int_distribution<> dis(0, 99);
	const int row = 4;
	const int col = 6;
	int mang[4][6];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			mang[i][j] = dis(gen);
		}
	}
	cout << "mang cua b la" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << mang[i][j] << " ";
		}
		cout << endl;
	}

	// tìm số lớn nhất trong mảng
		// cách giải : set 1 biến ở tọa độ 0 0 là số lớn nhất 
		// sau đó duyệt qua mảng nếu số t2 lớn hơn thì gán số t2 cho nó

	int so = mang[0][0];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (mang[i][j] >= so)
			{
				so = mang[i][j];
			}
		}
	}
	cout << "so lon nhat trong mang la" << so << endl;

	// tìm số bé nhất trong mảng
	int min = mang[0][0];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (mang[i][j] < min) {
				min == mang[i][j];
			}
		}
	}
	cout << "so nho nhat trong mang la" << min << " ";

	// tính tổng các phần tử trong mảng
	int tong = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			tong += mang[i][j];
		}
	}
	cout << "tong cua cac phantu la" << tong << endl;

	// cho ng dùng nhập số bất kì và ktra xem số đó là số thứ mấy trong bảng
	int pt;
	cout << "nhap 1 so n guyen bat ky";
	cin >> pt;
	int dem = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (pt == mang[i][j]) {
				dem++;
			}
		}

	}
	if (dem == 0) {
		cout << "so cua b k co trong mang" << endl;
	}
	else
	{
		cout << "so cua b o vi tri thu" << dem << endl;
	}
}