/*这是一个多行注释
*
*FileName: T5_18.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Conversion between different bases
*/
#include <iostream>
using namespace std;
int main()
{  int a,b,c,d,e,f,g,h,i,j,J,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,X,Y;
    for(int i=1;i<=256;i++)
     { cout<<i<<"\t"<<"\t";
      if(i%5==0)
        cout<<endl;
    }cout<<endl;cout<<endl;
    for(int J=1;J<=256;J++)
    {  a=J;
      b=a/256;
      c=a%256;
      d=c/128;
      e=c%128;
      f=e/64;
      g=e%64;
      h=g/32;
      j=g%32;
      k=j/16;
      l=j%16;
      m=l/8;
      n=l%8;
      o=n/4;
      p=n%4;
      q=p/2;
      r=p%2;
      cout<<b<<d<<f<<h<<k<<m<<o<<q<<"\t";
      if(J%5==0)
        cout<<endl;
    } cout<<endl;cout<<endl;
    for(int A=1;A<=256;A++)
    {  s=A;
      t=s/64;
      u=s%64;
      v=u/8;
      w=u%8;
    cout<<t<<v<<w<<"\t"<<"\t";
     if(A%5==0)
        cout<<endl;
    }
     cout<<endl;
     cout<<endl;
     for(int B=1;B<=256;B++)
     { x=B;
      y=x/256;
      z=x%256;
      X=z/16;
      Y=z%16;
      cout<<y<<X<<Y<<"\t"<<"\t";
      if(B%5==0)
        cout<<endl;
     }
    return 0;
}
