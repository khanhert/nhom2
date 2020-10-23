#include <iostream>
using namespace std;


int chuViCNhat(int dai, int rong);
int dienTichCNhat(int dai, int rong);


int dienTichCNhat(int dai, int rong)
{
	return a*b;
}
int chuViCNhat(int dai, int rong)
{
	return (a+b)*2;

int main()
{
int dai;
	int rong;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";



	cout << "Nhap vao chieu dai:";
	cin >> dai;
	cout << "Nhap vao chieu rong:";
	cin >> rong;
	
	cout << "chuViCNhat " << dai << " va " << rong << " la: " << chuViCNhat(dai, rong);
	cout << "dienTichCNhat " << dai << " va " << rong << " la: " << chuViCNhat(dai, rong);

return 0;
}
