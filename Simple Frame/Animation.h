#ifndef _ANIMATION_
#define _ANIMATION_

#include "SFML\System\Clock.hpp"
#include "SFML\Graphics\Texture.hpp"
#include "SFML\Graphics\Sprite.hpp"
#include <string>

/* ---------------- Animation ----------------
* The Animation is an object used to animate
* a spritesheet, making it appear like a moving
* animation. It takes a filename, how long a 
* frame should be visible for and the number of 
* frames the spritesheet contains as parameters.
* When updated, the animation will neatly iterate
* through the texture's different frames.
*/

class Animation
{
public:
	Animation(const std::string& filename, int timePerFrame, int numberOfFrames);
	~Animation();

	void update();
	void setPosition(const sf::Vector2f& position);
	const sf::Sprite& getSprite() const;

private:
	sf::Clock mFrameTimer;			// Used to time how long a frame is visible
	sf::Texture mTexture;			// The texture to be used in the animation
	sf::Sprite mSprite;				// THe sprite  to be used in the animation
	int mTimePerFrame;				// How long a frame should be visible for
	int mNumberOfFrames;			// How many frames the spritesheet contains
	int mCurrentFrame;				// The frame which is currently active
};

#endif	// _ANIMATION_