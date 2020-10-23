#include <iostream>
#include <math.h>
#define PI 3.14159
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


float dienTichTron(int b);
float chuViTron(int b);

float chuViHinhTron(int b){
	return 2*PI*b;

}

float dienTichHinhTron(int b){
	return PI*b*b;
}
int main()
{

	int b;
	cout<<"Nhap vao ban kinh hinh tron :";
	cin>>b;
	cout<<"Chu vi hinh tron la : "<<chuViHinhTron(b);
	cout<<"\nDien tich hinh tron la : "<<dienTichHinhTron(b)<<endl;




	int a;
	cout << "\n nhap canh a:";
	cin >> a;
	cout << "\nchu vi hinh vuong la:" << chuViHinhVuong(a);
	cout << "\ndien tich hinh vuong la:" << dienTichHinhVuong(a);
	cout << "\n";
	system("pause");
	return 0;

}
