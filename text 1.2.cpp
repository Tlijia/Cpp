#include <iostream>
#include<math.h>

using namespace std;
double area(double r)
{
    double A;
    A=3.14159265*r*r;
    return A;
}
double area(double a,double b)
{
    double A;
    A=a*b;
    return A;
}
double area(double a,double b,double h)
{
    double A;
    A=(a+b)*h/2.0;
    return A;
}
double area(double a,double b,double c,int d)
{

    double A,p;
    p=(a+b+c)/2.0;
    A=sqrt(p*(p-a)*(p-b)*(p-c));
    return A;
}
int main()
{
    cout << "������ѡ�� 1.Բ  2.����  3.����  4.������" << endl;
    int n,d;
    double a,b,c,h,r;
    cin>>n;
    switch(n)
    {
        case 1:cout<<"������Բ�İ뾶:";cin>>r;cout<<"�뾶Ϊ"<<r<<"��Բ�����Ϊ"<<area(r);break;
        case 2:cout<<"��������εĳ��Ϳ�:";cin>>a>>b;cout<<"��Ϊ"<<a<<"��Ϊ"<<b<<"�ľ��ε����Ϊ"<<area(a,b);break;
    }
    return 0;
}
