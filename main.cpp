#include "Lion.h"
#include "Shark.h"
#include "SnowyOwl.h"
#include <vector>
int main(){
    std::vector <Animal*> zoo;
    Lion *lion1 =new Lion("Simba");
    Lion *lion2 =new Lion("Mufasa");
    zoo.push_back(lion1);
    zoo.push_back(lion2);
    Shark *s =new Shark("Jaws");
    zoo.push_back(s);
    SnowyOwl* S =new SnowyOwl("Hedwig");
    zoo.push_back(S);
    for (std::vector <Animal*>::iterator it = zoo.begin(); it < zoo.end(); ++it) {
        std::cout<<(**it)<<endl;
    }
    //Lion("MOMO");
    return 1;
}
