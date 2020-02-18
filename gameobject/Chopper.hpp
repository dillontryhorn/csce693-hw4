
#ifndef __Chopper_HPP__
#define __Chopper_HPP__

#include "Unit.hpp"

/*************************************
 * Chopper concrete child class of Unit
 * Uses the chopper-single sprite and
 * deploys a pew attack
 *************************************/

class Chopper : public Unit {
public:
    Chopper(const float xpos, const float ypos,
            const float xvel, const float yvel) : 
            Unit("../assets/images/chopper-single.png", xpos, ypos, xvel, yvel) {};
    ~Chopper() {};
    virtual void deployWeapon() const override;
};

#endif