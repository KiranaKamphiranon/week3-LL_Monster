#include <iostream>
#include "Monster.h"
#include "LL.h"

using namespace std;

LL::LL(){
  hol = NULL;
  size = 0;
}

LL::~LL(){
  monster* t=hol;
  for(int i=0;i<size;i++){
    hol = hol->move_next();
    delete t;
    t = hol;
  }
  size = 0;
  cout<<"--------------------------------------------------"<<endl;
}

void LL::show_all(){
  monster* t=hol;
  for(int i=0;i<size;i++){
    t->show_node();
    t=t->move_next();
  }
}

void LL::add_monster(monster*&A){
  hol->insert(A);
  hol=A;
  size++;
}

void LL::atk_All(monster*&BOSS){//ลด hp MONSTER ถ้า hp BIGBOSS != 0
  monster* t=hol;
  for(int i=0;i<size;i++){
    if(BOSS->show_boss()!=0){
      t->atk_boss(BOSS);
      t = t->move_next();
    }
  }
}