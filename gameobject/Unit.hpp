
#ifndef __Unit_HPP__
#define __Unit_HPP__

#include "GameObject.hpp"

/**************************
 * Unit class derived from
 * GameObject interface
 * 
 * Unit class decides how
 * units (pacmen, tanks, 
 * choppers, etc.) move and
 * update. Units have a weapon
 * that they can deploy.
 * 
 **************************/

class Unit : public GameObject {
public:
    Unit(const char* filename_img,
         const float xpos, const float ypos,
         const float xvel, const float yvel);
    virtual ~Unit();
    virtual void update(const float dt) override;
    virtual void render() override;
    virtual void deployWeapon() const;
private:
    float xpos{}, ypos{};
    float xvel{}, yvel{};

    SDL_Texture* texture{};
    SDL_Rect src_rect, dest_rect;
};

#endif