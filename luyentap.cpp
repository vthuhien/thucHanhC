#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
// ép kiểu
	/*int i1 = 2;
	int i2 = 5;
	int i3 = -3;
	int kq1 = i1 + (i2 * i3);
	cout << "ket qua in ra la :" << kq1 << endl;
	int kq2 = i1 * (i2 + i3);
	cout << "ket qua in ra la :" << kq2 << endl;


	int d1 = 5;
	int d2 = 2;
	double d3 = -0.5;
	double kq3 = (double)d1 / (double)d2 + d3;
	cout << kq3;*/

// tính cvi,dien tich hinh tron
	/*double PI, r, cvi, dientich;
		PI = 3.24;
		cout << "ban kinh duong tron la: " << endl;
		cin >> r;
		cvi = 2 * PI * r;
		cout << "cvi hinh tron la:" << cvi << endl;
		dientich = PI * r * r;
		cout << "dientich hinh tron la:" << dientich << endl;*/

// tính điểm trung bình và làm tròn dùng hàm <iomanip>
	/*double toan, van, anh, dtb;

			cout << "nhap vao diem toan : " << endl;
			cin  >>toan ;
			cout << "nhap vao diem van : " << endl;
			cin  >> van ;
			cout << "nhap vao diem anh : " << endl;
			cin >> anh ;

			dtb = (toan + anh + van) / 3;

			cout << "diem trung binh là : " << dtb << endl;

			cout << "kq lam tron : " << setprecision(3) << dtb << endl;*/

// tìm x,y khi biết tổng và hiệu cuả chúng
	/*double tong, hieu, x, y;


	cout << "nhap vao tong cua hai so" << endl;
	cin >> x;
	cout << "nhap vao hieu cua hai so" << endl;
	cin >> y;
	cout << "gia tri x nhan dc la:" << (x + y) / 2 << endl;

	cout << "gia tri y nhan dc la:" << (x - y) / 2 << endl;*/

//if/else   
	/*double cannang, chieucao, BMI;
	cout << "can nang cua ban la" << endl;
	cin >> cannang;
	cout << "chieu cao cua ban la" << endl;
	cin >> chieucao;
	BMI = cannang / (chieucao * 2);
	if (16<=BMI<18.5)
	{
		cout << "than hinh gay" << endl;
	}
	else if (18.5<=BMI<25)
	{
		cout << "than hinh binh thuong" << endl;
	}
	else if (BMI >=35)
	{
		cout << "than hinh qua beo" << endl;
	}*/


// viet chương trình nhập vào 1 năm, kiểm tra xem năm đó có phải dương lịch kh?
	/*int year;
	cout << " nhap vao 1 nam duong lich :" << endl;
	cin >> year;
	if ((year % 4 == 0) && (year % 100 != 0))
	{
		cout << "nam nay la nam nhuan" << endl;
	}
	else
	{
		cout << "nam nay khong phai la nam nhuan" << endl;
	}*/

// nhập vào 1 tháng cho biết tháng đó có bn ngày, riêng tháng 2 thì nhập thêm năm
//  để biết năm nhuận hay kh vì năm nhuận hay kh vì năm nhuận 29 ngày, k nhuận thi 28 ngày\

	/*int a, b;
	cout << "nhap vao mot thang" << endl;
	cin >> a;
	if (a == 4, a == 6, a == 9, a == 11)
	{
		cout << "thang nay co 30 ngay" << endl;
	}
	else if (a == 2)
	{
		cout << "nhap them nam can tra cuu: " << endl;
		cin >> b;
		if ((b % 4 == 0) && (b % 100 != 0))
		{
			cout << "thang nay co 29 ngay" << endl;
		}
		else
		{
			cout << "thang nay co 28 ngay" << endl;
		}

	}

	else
	{
		cout << "thang nay co 31 ngay" << endl;
	}*/

// viết tên tháng và kiểm tra xem thang đó thuộc quý số mấy

	//int month;
//cout << "nhap thang can tra:" << endl;
//cin >> month;
//if (month < 4)
//{
//	cout << "day la quy 1" << endl;
//}
//else if (4 <= month < 7)
//{
//	cout << "day la quy 2" << endl;
//}
//else if (7 <= month < 10)
//{
//	cout << "day la quy 3" << endl;
//}
//else
//{
//	cout << "day la quy 4" << endl;
//}

// dùng toán tử 3 ngôi để set điểm tb của hs theo tiêu chuẩn

	//double dtb;
		//cout << "hay nhap diem trung binh cua b:" << endl;
		//cin >> dtb;
		//string setkq = (dtb >= 8) ? "gioi" : (6.5 <= dtb < 8) ? " kha" : (5 <= dtb < 6) ? "hoc sinh trung binh" : (dtb < 5) ? "hoc sinh yeu" : "dup";
		//cout << "nam nay b hoc sinh :" << setkq << endl;

// viet khung tim iem cho ng dung lua chon

	//int a;
	//cout << "bam so de chon" << endl;
	//cin >> a;
	//switch (a)
	//{
	//case 1:
	//	cout << "tim theo ten";
	//	break;
	//case 2:
	//	cout << "tim theo tac gia";
	//	break;
	//case 3:
	//	cout << "tim theo nha xuat ban";
	//	break;
	//case 4:
	//	cout << "tim theo tieu de";
	//	break;
	//	{
	//default:
	//	cout << "thoat neu phim bam k hop le";
	//	break;
	//	}
	//
	//}

// ng dùng nhập số chỉ dc từ 1 - 99 nếu sai bắt nhập lại

	//int n;
//cout << "moi b nhap so :" << endl;
//cin >> n;
//while (n > 99 || n < 1) {
//	cout << "chi dc nhap tu 1 - 99. Moi b nhap lai" << endl;
//	cin >> n;
//}
//cout << "b da nhap thanh cong" << n;

//// Đề bài viết chương trình nhập tổng các số chắng từ 0 - a
	/*nếu a chẵn thì in ra  tổng các số chắng từ 0 - a
	nếu a lẻ thì k tính*/

	/*int a;
	cout << "nhap vao 1 so chan" << endl;
	cin >> a;
	if (a%2==0)
	{
		int sum = 0;
		for (int i = 0; i <=a; i+=2)
		{
			sum += i;
		}
		cout << " ket qua cua so chan do la" << sum << endl;

	}
	else
	{
		cout << "toi k nhan so le" << endl;
	}*/

	// tính tổng các số lẻ từ 1 - n 

		//int n;
		//cout << "nhap vao 1 so le" << endl;
		//cin >> n;
		//
		//
		//int sum = 0;
		//for (int i = 1 ; i <=n; i+=2)//để số lẻ
		//{
		//	if (i == 3)
		//	{
		//		continue;
		//	}
		//	else
		//	{
		//		sum += i;
		//	}
		//}
		//cout << "tong cua cac so le la" << sum << endl;

		//int n;
		//cout << "nhap vao 1 so le" << endl;
		//cin >> n;
		//int sum = 0;
		//for (int i = 1 ; i <=n; i+=2)//để số lẻ
		//{
		//	if (i == 3)
		//	{
		//		break;
		//	}
		//	else
		//	{
		//		sum += i;
		//	}
		//}
		//cout << "tong cua cac so le la" << sum << endl;

	// tìm những số chia hết cho 3 từ 10 -50

		/*for (int i = 10; i <= 50; i++)
		{
			if (i % 3 == 0)
			{
				cout << i << " " << endl;
			}
		}*/

		// tính tổng giai thừa S=1!+2!+...10!

int tong = 0;
int gt = 1;
for (int i = 1; i <= 10; i++)
{
	gt *= i;/*gt = gt * i;*/
	/*cout << gt << endl;*/
	tong += gt;
}
cout << "ket qua la" << tong << endl;
}