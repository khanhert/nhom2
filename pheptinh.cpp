using namespace std;




int hieu(int a, int b);

//TinhHieu
int hieu(int a, int b)

int tich(int a, int b);
float thuong(int a, int b);
//TinhTich
int tich(int a, int b)

{
	return a - b;

}
float thuong(int a, int b)
{
	return a / b;

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



	cout << "Hieu 2 so " << a << " va " << b << " la: " << hieu(a, b);


	cout << "Tich 2 so " << a << " va " << b << " la: " << tich(a, b);
	cout << "Thuong 2 so " << a << " va " << b << " la: " << thuong(a, b);


	

	system("pause");
	return 0;
}