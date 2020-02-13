
#ifndef __Chopper_HPP__
#define __Chopper_HPP__

#include "GameObject.hpp"

class Chopper : public GameObject {
public:
    Chopper(const float xpos, const float ypos,
            const float xvel, const float yvel): 
            GameObject("../assets/images/chopper-single.png", xpos, ypos, xvel, yvel) {}
    virtual ~Chopper() {}
};

#endif