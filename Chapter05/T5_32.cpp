/*这是一个多行注释
*
*FileName: T5_32.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Facebook users' predictions
*/

#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main()
{   double sn=1;
   double rate1=0.02;
   double ch=10;
   int year1=1,year2=1,year3=1,year4=1;
   int month1=1,month2=1,month3=1,month4=1,month5=1,month6=1,month7=1,month8=1;
while(sn<=25)
{
        sn=ch * pow(1.0+rate1,month1);
        if(sn>=25)
        {   year1=month1/12;
            month5=month1%12;
            if(month5>2)
            {year1=year1+1+2012;
            month5=month5-2+10;
              if(month5>12)
              { month5=month5-12;
                year1=year1+1;
              }
              else
              {
                  month5=month5;
                  year1=year1;
              }
            }
            else
            {year1=year1+2012;
            month5=month5+10;

            }
            cout<<"2% 的情况是："<<year1<<"年"<<month5<<"月"<<endl;
        }
        else
            month1++;
}
sn=1;
while(sn<=25)
{
        sn=ch * pow(1.0+ 0.03,month2);
        if(sn>=25)
        {   year2=month2/12;
            month6=month2%12;
            if(month6>2)
            {year2=year2+1+2012;
            month6=month6-2+10;
            if(month6>12)
              { month6=month6-12;
                year2=year2+1;
              }
              else
              {
                  month6=month6;
                  year2=year2;
              }
            }
            else
            {year2=year2+2012;
            month6=month6+10;

            }
            cout<<"3% 的情况是："<<year2<<"年"<<month6<<"月"<<endl;
        }
        else
            month2++;
}
sn=1;
while(sn<=25)
{
        sn=ch * pow(1.0+0.04,month3);
        if(sn>=25)
        {   year3=month3/12;
            month7=month3%12;
            if(month7>2)
            {year3=year3+1+2012;
            month7=month7-2+10;
            if(month7>12)
              { month7=month7-12;
                year3=year3+1;
              }
              else
              {
                  month7=month7;
                  year3=year3;
              }
            }
            else
            {year3=year3+2012;
            month7=month7+10;

            }
            cout<<"4% 的情况是："<<year3<<"年"<<month7<<"月"<<endl;
        }
        else
            month3++;
}
sn=1;
while(sn<=25)
{
        sn=ch * pow(1.0+0.05,month4);
        if(sn>=25)
        {   year4=month4/12;
            month8=month4%12;
            if(month8>2)
            {year4=year4+1+2012;
            month8=month8-2+10;
            if(month8>12)
              { month8=month8-12;
                year4=year4+1;
              }
              else
              {
                  month8=month8;
                  year4=year4;
              }
            }
            else
            {year4=year4+2012;
            month8=month8+10;

            }
            cout<<"5% 的情况是："<<year4<<"年"<<month8<<"月"<<endl;
        }
        else
            month4++;
}
    return 0;
}
