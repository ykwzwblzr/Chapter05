/*����һ������ע��
*
*FileName: T5_30.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: A test of global warming
*/
#include <iostream>
using namespace std;
int main()
{  char a,b,c,d,e;
int i=0;
  cout<<"����һ,�ҹ���ʡÿ�꿪չ�������ܡ����Ŀ���ǣ������������������������е���Ҫ�ԣ���ǿȫ�񣨣�����ʶ����������徫��������һ����Ҫ���ݡ�"<<endl;
  cout<<"A.��������      B.���񡢻���      C. ���񡢻���    D. ����,����"<<endl;
  cin>>a;
  cout<<"����������������ů�����ء�"<<endl;
  cout<<"A��������Ĵ����ŷ�  B�ҽ�������屬ը  C���ĸ��������ײ��������Ħ���γ��˾ֲ�����   D��ˮ�뻬��֮���һ�ֵ�������"<<endl;
  cin>>b;
  cout<<"����������������еĳ�����������̫�����й�����������к��ģ� C ���ǵ�������������ı���ɡ��"<<endl;
  cout<<"A��̼���� B������ C�������� D.������"<<endl;
  cin>>c;
  cout<<"�����ġ�������������ѣ������ϣ� C �����ϵ�����������Ϊʳ���Ǻ�����������С�"<<endl;
  cout<<"A��80% B��85% C��95% D.72%"<<endl;
  cin>>d;
  cout<<"�����壬ɳ�����γ��������� C ����"<<endl;
  cout<<"A��ǿ�硢ɳԴ B��ɳԴ���籩 C��ǿ�硢ɳԴ�����ȶ����� D.ǿ�磬ɳԴ"<<endl;
  cin>>e;
  if(a=='A')
  i=i+1;
 if(b=='A')
  i=i+1;
  if(c=='C')
  i=i+1;
  if(d=='C')
  i=i+1;
  if(e=='C')
  i=i+1;
  if(i==5)
  { cout<<"Excellent";
  }
  else if(i==4)
  { cout<<"Very good";
  }
  else
    cout<<"Time to brush up on your knowledge of global warming ";

    return 0;
}
