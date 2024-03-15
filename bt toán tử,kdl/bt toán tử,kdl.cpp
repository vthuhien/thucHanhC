#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
//1.

//int main()
//{
//	// dùng hàm làm tròn để lấy đến chữ số thập phân thứ 4
//	/*float x;
//	cin >> x;
//	cout << fixed << setprecision(4) << x;*/
//
//	int a, b;
//	cin >> a >> b;
//	int tong = a + b;
//	int hieu = a - b;
//	long long tich = (long long)a * b; // khi số quá lớn hãy sử dụng kiểu dữ liệu lớn hơn để chứa
//	float thuong = (float)a / b;// ép kiểu để kh bị tràn số
//	cout << tong << " " << hieu << " " << tich << " " << fixed << setprecision(2) << thuong;
//
//	
//}

//2.

//int main()
//{
//	int r;
//	cin >> r;
//	float pi = 3.14;
//	float cvi = r * 2 * pi;
//	float dientich = r * r * pi;
//	cout<<fixed<<setprecision(2) << "cvi hinh tron: " << cvi << endl << "dientich hinh tron: " << dientich;
//}

//3.

//int main()
//{
//	int x1, y1, x2, y2;
//	cin >> x1 >> y1 >> x2 >> y2;
//	float bt1 = (x1 - x2)*(x1 - x2);
//	float bt2 = (y1 - y2) * (y1 - y2);
//	float kq = sqrt(bt1 + bt2);
//	cout << "khoang cach cua 2 so: "<<fixed<<setprecision(2) << kq;
//}

//4.

//int main()
//{
//	int C;
//	cin >> C;
//	float F = (float)(C * 9 / 5) + 32;
//	cout << "chuyen dvi do nhiet do tu C sang F: " <<fixed<<setprecision(2)<< F;
//}

//5.

//int main()
//{
//	//double n;
//	//cin >> n;
//	//cout << "gtri tuyet doi: " << abs(n) << endl;
//
//	/*double y;
//	cin >> y;
//	double can = sqrt(y);
//	cout << "tinh can bac 2" <<fixed<<setprecision(2)<< can << endl;*/
//
//	int a, b;
//	cin >> a >> b;
//	cout << "tinh luy thua cua ab: " << pow(a, b) << endl;
//}

//6. tính tổng dãy số S=1+2+3+...n 
// CT: S(n)= n(1+n)/2

//int main()
//{
//	int n;
//	cin >> n;
//	long long sum =(long long)n*(1 + n) / 2;
//	cout << "tong day so: " << sum;
//}

//7. tính tổng dãy số bình phương S=1^2+2^2...+n^2
// CT: n(n+1)*2(n+2)/6

//int main()
//{
//	int n;
//	cin >> n;
//	long long sum = (long long)n * (n + 1) * 2*(n + 2) / 6;
//	cout << "tong day binh phuong: " << sum;
//}

//8. tính tổng dãy số S= 1/1+2 + 1/2+3 + 1/3+4 +...1/n(n+1)
//CT : 1/1 - 1/2 + 1/2 - 1/3 +1/3 -1/4...1/n + 1/(n+1)
//    =1 - 1/n+1

//int main()
//{
//	int n;
//	cin >> n;
//	double sum = 1 - (double)1 / (n + 1); // ép kiểu
//	cout << "kqua cua day so: " << fixed << setprecision(2) << sum;
//}

//9. tính tổng S= 2+4+6+8+...+2*n
// CT: 2(1+2+3+4+5...+n)
//   = 2* n(n+1)/2
//   = n(n+1)

//int main()
//{
//	long long n;
//	cin >> n;
//	long long sum = n * (n + 1);
//	cout << "kq cua day so: " << sum;
//}

//10. tính tổng S= -1+2-3+4-5+6...+(-1)^n*n
// CT: số chẵn = n/2
//     số lẻ = ((n-1)/2)-n

//int main()
//{
//	long long n;
//	cin >> n;
//	cout << "kq cua day so la "  << endl;
//	if (n % 2 == 0) {
//		long long soChan = n / 2;
//		cout << "neu b nhap so chan: " << soChan;
//	}
//	else{
//		long long soLe = ((n - 1) / 2) - n;
//		cout << "neu b nhap so le: " << soLe;
//	}
//	
//}
