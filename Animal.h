#include <iostream>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <cstdio>
#include <string>
using namespace std;
//enum Type
//{
//    efruits,
//    emeet,
//    evegtables
//};
//enum Continents {
//    eamrica,
//    easia,
//    eoustrlia
//};
class Animal{
public:
	Animal(const std::string &name);
//	virtual ~Animal();
//	virtual std::string GetSpecies() const =0;
//	virtual unsigned short int GetLifeExpectancy() const=0;
//	virtual std::vector <Continents> GetContinent() const=0;
//	virtual std::vector <Type> GetTypeFood() const =0;
//	virtual unsigned int GetSpeed() const =0 ;
	//friend std::ostream& operator<<(std::ostream& cout, const Animal& m);
//protected:
//	virtual void print() const ;
private:
	std::string m_name;
};
inline Animal::Animal(const std::string &name):m_name(name)
{

}
//inline void Animal::print() const {
//    std::cout << m_name << std::endl;
//    std::cout << "Specy: " << GetSpecies() << std::endl;
//    std::cout << "life expectancy: " << GetLifeExpectancy() << std::endl;
//    std::vector <Continents >tmp = GetContinent();
//    std::cout << "continent: " << std::endl;
//    for (int i = 0; i < tmp.size(); ++i) {
//        std::cout<<tmp[i]<<"__";
//    }
//    std::vector <Type >tmp1 = GetTypeFood();
//    std::cout << "foodtype: "  << std::endl;
//    for (int i = 0; i < tmp1.size(); ++i) {
//        std::cout<<tmp1[i]<<"__";
//    }
//    std::cout << "speed: " << GetSpeed() << std::endl;
//}
//inline Animal::~Animal() {
//    std::cout<<"asd";
//}
//inline std::ostream& operator<<(std::ostream& cout, const Animal& m)
//{
//	m.print();
//	return cout;
//}
