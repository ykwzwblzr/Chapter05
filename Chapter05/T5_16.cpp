/*这是一个多行注释
*
*FileName: T5_16.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Compound interest
*/
#include <iostream>
using namespace std;
int main()
{   unsigned int sum =1;
    int c,j,e;
    for(int i=1;i<=10;i++)
    {   sum=1000;
       j=i;
       sum=sum *105;
        while(j>1)
       { sum=sum *105;
         j--;
         sum=sum / 100;
       }

         c=sum%100;
         e=sum/100;
       cout<<e<<"."<<c<<endl;
    }


    return 0;
}

