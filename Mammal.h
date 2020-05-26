#include "Animal.h"
class Mammal:public Animal{
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
    virtual void print() const ;
private:
};
inline Mammal::Mammal(std::string name):Animal(name){}
inline void Mammal::print() const {
    Animal::print();
    std::cout << "PregnancyDuration: " << GetPregnancyDuration() << std::endl;
    std::cout << "numOfChild: " << GetnumOfChild() << std::endl;
}
inline Mammal::~Mammal() {

}


