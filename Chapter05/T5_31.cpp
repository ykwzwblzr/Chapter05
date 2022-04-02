/*这是一个多行注释
*
*FileName: T5_31.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Personal tax calculation
*/
#include <iostream>
using namespace std;
int main()
{   double  a,b,c,d,e,f,g,sum;
            cout<<"请输入住房费用"<<endl;
    cin>>a; cout<<"请输入食物费用"<<endl;
    cin>>b; cout<<"请输入衣服费用"<<endl;
    cin>>c; cout<<"请输入交通费用"<<endl;
    cin>>d; cout<<"请输入教育费用"<<endl;
    cin>>e; cout<<"请输入医疗保险费用"<<endl;
    cin>>f; cout<<"请输入旅游费用"<<endl;
    cin>>g;
    sum=(a+b+c+d+e+f+g)*0.3;
    cout<<"所支付的税务"<<sum<<endl;
    return 0;
}