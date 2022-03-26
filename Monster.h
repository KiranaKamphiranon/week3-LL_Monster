class monster{
      int hp,potion;
      string name;
      monster* next;
public:
        monster(string="no name",int=0,int=0);
        void show_node();
        void insert(monster*&);
        monster* move_next();
        ~monster();
      };


