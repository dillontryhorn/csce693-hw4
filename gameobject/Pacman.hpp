
#ifndef __Pacman_HPP__
#define __Pacman_HPP__

#include "SDL2/SDL.h"
#include "GameObject.hpp"

class Pacman : public GameObject {
public:
   Pacman(const char* filename_img,
              const float xpos, const float ypos,
              const float xvel, const float yvel);
   virtual ~Pacman();
private:
   float xpos{}, ypos{};
   float xvel{}, yvel{};

   SDL_Texture* texture{};
   SDL_Rect src_rect, dest_rect;
};

#endif