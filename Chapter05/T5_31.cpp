/*����һ������ע��
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
            cout<<"������ס������"<<endl;
    cin>>a; cout<<"������ʳ�����"<<endl;
    cin>>b; cout<<"�������·�����"<<endl;
    cin>>c; cout<<"�����뽻ͨ����"<<endl;
    cin>>d; cout<<"�������������"<<endl;
    cin>>e; cout<<"������ҽ�Ʊ��շ���"<<endl;
    cin>>f; cout<<"���������η���"<<endl;
    cin>>g;
    sum=(a+b+c+d+e+f+g)*0.3;
    cout<<"��֧����˰��"<<sum<<endl;
    return 0;
}