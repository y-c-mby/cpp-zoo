#include "whale.h"
Continents t[] = {eoustrlia,easia};
int  sizeT = sizeof(t)/ sizeof(t[0]);
const std::vector <Continents > Whale::m_continents(t,t+sizeT);
const std::string Whale::m_specy = "whale";
Type wfood[] = {efish};
int  size_wfood = sizeof(wfood)/ sizeof(wfood[0]);
const std::vector <Type> Whale::m_type_food(wfood,wfood+size_wfood);