#ifndef __ANIMAL_H__
#define __ANIMAL_H__
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <cstdio>
#include <string>
using namespace std;
enum Type
{
    efruits,
    emeet,
    evegtables,
    efish
};
enum Continents {
    eamrica,
    easia,
    eoustrlia,
    eallworld
};


class Animal{
    friend std::ostream& operator<<(std::ostream& cout, const Animal& m);
public:
	Animal(const std::string &name);
	virtual ~Animal();
	virtual std::string GetSpecies() const =0;
	virtual unsigned short int GetLifeExpectancy() const=0;
	virtual std::vector <Continents> GetContinent() const=0;
	virtual std::vector <Type> GetTypeFood() const =0;
	virtual unsigned int GetSpeed() const =0 ;
protected:
	virtual void print(ostream & out) const ;
private:
	std::string m_name;
};
inline Animal::Animal(const std::string &name):m_name(name){
}

inline Animal::~Animal() {
}
inline std::ostream& operator<<(std::ostream& out, const Animal& m){
	m.print(out);
	return out;
}
#endif