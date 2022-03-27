#include <iostream>
#include <iomanip>
#include "Monster.h"
#include "LL.h"

using namespace std;

int main(int argc, char **argv){
  srand(time(nullptr));
  LL A;
  int i;
  monster *t;

  cout<<"--------------------------------------------------"<<endl;
  for (i=1;i<argc;i=i+3){
    t = new monster(argv[i],atoi(argv[i+1]),atoi(argv[i+2]));
    A.add_monster(t);//potion คือ item เอาไว้คูณกับค่าโจมตี (atk) ที่สุ่มได้
  }
  monster *Boss;
  Boss = new monster("BIG BOSS",500,5);
  cout<<"--------------------------------------------------"<<endl;
  A.show_all();
  cout<<"--------------------------------------------------"<<endl;
  A.atk_All(Boss); // random ลดค่า hp 
  cout<<"--------------------------------------------------"<<endl;
  if(Boss->show_boss()==0){// hp big boss ต้องเหลือ 0 monster ถึงจะชนะ
    cout<<"\t\t   - MONSTERS ARE THE WINNER -"<<endl;
  }
  else{
    cout<<"\t\t   - BIG BOSS IS THE WINNER -"<<endl;
  }
  cout<<"--------------------------------------------------"<<endl;
  delete Boss;
  return 0;
}