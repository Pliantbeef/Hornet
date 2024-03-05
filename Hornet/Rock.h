#pragma once
#include "GameObject.h"


class Rock : public GameObject
{
public:
	Rock();

	Vector2D m_velocity;

	void update(double frametime) override;

	void Initialise(Vector2D position);



};

