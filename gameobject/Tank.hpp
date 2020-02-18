
#ifndef __Tank_HPP__
#define __Tank_HPP__

#include "Unit.hpp"

/********************************
 * Tank concrete child of Unit
 * Uses a tank sprite and the
 * attack goes boom!
 ********************************/

class Tank : public Unit {
public:
    Tank(const float xpos, const float ypos,
          const float xvel, const float yvel): 
          Unit("../assets/images/tank-big-down.png", xpos, ypos, xvel, yvel) {}
    ~Tank() {}
    virtual void deployWeapon() const override;
};

#endif