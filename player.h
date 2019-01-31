// ************ Player HEADER FILE *****************    

// Jordan L Co 
// Frupal 
// CS300
// Jan 28, 2018

#include <iostream>
#include<stdlib.h>

struct inventory
{
  bool boat;
  bool weedwacker;
  bool chainsaw;
  bool jackhammer;
  bool ebar;
  bool binos;
};

class player 
{
  public:
    player();
    ~player();
    int movement(/*add obstacle and terrain args*/);
    void test();
    
  private:
    int energy;
    int money;
    inventory inv;
};