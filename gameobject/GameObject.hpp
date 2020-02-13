
#ifndef __GameObject_HPP__
#define __GameObject_HPP__

#include "SDL2/SDL.h"

class GameObject {
public:
   GameObject(const char* filename_img,
              const float xpos, const float ypos,
              const float xvel, const float yvel);
   virtual ~GameObject() = 0;

   void update(const float dt);
   void render();

private:
   float xpos{}, ypos{};
   float xvel{}, yvel{};

   SDL_Texture* texture{};
   SDL_Rect src_rect, dest_rect;
};

#endif
