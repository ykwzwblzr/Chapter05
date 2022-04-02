/*这是一个多行注释
*
*FileName: T5_6.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: averaging
*/
#include <iostream>
using namespace std;
int main()
{   double a=0;
  double b=0;
  double sum=0,average=0;
  while(b!=9999)
  {  cin>>b;
     sum=sum+b;
     cin>>b;
     a++;
  }
  average=sum/a;
    cout<<average;
    return 0;
}
