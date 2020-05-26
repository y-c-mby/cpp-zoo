#ifndef __BIRD_H__
#define __BIRD_H__
#include "Animal.h"
class Birds:public Animal{
public:
	Birds(std::string name);
	virtual ~Birds(){}
	virtual  unsigned int GetWingSpan() const =0 ;
	virtual  unsigned int GetreacedHighet() const = 0;
    virtual std::string GetSpecies() const =0;
    virtual unsigned short int GetLifeExpectancy() const=0;
    virtual std::vector <Continents> GetContinent() const=0;
    virtual std::vector <Type> GetTypeFood() const =0;
    virtual unsigned int GetSpeed() const =0 ;
protected:
	virtual void print(ostream & out) const;
};
inline Birds::Birds(std::string name):Animal(name){}
inline void Birds::print(ostream & out) const {
	Animal::print(out);
	out<<"WingSpan: "<<GetWingSpan()<<std::endl;
	out<<"reaced_highet: "<<GetreacedHighet()<<std::endl;
}

#endif