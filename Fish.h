#include "Animal.h"
class Fish:public Animal{
public:
	Fish(std::string name);
	virtual ~Fish(){}
	virtual unsigned int GetLowestDepth() const =0;
    virtual std::string GetSpecies() const =0;
    virtual unsigned short int GetLifeExpectancy() const=0;
    virtual std::vector <Continents> GetContinent() const=0;
    virtual std::vector <Type> GetTypeFood() const =0;
    virtual unsigned int GetSpeed() const =0 ;
protected:
    virtual void print() const ;
};
inline Fish::Fish(std::string name):Animal(name){}
inline void Animal::print() const {
    Animal::print();
    std::cout << "LowestDepth: " << GetLowestDepth() << std::endl;
}

