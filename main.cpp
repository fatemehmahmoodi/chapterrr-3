#include <iostream>
#include<conio.h>
using namespace std;
 double computinghome();
int main()
{
  double IHC , AFC , TR , totalcomhome ;
   cout<<"ENTER initial house cost for 1years :";
   cin>>IHC;

   cout<<"ENTER annual fuel cost for 1years:";
   cin>>AFC;

   cout<<"ENTER tax rate for 1years:";
   cin>>TR;

  cout<<"total cost is :"<<totalcomhome<<endl;

   getch();
    return 0;
}

 double computinghome(double)
 {

   return IHC+AFC+(IHC*TR/100);
 }
