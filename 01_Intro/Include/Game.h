#pragma once

#include <SFML/Graphics.hpp>

class Game
{
public:
						Game();
	
	void				run();				// Game main loop

private:
	void				processEvents();	// Events processing loop
	void				update(sf::Time deltaTime);
	void				render();
	void				handlePlayerInput(sf::Keyboard::Key key, bool isPressed);

private:
	sf::RenderWindow	mWindow;
	const sf::Time		TimePerFrame{ sf::seconds(1.f / 60.f) };

	sf::Texture			mTexture;
	sf::Sprite			mPlayer;
	bool				mIsMovingUp;
	bool				mIsMovingDown;
	bool				mIsMovingLeft;
	bool				mIsMovingRight;
};
