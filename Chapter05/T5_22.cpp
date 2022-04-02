/*这是一个多行注释
*
*FileName: T5_22.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Substitution between expressions
*/
#include <iostream>
using namespace std;
int main()
{   cout<<"a"<<endl;
    int a,g,x,y,i,j,b;
    cin>>x>>y;
    if(!(x<5)&&!(y>=7))
    {  cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
    if(!((x<5)||(y>=7)))
    {  cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
    cout<<"b"<<endl;
    cin>>a>>b>>g;
    if(!(a==b)||!(g!=5))
    {  cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
    if(!((a==b)&&(g!=5)))
    {  cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
    cout<<"c"<<endl;
    cin>>x>>y;
    if(!((x<=8)&&(y>4)))
       {  cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
    if(!(x<=8)||!(y>4))
           {  cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
    cout<<"d"<<endl;
    cin>>i>>j;
    if(!((i>4)||(j<=6)))
        {  cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
    if(!(i>4)&&!(j<=6))
    {  cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
    return 0;
}

