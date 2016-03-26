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
    cout << "请输入选项 1.圆  2.矩形  3.梯形  4.三角形" << endl;
    int n,d;
    double a,b,c,h,r;
    cin>>n;
    switch(n)
    {
        case 1:cout<<"请输入圆的半径:";cin>>r;cout<<"半径为"<<r<<"的圆的面积为"<<area(r);break;
        case 2:cout<<"请输入矩形的长和宽:";cin>>a>>b;cout<<"长为"<<a<<"宽为"<<b<<"的矩形的面积为"<<area(a,b);break;
    }
    return 0;
}
