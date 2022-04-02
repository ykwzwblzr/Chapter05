/*这是一个多行注释
*
*FileName: T5_24.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Output of the asterisk graph
*/
#include <iostream>
using namespace std;
int main()
{
      int m=0;
      cin>>m;
     for(int i=0;i<=(m-1)/2;i++)
    {
        for(int j=0;j<=(m-1)/2-1-i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<=i*2;k++)
        {
          cout<<"*";
        }
        cout<<endl;
    }
    for (int a=0;a<=(m-3)/2;a++)
        {for(int b=0;b<=a;b++)
    {
        cout<<" ";
    }
    for(int c=0;c<=((m-3)/2-a)*2;c++)
    {
        cout<<"*";
    }cout<<endl;
    }
    return 0;
}
