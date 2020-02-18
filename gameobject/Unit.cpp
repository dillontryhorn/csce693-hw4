
#include "Unit.hpp"
#include "texture_utils.hpp"
#include "Game.hpp"
#include <iostream>

Unit::Unit(const char* filename_img,
                       const float xpos, const float ypos,
                       const float xvel, const float yvel)
: xpos(xpos), ypos(ypos), xvel(xvel), yvel(yvel)
{
   texture = texture::load_texture(filename_img); //load specified texture
}

Unit::~Unit()
{
   SDL_DestroyTexture(texture);
}

void Unit::update(const float dt) //move the units
{
   xpos += xvel * dt;
   ypos += yvel * dt;

   src_rect.h = 32;
   src_rect.w = 32;
   src_rect.x = 0;
   src_rect.y = 0;

   dest_rect.x = static_cast<int>(xpos);
   dest_rect.y = static_cast<int>(ypos);
   dest_rect.w = src_rect.w * 2;
   dest_rect.h = src_rect.h * 2;
}

void Unit::render() //render the texture onto the screen
{
   SDL_RenderCopy(Game::renderer, texture, &src_rect, &dest_rect);
}

void Unit::deployWeapon() const //the std::cout says it all
{
   std::cout << "I am a weaponless generic unit. :(" << std::endl;
}

