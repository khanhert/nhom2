using namespace std;



int tich(int a, int b);
float thuong(int a, int b);
//TinhTich
int tich(int a, int b)
{
	return a * b;

}
float thuong(int a, int b)
{
	return a / b;

}
int tong(int a, int b)
{
	return = a + b;
	 
}
int main()
{
	int a;
	int b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";



	cout << "Nhap vao so a:";
	cin >> a;
	cout << "Nhap vao so b:";
	cin >> b;


	cout << "Tich 2 so " << a << " va " << b << " la: " << tich(a, b);
	cout << "Thuong 2 so " << a << " va " << b << " la: " << thuong(a, b);
	cout << "\nTong 2 so " << a << " va " << b << " la: " << tong(a, b);


	

	system("pause");
	return 0;
}