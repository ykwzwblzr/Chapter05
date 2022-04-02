/*这是一个多行注释
*
*FileName: T5_12.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Output of the asterisk graph
*/
#include <iostream>
using namespace std;
int main()
{   for(int i=1;i<=10;i++)
    {  int j=i;
        while (j>0)
      {
          cout<<"*";
          j--;
      }
      cout<<endl;
    }
      cout<<endl;
    for(int I=10;I>=1;I--)
    {  int J=I;
        while (J>0)
      {
          cout<<"*";
          J--;
      }
      cout<<endl;
    }
      cout<<endl;

    for(int a=1;a<=10;a++)
    {
        for(int c=1;c<a;c++)
        {
            cout<<" ";
        }
        for(int b=11-a;b>=1;b--)
        {
            cout<<"*";
        }cout<<endl;
    }  cout<<endl;
      for(int A=1;A<=10;A++)
    {
        for(int C=1;C<=A;C++)
        {
            cout<<"*";
        }
        for(int B=11-A;B>=1;B--)
        {
            cout<<" ";
        }cout<<endl;
    }  cout<<endl;
    return 0;
}
