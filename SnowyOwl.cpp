#include "SnowyOwl.h"
Type helpS[]={efruits,evegtables};
int nS = sizeof(helpS)/ sizeof(helpS[0]);
Continents cS[]={eoustrlia};
int ncS = sizeof(cS)/ sizeof(cS[0]);
std::vector <Type> SnowyOwl:: m_type_food(helpS,helpS+nS);
std::vector <Continents> SnowyOwl:: m_continent(cS,cS+ncS);
std::string SnowyOwl:: m_specy = "snowy owl";
