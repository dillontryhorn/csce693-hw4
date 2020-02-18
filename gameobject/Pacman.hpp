
#ifndef __Pacman_HPP__
#define __Pacman_HPP__

#include "GameObject.hpp"

class Pacman : public GameObject {
public:
   Pacman(const float xpos, const float ypos,
          const float xvel, const float yvel): 
          GameObject("../assets/images/pacman/pacman_32x32.png", xpos, ypos, xvel, yvel) {}
   ~Pacman() {}
   virtual void triggerEvent() override;

};

#endif