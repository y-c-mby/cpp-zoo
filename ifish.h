#ifndef __IFISH_H__
#define __IFISH_H__

#include <iostream>
class IFish{
public:
    virtual ~IFish(){}
    virtual unsigned int GetLowestDepth() const =0;
protected:
    virtual void print(std::ostream & out) const =0 ;
};

#endif