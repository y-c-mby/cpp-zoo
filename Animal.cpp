#include "Animal.h"

char * type [] ={(char*)"fruits",(char*)"meet",(char*)"vegtabals",(char*)"fish"};
char * continent [] ={(char*)"America",(char*)"Asia",(char*)"Aostrlia",(char*)"allworld"};

void Animal::print(ostream & out) const {
    out << "****"<<m_name << "****"<<std::endl;
    out << "Specy: " << GetSpecies() << std::endl;
    out << "life expectancy: " << GetLifeExpectancy() << std::endl;
    std::vector <Continents >tmp = GetContinent();
    out << "continent: " ;
    for (unsigned int i = 0; i < tmp.size(); ++i) {
        out<<continent[tmp[i]]<<", ";
    }
    out<<" "<<std::endl;
    std::vector <Type >tmp1 = GetTypeFood();
    out << "foodtype: " ;
    for (unsigned int i = 0; i < tmp1.size(); ++i) {
        out<<type[tmp1[i]]<<", ";
    }
    out<<" "<<std::endl;
    out << "speed: " << GetSpeed() << std::endl;
}

	
