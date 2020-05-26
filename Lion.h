#include "Mammal.h"
class Lion:public Mammal{
public:
	Lion(std::string name);
	~Lion();
	/*virtual*/ int GetPregnancyDuration() const;
    /*virtual*/ int GetnumOfChild() const;
    /*virtual*/ std::string GetSpecies() const ;
    /*virtual*/ unsigned short int GetLifeExpectancy() const;
    /*virtual*/ std::vector <Continents> GetContinent() const;
    /*virtual*/ std::vector <Type> GetTypeFood() const ;
    /*virtual*/ unsigned int GetSpeed() const ;
protected:
	void print();

private:
    static const int m_pregnancy_duration = 12;
    static const int m_num_of_child = 1;
    static const unsigned short int m_life_expectancy = 20;
    static const unsigned int m_speed = 100;
    static std::vector <Type> m_type_food;
    static std::vector <Continents> m_continent;
    static std::string m_specy ;
};
inline Lion::Lion(std::string name):Mammal(name){}
inline void Lion::print()
{
	Mammal::print();
}
inline int Lion::GetPregnancyDuration() const {
    return m_pregnancy_duration;
}
inline int Lion::GetnumOfChild() const {
    return m_num_of_child;
}
inline unsigned short int Lion:: GetLifeExpectancy() const {
    return m_life_expectancy;
}
inline unsigned int Lion:: GetSpeed() const {
    return m_speed;
}
inline std::vector <Type> Lion::  GetTypeFood() const {
    return m_type_food ;
}
inline std::vector <Continents > Lion::GetContinent()  const {
    return m_continent;
}
inline std::string Lion::GetSpecies() const {
    return m_specy;
}
inline Lion::~Lion() {

}