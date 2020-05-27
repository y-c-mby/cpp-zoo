#include "Shark.h"
Type help[]={efish};
int n = sizeof(help)/ sizeof(help[0]);
Continents c[]={eallworld};
int nc = sizeof(help)/ sizeof(help[0]);
std::vector <Type> Shark:: m_type_food(help,help+n);
std::vector <Continents> Shark:: m_continent(c,c+nc);
std::string Shark:: m_specy = "shark";
