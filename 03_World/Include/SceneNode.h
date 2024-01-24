#ifndef SCENE_NODE_H
#define SCENE_NODE_H

#include <memory>
#include <vector>
#include <cassert>

#include <SFML/Graphics/Transformable.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/System/NonCopyable.hpp>
#include <SFML/System/Time.hpp>

class SceneNode : public sf::Transformable, public sf::Drawable, private sf::NonCopyable
{
public:
	typedef std::unique_ptr<SceneNode> Ptr;

	void attachChild(Ptr child);
	Ptr detachChild(const SceneNode& node);
	void update(sf::Time deltaTime);

private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	virtual void drawCurrent(sf::RenderTarget& target, sf::RenderStates states) const;
	virtual void updateCurrent(sf::Time deltaTime);
	void updateChildren(sf::Time deltaTime);

private:
	std::vector<Ptr> mChildren;
	SceneNode* mParent;
};

#endif // !SCENE_NODE_H
