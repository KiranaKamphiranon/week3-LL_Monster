#include <iostream>
#include"NODE.h"
#include"LL.h"
using namespace std;
LL::LL(){ //done
  hol=NULL;
  size=0;
}

LL::~LL(){ //finish
  NODE *t = hol; //monster
  NODE *te; //monster
  int i;
  for (i = 0 ; i  < size; i++)
    {
      te = t;
      t = t -> move_next();
      delete te;
    }
  //clear all nodes
  size=0;
  cout<<"destructor"<<endl;
}

void LL::show_all(){ //finish
  NODE* t=hol;
  int i;
  for(i=0;i<size;i++)
  {
    t -> show_node();
    t = t->move_next();     
  }
}

void LL::add_node(NODE *&A){//done

          hol->insert(A);// new_node->next=hol;
          hol=A;
       size++;

 }
