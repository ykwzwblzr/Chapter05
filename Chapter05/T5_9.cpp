/*这是一个多行注释
*
*FileName: T5_9.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Compute the product of odd numbers in 15
*/
#include <iostream>
using namespace std;
int main()
{   int a=1;
    for(int i=1;i<=15;i++)
    {  if(i%2 ==0)
       a=a;
       else
        a=a*i;
    }
    cout<<a;
    return 0;
}
