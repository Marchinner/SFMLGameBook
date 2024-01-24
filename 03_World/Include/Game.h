#pragma once

#include <SFML/Graphics.hpp>

class Game
{
public:	
							Game();
	
	void					run();				// Game main loop

private:
	void					processEvents();	// Events processing loop
	void					update(sf::Time deltaTime);
	void					updateStatistics(sf::Time deltaTime);
	void					render();
	void					handlePlayerInput(sf::Keyboard::Key key, bool isPressed);

private:
	static const sf::Time	TimePerFrame;
	static const float		PlayerSpeed;

	sf::RenderWindow		mWindow;
	sf::Font				mFont;
	sf::Text				mStatisticsText;
	sf::Time				mStatisticsUpdateTime;
	std::size_t				mStatisticsNumFrames;

	sf::Texture				mTexture;
	sf::Sprite				mPlayer;

	bool					mIsMovingUp;
	bool					mIsMovingDown;
	bool					mIsMovingLeft;
	bool					mIsMovingRight;
};
