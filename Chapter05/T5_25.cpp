/*这是一个多行注释
*
*FileName: T5_25.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Replacement of the break statement
*/
#include <iostream>
using namespace std;
int main()
{   unsigned int count,i=1;
    for(count=1;count<=10;++count)
    {  if(count<5)
          {cout<<count<<" ";i++;}

       else count=11;

}     count =i;
    cout<<"\nBroke out of loop at count = "<<count<<endl;
    return 0;
}
