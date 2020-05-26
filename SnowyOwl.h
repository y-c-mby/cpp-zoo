#include "Bird.h"
class SnowyOwl:public Birds{
public:
    SnowyOwl(std::string name);
    /*virtual*/ unsigned float GetWingSpan() const ;
    /*virtual*/ unsigned float GetreacedHighet() const ;
    /*virtual*/ std::string GetSpecies() const ;
    /*virtual*/ unsigned short int GetLifeExpectancy() const;
    /*virtual*/ std::vector <Continents> GetContinent() const;
    /*virtual*/ std::vector <Type> GetTypeFood() const ;
    /*virtual*/ unsigned int GetSpeed() const ;

protected:
    void print() const ;

private:
    static const unsigned float m_wing_span = 25;
    static const unsigned float m_reached_hieght = 130;
    static const unsigned short int m_life_expectancy = 20;
    static const unsigned int m_speed = 100;
    static std::vector <Type> m_type_food;
    static std::vector <Continents> m_continent;
    static std::string m_specy ;
};
inline SnowyOwl::SnowyOwl(std::string name) :Birds(name){

}
inline void SnowyOwl::print() const {
    Birds::print();
}
inline unsigned float SnowyOwl::GetWingSpan() const {
    return m_wing_span;
}
inline unsigned float SnowyOwl::GetreacedHighet() const {
    return m_reached_hieght;
}
inline unsigned short int SnowyOwl:: GetLifeExpectancy() const {
    return m_life_expectancy;
}
inline unsigned int SnowyOwl:: GetSpeed() const {
    return m_speed;
}
inline std::vector <Type> SnowyOwl::  GetTypeFood() const {
    return m_type_food ;
}
inline std::vector <Continents > SnowyOwl::GetContinent()  const {
    return m_continent;
}
inline std::string SnowyOwl::GetSpecies() const {
    return m_specy;
}