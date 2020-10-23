#include <iostream>
using namespace std;

int chuViHinhVuong(int a)
{
	return a*4;
}
int dienTichHinhVuong(int a) {
	return a * a;
}
int chuViCNhat();
int dienTichCNhat();
int dienTichTron();
int chuViTron():

int main()
{
	int a;
	cout << "\n nhap canh a:";
	cin >> a;
	cout << "\nchu vi hinh vuong la:" << chuViHinhVuong(a);
	cout << "\ndien tich hinh vuong la:" << dienTichHinhVuong(a);
	cout << "\n";
	system("pause");
	return 0;
}
