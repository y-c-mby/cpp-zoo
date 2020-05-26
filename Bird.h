#include "Animal.h"
class Birds:public Animal{
public:
	Birds(std::string name);
	virtual ~Birds(){}
	virtual unsigned float GetWingSpan() const =0 ;
	virtual unsigned float GetreacedHighet() const = 0;
    virtual std::string GetSpecies() const =0;
    virtual unsigned short int GetLifeExpectancy() const=0;
    virtual std::vector <Continents> GetContinent() const=0;
    virtual std::vector <Type> GetTypeFood() const =0;
    virtual unsigned int GetSpeed() const =0 ;
protected:
	virtual void print() const;
};
inline Birds::Birds(std::string name):Animal(name){}
inline void Birds::print() const {
	Animal::print();
	std::cout<<"WingSpan: "<<GetWingSpan()<<std::endl;
	std::cout<<"reaced_highet: "<<GetreacedHighet()<<std::endl;
}
