
#ifndef __GameObject_HPP__
#define __GameObject_HPP__

#include "SDL2/SDL.h"

/*********************************
 * Abstract GameObject Class -
 * Interface for all game objects,
 * Update and render should both
 * call every frame
 *********************************/

class GameObject {
public:
   virtual ~GameObject() = 0;
   virtual void update(const float dt) = 0;
   virtual void render() = 0;
};

#endif

