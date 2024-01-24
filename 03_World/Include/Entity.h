#ifndef ENTITY_H
#define ENTITY_H

#include "SceneNode.h"
#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics/Transformable.hpp>

class Entity : public sf::Transformable
{
public:
	void setVelocity(sf::Vector2f velocity);
	void setVelocity(float vx, float vy);
	sf::Vector2f getVelocity() const;

private:
	virtual void updateCurrent(sf::Time deltaTime);

private:
	sf::Vector2f mVelocity;

};

#endif // !ENTITY_H
