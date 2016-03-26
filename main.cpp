#include <iostream>

using namespace std;

int main()
{
   int *p=new int[5];
   int i=0;
   for(;i<5;i++)
   {
       cin>>*(p+i);
   }
   int MAX=*p,MIN=*p;
   for(i=1;i<5;i++)
   {
       if(MAX<*(p+i))MAX=*(p+i);
       if(MIN>*(p+i))MIN=*(p+i);
   }
   cout<<"MAX="<<MAX<<endl;
   cout<<"MIN="<<MIN<<endl;
   delete []p;
   return 0;

}
