#ifndef __IMAMMAL_H__
#define __IMAMMAL_H__

#include <iostream>
class IMammal{
public:
//    virtual ~IMammal();
    virtual int GetPregnancyDuration() const =0;
    virtual int GetnumOfChild() const =0;
    virtual void print(std::ostream & out) const =0;
};

#endif