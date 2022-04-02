/*这是一个多行注释
*
*FileName: T5_11.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Calculation of compound interest on Manhattan Island
*/
#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main()
{   double amount;
   double rate=0.05;
   double principal=1000;
 cout<<"Year"<<setw(21)<<"Amount on deposit"<<setw(21)<<"compound interest"<<endl;
       for(;rate<=0.1;rate=rate+0.01)
      {  for(unsigned int year=1;year<=10;year++)
          {amount=principal;
            cout<<fixed<<setprecision(2);
      amount=principal * pow(1.0+rate,year);
        cout<<setw(4)<<year<<setw(21)<<amount<<setw(21)<<rate<<endl;}
        cout<<endl;      }
    return 0;
}
