/*这是一个多行注释
*
*FileName: T5_14.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: The company's total retail sales
*/
#include <iostream>
using namespace std;
int main()
{  int a=1;
    double b,c,d,e,f;
   double sum=0;
   cin>>a;
   while(a)
   {switch(a)
   {  case 1: cin>>b; sum=2.98*b+sum;   break;
      case 2: cin>>c; sum=sum+4.50*c;  break;
      case 3 : cin>>d;  sum=sum+9.98*d;  break;
      case 4: cin>>e;  sum=sum+4.49*e;  break;
      case 5 : cin>>f;  sum=sum+6.87*f;

   } cin>>a;
   } cout<<sum<<endl;

    return 0;
}
