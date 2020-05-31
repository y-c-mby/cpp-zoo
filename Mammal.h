#ifndef __MAMMAL_H__
#define __MAMMAL_H__
#include "Animal.h"
#include "imammal.h"
class Mammal: public Animal,public IMammal{
public:
	Mammal(std::string name);
	virtual ~Mammal();
	virtual int GetPregnancyDuration() const =0;
    virtual int GetnumOfChild() const =0;
    virtual std::string GetSpecies() const =0;
    virtual unsigned short int GetLifeExpectancy() const=0;
    virtual std::vector <Continents> GetContinent() const=0;
    virtual std::vector <Type> GetTypeFood() const =0;
    virtual unsigned int GetSpeed() const =0 ;
protected:
    virtual void print(ostream & out) const ;
private:
};
inline Mammal::Mammal(std::string name):Animal(name){}
inline void Mammal::print(ostream & out) const {
    Animal::print(out);
    out << "PregnancyDuration: " << GetPregnancyDuration() << std::endl;
    out << "numOfChild: " << GetnumOfChild() << std::endl;
}
inline Mammal::~Mammal() {

}

#endif
