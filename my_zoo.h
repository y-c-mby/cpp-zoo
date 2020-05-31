#include "Lion.h"
#include "Shark.h"
#include "SnowyOwl.h"
#include "whale.h"
#include <vector>
class Zoo{
public:
    Zoo();
    void print()  ;
private:
    std::vector <Animal*> m_zoo;
};
inline Zoo::Zoo() {
    m_zoo.push_back(new Lion("Simba"));
    m_zoo.push_back(new Lion("Mufasa"));
    m_zoo.push_back(new Shark("Jaws"));
    m_zoo.push_back(new SnowyOwl("Hedwig"));
    m_zoo.push_back(new Whale("mama"));
}
inline void Zoo::print()  {
    for (std::vector <Animal*>::iterator it = m_zoo.begin(); it < m_zoo.end(); ++it)
    {
        std::cout<<(**it)<<endl;
    }
}
