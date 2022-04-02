/*这是一个多行注释
*
*FileName: T5_8.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: for the minimum
*/
#include <iostream>
using namespace std;
int main()
{   int a;
    int b;
    cin>>a;
    int s=2147483647;
    for(int i=1;i<=a;i++)
    {  cin>>b;
       if(b>=s)
        s=s;
       else
        s =b;
    }  cout<<s;
    return 0;
}
