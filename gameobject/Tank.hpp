
#ifndef __Tank_HPP__
#define __Tank_HPP__

#include "GameObject.hpp"

class Tank : public GameObject {
public:
    Tank(const float xpos, const float ypos,
          const float xvel, const float yvel): 
          GameObject("../assets/images/tank-big-down.png", xpos, ypos, xvel, yvel) {}
    virtual ~Tank() {}
};

#endif