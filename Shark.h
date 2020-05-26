#include "Fish.h"
class Shark:public Fish{
public:
    Shark(std::string name);
    /*virtual*/ unsigned int GetLowestDepth() const;
    /*virtual*/ std::string GetSpecies() const ;
    /*virtual*/ unsigned short int GetLifeExpectancy() const;
    /*virtual*/ std::vector <Continents> GetContinent() const;
    /*virtual*/ std::vector <Type> GetTypeFood() const ;
    /*virtual*/ unsigned int GetSpeed() const ;

protected:
    void print() const;

private:
    static const m_lowest_depth = 30;
    static const unsigned short int m_life_expectancy = 20;
    static const unsigned int m_speed = 100;
    static std::vector <Type> m_type_food;
    static std::vector <Continents> m_continent;
    static std::string m_specy ;
};
inline Shark::Shark(std::string name): Fish(name){}
inline unsigned int Shark::GetLowestDepth() const {
    return m_lowest_depth;
}
inline void Shark::print() const {
    Fish::print()
}
inline unsigned short int Shark:: GetLifeExpectancy() const {
    return m_life_expectancy;
}
inline unsigned int Shark:: GetSpeed() const {
    return m_speed;
}
inline std::vector <Type> Shark::  GetTypeFood() const {
    return m_type_food ;
}
inline std::vector <Continents > Shark::GetContinent()  const {
    return m_continent;
}
inline std::string Shark::GetSpecies() const {
    return m_specy;
}
