/*这是一个多行注释
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
  cout<<"问题一,我国各省每年开展“爱鸟周”活动的目的是：集中宣传鸟类在人类生活中的重要性，增强全民（）的意识，是社会主义精神文明的一项重要内容。"<<endl;
  cout<<"A.爱鸟、养鸟      B.放鸟、护鸟      C. 爱鸟、护鸟    D. 放鸟,爱鸟"<<endl;
  cin>>a;
  cout<<"问题二，引起气候变暖的因素。"<<endl;
  cout<<"A温室气体的大量排放  B岩浆活动、气体爆炸  C板块的俯冲带或碰撞带，由于摩擦形成了局部高温   D流水与滑坡之间的一种地质作用"<<endl;
  cin>>b;
  cout<<"问题三、地球大气中的臭氧层能吸收太阳光中过量会对生物有害的（ C ）是地球上所有生物的保护伞。"<<endl;
  cout<<"A．碳化物 B．硫化物 C．氟化物 D.氮化物"<<endl;
  cin>>c;
  cout<<"问题四、鸟是人类的朋友，世界上（ C ）以上的鸟类以昆虫为食，是害虫和鼠类的天敌。"<<endl;
  cout<<"A．80% B．85% C．95% D.72%"<<endl;
  cin>>d;
  cout<<"问题五，沙暴的形成条件：（ C ）。"<<endl;
  cout<<"A．强风、沙源 B．沙源、风暴 C．强风、沙源、不稳定大气 D.强风，沙源"<<endl;
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
