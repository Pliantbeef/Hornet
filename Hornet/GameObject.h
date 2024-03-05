#pragma once
#include "Vector2D.h"
#include "HtGraphics.h"
#include <string>


class GameObject
{
protected:

	GameObject();
	Vector2D m_position;
	double m_angle;
	bool m_active;

	void Loadimage(std::string filename);




private:
	PictureIndex m_image;



public:
	virtual void render();

	virtual void update(double frametime) = 0;

};

