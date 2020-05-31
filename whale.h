#include "imammal.h"
#include "Fish.h"
class Whale: public Fish,public IMammal{
public:
    Whale(std::string name);
    /*virtual*/ int GetPregnancyDuration() const;
    /*virtual*/ int GetnumOfChild() const;
    /*virtual*/ unsigned int GetLowestDepth() const;
    /*virtual*/ std::string GetSpecies() const ;
    /*virtual*/ unsigned short int GetLifeExpectancy() const;
    /*virtual*/ std::vector <Continents> GetContinent() const;
    /*virtual*/ std::vector <Type> GetTypeFood() const ;
    /*virtual*/ unsigned int GetSpeed() const ;

protected:
    void print(ostream &out) const ;

private:
    static const int m_pregnancy_duration = 8;
    static const unsigned int m_lowest_depth = 100;
    static const int m_num_of_child = 20;
    static const unsigned short int m_life_expectancy = 17;
    static const unsigned int m_speed = 140;
    static const std::vector <Continents> m_continents;
    static const std::vector <Type> m_type_food;
    static const std::string m_specy;

};
inline Whale::Whale(std::string name):Fish(name){}

inline unsigned short int Whale:: GetLifeExpectancy() const {
    return m_life_expectancy;
}
inline unsigned int Whale:: GetSpeed() const {
    return m_speed;
}
inline std::vector <Type> Whale::  GetTypeFood() const {
    return m_type_food ;
}
inline std::vector <Continents > Whale::GetContinent()  const {
    return m_continents;
}
inline std::string Whale::GetSpecies() const {
    return m_specy;
}
inline int Whale::GetPregnancyDuration() const {
    return m_pregnancy_duration;
}
inline int Whale::GetnumOfChild() const {
    return m_num_of_child;
}
inline unsigned int Whale::GetLowestDepth() const {
    return m_lowest_depth;
}
inline void Whale::print(ostream & out) const
{
    Fish::print(out);
    out << "PregnancyDuration: " << GetPregnancyDuration() << std::endl;
    out << "numOfChild: " << GetnumOfChild() << std::endl;

}