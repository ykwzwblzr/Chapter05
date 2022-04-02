/*这是一个多行注释
*
*FileName: T5_19.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Accuracy of PI value
*/
#include <iostream>
using namespace std;
int main()
{   double pi=0;
    for(int i=1;i<=1000;i++)
    { cout<<i<<"\t";
      if(i % 2 ==0)
      {  pi=pi-4/(2*double(i)-1);
      cout<<pi<<endl;
      }
      else{
        pi=pi+4/(2*double(i)-1);
        cout<<pi<<endl;
      }
    }
    return 0;
}