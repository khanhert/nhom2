#include <iostream>
#include <math.h>
#define PI 3.14159
using namespace std;


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
system("pause");
return 0;


}
