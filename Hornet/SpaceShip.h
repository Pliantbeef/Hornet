#pragma once
#include "Vector2D.h"
#include "Result.h"
#include "HtGraphics.h"


class SpaceShip
{
public: 
	  

	PictureIndex ShipImg; 
	Vector2D m_velocity;
	Vector2D m_position;
	float m_direction;

	SpaceShip();
	        
	void Initialise(Vector2D position);

	void render();

	void update();


	void weed();
	 
private:
	bool active;

};

