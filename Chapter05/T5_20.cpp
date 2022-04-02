/*这是一个多行注释
*
*FileName: T5_20.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function:Pythagorean triplet with hypotenuse less than 500
*/
#include <iostream>
using namespace std;
int main()
{   for(int side1=1;side1<499;side1++)
       { for(int side2=side1;side2<499;side2++)
       {  for(int hypotenuse =side2;hypotenuse <=500;hypotenuse++)
          {if (side1*side1+side2*side2==hypotenuse*hypotenuse)
            cout<<side1<<" "<<side2<<" "<<hypotenuse<<endl;
          else;

          }
       }}
    return 0;
}