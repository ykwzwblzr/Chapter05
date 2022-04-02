/*这是一个多行注释
*
*FileName: T5_15.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Calculation of scores
*/
#include <iostream>
using namespace std;
int main()
{ char grade;
int sum=0;
   cin>>grade;
   while(grade=='a'||grade=='A'||grade=='b'||grade=='B'||grade=='c'||grade=='C'||grade=='d'||grade=='D'||grade=='e'||grade=='E'||grade=='f'||grade=='F')
   {switch(grade)
   {  case 'A':
      case 'a':  sum=sum+4; break;
      case 'B':
      case 'b':  sum=sum+3; break;
      case 'C':
      case 'c':  sum=sum+2;  break;
      case 'D':
      case 'd':  sum=sum+1; break;
       case 'F':
      case 'f':  sum=sum+0;  break;
   }cin>>grade;
   }  cout<<sum;
    return 0;
}
