
#ifndef __Pacman_HPP__
#define __Pacman_HPP__

#include "Unit.hpp"

/**************************************
 * Pacman concrete child class of Unit
 * Pacman unit shows the pacman sprite
 * and deploys its wakka attack
 **************************************/

class Pacman : public Unit {
public:
   Pacman(const float xpos, const float ypos,
          const float xvel, const float yvel): 
          Unit("../assets/images/pacman/pacman_32x32.png", xpos, ypos, xvel, yvel) {}
   ~Pacman() {}
   virtual void deployWeapon() const override;
};

#endif