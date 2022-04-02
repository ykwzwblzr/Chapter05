/*这是一个多行注释
*
*FileName: T5_21.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Calculation of employee wages
*/
#include <iostream>
using namespace std;
int main()
{   int a;
    double b,c,d,e,f,g,h,j,k,t;
     cin>>a;
     while(a)
     { switch(a)
     {case 1:cout<<"请输入经理的固定工资"<<endl;
            cin>>b; cout<<"经理的总工资：   "<<b<<endl;    cin>>a; break;
      case 2:
        cout<<"请输入小时工固定小时工资及工作时长"<<endl;
      cin>>c>>d; if(d<=40)
                h=c*d;
                else
                h=(d-40)*1.5*c+40*c;
                cout<<"小时工的总工资:   "<<h<<endl;     cin>>a;  break;

      case 3:cout<<"佣金工销售件数和每件销售额"<<endl;
      cin>>e>>j; k=250+0.057*j*e;
               cout<<"佣金工的总工资：   "<<k<<endl;    cin>>a;   break;

      case 4:cout<<"请输入计件工生产的产品件数和每件产品的固定金额"<<endl;
      cin>>f>>g; t=f*g;
        cout<<"计时工的总工资：    "<<t<<endl;
        cin>>a;
      default : cin>>a;break;

     }}
     return 0;
}
