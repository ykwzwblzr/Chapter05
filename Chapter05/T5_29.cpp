/*这是一个多行注释
*
*FileName: T5_29.cpp
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
{   double sn;
   double rate=0.05;
   double ch=24;
       double year=387;
       for(;rate<=0.1;rate=rate+0.01)
      {   sn=ch;
            cout<<fixed<<setprecision(2);
       sn=ch * pow(1.0+rate,year);
        cout<<sn<<endl;
      }
    return 0;
}
