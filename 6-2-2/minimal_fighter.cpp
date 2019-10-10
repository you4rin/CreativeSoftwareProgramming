#include"minimal_fighter.h"

MinimalFighter::MinimalFighter():mHp(0),mPower(0),mStatus(Invalid){}
MinimalFighter::MinimalFighter(int _hp,int _power):mHp(_hp),mPower(_power){
    if(!_hp)mStatus=Dead;
    else mStatus=Alive;
}
int MinimalFighter::hp(){return mHp;}
int MinimalFighter::power(){return mPower;}
FighterStatus MinimalFighter::status(){return mStatus;}
void MinimalFighter::setHp(int _hp){mHp=_hp;}
void MinimalFighter::makeDead(){mStatus=Dead;}
void MinimalFighter::hit(MinimalFighter* _enemy){
    setHp(mHp-_enemy->power());
    _enemy->setHp(_enemy->hp()-mPower);
    if(mHp<=0)mStatus=Dead;
    if(_enemy->hp()<=0)_enemy->makeDead();
}
void MinimalFighter::attack(MinimalFighter* _enemy){
    _enemy->setHp(_enemy->hp()-mPower);
    if(_enemy->hp()<=0)_enemy->makeDead();
    mPower=0;
}
void MinimalFighter::fight(MinimalFighter* _enemy){
    while(mHp>0&&_enemy->hp()>0){
        setHp(mHp-_enemy->power());
        _enemy->setHp(_enemy->hp()-mPower);
    }
    if(mHp<=0)mStatus=Dead;
    if(_enemy->hp()<=0)_enemy->makeDead();
}
