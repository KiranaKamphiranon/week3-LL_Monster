#include <iostream>
#include <iomanip>
#include "Monster.h"
using namespace std;

monster::monster(string n, int HP, int PT){
//monster::monster(string n){
  name=n;
  hp = HP;
  potion = PT;
  if(n=="BIG BOSS"){
    cout<<"ADDING MONSTER\t"<<setw(11)<<name<<" HP: ";
  }
  else{
    cout<<"Adding Monster: "<<setw(11)<<name<<" HP: ";
  }
  cout<<setw(3)<<hp<<"\t\tPOTION: x"<<potion<<endl;
}
monster::~monster(){
  cout<<"DESTRUCTOR~ "<<setw(11)<<name<<" HP: ";
  cout<<setw(3)<<hp<<"\t\tPOTION: x"<<potion<<endl;
}

monster* monster::move_next(){
  return next;
}

void monster::show_node(){
  cout<<"MONSTER: "<<setw(11)<<name<<" HP: ";
  cout<<setw(3)<<hp<<"\t\tPOTION: x"<<potion<<endl;
}

void monster::insert(monster*&A){
  A->next=this;//t->next=hol
}

int monster::show_boss(){
  return this->hp;
}

void monster::atk_boss(monster*&BOSS){
  int atk = (rand()%26)+25;//15-40
  BOSS->hp=BOSS->hp-(this->potion*atk);
  
  cout<<setw(11)<<this->name<<"  ATTACK\t";
  cout<<" BIG BOSS\t"<<setw(2)<<atk<<" x";
  cout<<potion<<"  -"<<setw(3)<<atk*potion<<" hp"<<endl;
  
  if(BOSS->hp>0){
    int atk1 = (rand()%21)+1;//1-20
    cout<<setw(11)<<"BIG BOSS"<<"  ATTACK "<<setw(11);
    cout<<this->name<<"\t"<<setw(2)<<atk1<<" x";
    cout<<BOSS->potion<<"  -"<<setw(3)<<atk1*(BOSS->potion)<<" hp"<<endl;
    this->hp=this->hp-(BOSS->potion*atk1);
    }
    if (this->hp<=0){
      this->hp=0;
    }
    if (BOSS->hp<=0){
      BOSS->hp=0;
      cout<<"   BIG BOSS HP = "<<BOSS->hp<<setw(3)<<" hp"<<endl;
  }
}

