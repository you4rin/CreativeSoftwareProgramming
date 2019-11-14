#ifndef __CLOCKS_H__
#define __CLOCKS_H__

#include"clock_time.h"

class Clock{
protected:
    ClockTime _clockTime;
    double _driftPerSecond;
    double _totalDrift;
public:
    Clock(int,int,int,double);
    virtual ~Clock();
    void reset();
    void tick();
    virtual void displayTime()=0;
};
class NaturalClock:public Clock{
public:
    NaturalClock(int,int,int,double);
};
class MechanicalClock:public Clock{
public:
    MechanicalClock(int,int,int,double);
};
class DigitalClock:public Clock{
public:
    DigitalClock(int,int,int,double);
};
class QuantumClock:public Clock{
public:
    QuantumClock(int,int,int,double);
};
class SundialClock:public NaturalClock{
public:
    SundialClock(int,int,int);
    void displayTime();
};
class CuckooClock:public MechanicalClock{
public:
    CuckooClock(int,int,int);
    void displayTime();
};
class GrandFatherClock:public MechanicalClock{
public:
    GrandFatherClock(int,int,int);
    void displayTime();
};
class WristClock:public DigitalClock{
public:
    WristClock(int,int,int);
    void displayTime();
};
class AtomicClock:public QuantumClock{
public:
    AtomicClock(int,int,int);
    void displayTime();
};

#endif
