#ifndef __FISH_H__
#define __FISH_H__
#include "Animal.h"
#include "ifish.h"
class Fish:public  Animal,public IFish{
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
    virtual void print(ostream & out) const ;
};
inline Fish::Fish(std::string name):Animal(name){}
inline void Fish::print(ostream & out) const {
    Animal::print(out);
    out << "LowestDepth: " << GetLowestDepth() << std::endl;
}

#endif
