#pragma once

#include <SFML\Graphics.hpp>
#include "Components/GameObject.h"
#include "Collider.h"

class Player
{
public:
	Player();
	Player(sf::Texture* texture, sf::Vector2u imageCount, float switchTime, float speed);
	//Player(sf::Texture* Texture, sf::Vector2u imageCoun, float speed, float switchTime, float jumpHeight);
	~Player();

	void Update(float deltaTime);
	void Draw(sf::RenderWindow& window);

	sf::Vector2f GetPosition() { return body.getPosition(); }
	Collider GetCollider() { return Collider(body); }

private:
	sf::RectangleShape body;
	//Animation animation;
	unsigned int row;
	float speed;
	bool faceRight;

};
