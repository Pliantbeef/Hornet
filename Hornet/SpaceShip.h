#pragma once
#include "Vector2D.h"
#include "Result.h"
#include "HtGraphics.h"
#include "GameObject.h"
#include "HtKeyboard.h"


class SpaceShip : public GameObject 
{
public: 
	  


	Vector2D m_velocity;
	Vector2D m_input;

	Vector2D m_desiredVelocity;

	SpaceShip();
	        
	void Initialise(Vector2D position);

	void update(double frametime) override;

	void ChangeVelocity(double frametime);

	void SetVelocity();

	void AdjustAngle(double framtime);

	 
private:
	bool active;

	double speed;
	double m_angleSpeed;
	double m_maxSpeed;
};

