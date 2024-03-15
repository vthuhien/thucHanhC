
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

//11. tìm số chia hết cho b và k vượt quá a 
// ct: <=a : b
//  ==> (a/b) * b

//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	double thuong = (double)(a / b) * b;
//	cout << "kq cua phep tinh can tim: " << thuong;
//}

//12. tim số chia hết cho b và lớn hơn hoặc bằng a
// ct: >=a : b
// ==> ((a+b-1)/b) *b;

//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int thuong = ((a + b - 1) / b) * b;
//	cout << "kq cua phep tinh la " << thuong;
//}

//13. kiểm tra chẵn lẻ

//int main()
//{
//	int n;
//	cin >> n;
//	if (n % 2 == 0) {
//		cout << "day la so chan";
//	}
//	else {
//		cout << "day la so le";
//	}
//}

//14. in ra 1 nếu n chia hết cho 3 và 5 ngược lại thi in ra 0

//int main()
//{
//	int n;
//	cin >> n;
//	if ((n % 3 == 0) && (n % 5 == 0)) {
//		cout << "1";
//	}
//	else
//	{
//		cout << "0";
//	}
//}

//15. ktra năm nhuận (năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 va k chia hết cho 100 )

//int main()
//{
//	int n;
//	cin >> n;
//	if ((n % 4 == 0) && (n % 100 != 0)) {
//		cout << "day la nam nhuan";
//	}
//	else if (n<=0) {
//		cout << "b nhap sai so";
//	}
//	else {
//		cout << "day kp la nam nhuan";
//	}
//}

//16. in ra số ngày của tháng

//int main()
//{
//	int t, n;
//	cin >> t >> n;
//	if (t<=0||n<=0||t>12) {
//		cout << "b nhap sai so";
//	}
//	else{
//		if (t == 1|| t == 3|| t == 5|| t == 7|| t == 8|| t == 10|| t == 12) {
//			cout << "thang nay co 31 ngay";
//		}
//		else if (t == 4|| t == 6|| t == 9|| t == 11) {
//			cout << "thang nay co 30 ngay";
//		}
//		else {
//			if ((n % 4 == 0) && (n % 100 != 0)) {
//				cout << "thang nay co 29 ngay";
//			}
//			else {
//				cout << "thang nay co 28 ngay";
//			}
//		}
//		
//	}
//}

//17. ktra chữ cái
// ct: sử dụng bảng mã ASCII
//    a-z = 97-122
//	  A-Z = 65-90
//    0-9 = 48-57

//int main()
//{
//	char kiTu;
//	cin >> kiTu;
//	if ((kiTu>98)&&(kiTu<123)) {
//		cout << "day la ki tu viet thuong";
//	}
//	else if ((kiTu > 66) && (kiTu < 91)) {
//		cout << "day la ki tu viet hoa";
//	}
//	else if ((kiTu > 49) && (kiTu < 58)) {
//		cout << "day la ki tu so";
//	}
//	else {
//		cout << "day la nhung ki tu dac biet";
//	}
//}

//18. chuyển ký tự in hoa thành in thường
// nếu kí tự in hoa thì chuyển sang in thường , in thường thì để yên k thay đổi
// ct: vẫn sử dụng bảng mã ASCII
// note: A-Z = 65 66 67 .... 90
//       a-z = 97 98 99 .... 122 
// =>    mỗi số cách nhau 32 đơn vị (65+32=97)

//int main()
//{
//	char kitu;
//	cin >> kitu;
//	if ((kitu >= 'A') && (kitu <= 'Z')) {
//		kitu += 32;
//	}
//	cout << kitu << endl;
//}

//19. nhập vào 1 kí tự và in ra chữ cái đằng sau kí tự đó
// : nhập a in b, nhập A in b, kí tự khác ra invalid

//int main()
//{
//	char c;
//	cin >> c;
//	if (c <= 'Z' && c >= 'A') {
//		c += 33;
//	}
//	else if (c<='z'&&c>='a') {
//		c++;
//	}
//	else {
//		cout << "invalid";
//	}
//	cout << c << endl;
//}

//20. nhập vào 3 số a,b,c in ra số lớn nhất trong 3 số và số nhỏ nhất trong 3 số

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
//cach1:

	//int max,min;
	//if (a > b && a > c) {
	//	max = a;
	//}
	//else if (b > a && b > c) {
	//	max = a;
	//}
	//else {
	//	max = c;
	//}
	//cout << "so lon nhat la" << max << endl;
	//if (a < b && a < c) {
	//	min = a;
	//}
	//else if (b < a && b < c) {
	//	min = b;
	//}
	//else {
	//	min = c;
	//}
	//cout << "so be nhat la" << min;

//cach2:

	/*int max = a;
	int min = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	cout << "so lon nhat la" << max << endl;

	if (b < min) {
		min = b;
	}
	if (c < min) {
		min = c;
	}
	cout << "so nho nhat la " << min;*/
}