#include <iostream>
using namespace std;

class monster{
  int hp,potion;
  string name;
  monster* next;
public:
  monster(string="no name",int = 0 ,int =0);
  void show_node();
  int show_boss();
  void insert(monster*&);
  void atk_boss(monster*&);
  monster* move_next();
  ~monster();
 };
