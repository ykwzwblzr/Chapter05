/*����һ������ע��
*
*FileName: T5_10.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Output the factorial from 1 to 5
*/
#include <iostream>
using namespace std;
int main()
{    int a=1,j=1;
       cout<<"��ֵ";
       cout<<"\t"<<"�׳�";
       cout<<endl;
     for(int i=1;i<=5;i++)
     {   j=i;
          cout<<i;
          while(j>0)
        { a=a*j;
          j--;
        }
         cout<<"\t"<<a;
         cout<<endl;
         a=1;
     }
    return 0;
}
