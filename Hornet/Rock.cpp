#include "Rock.h"
Rock::Rock() {

}

void Rock::update(double frametime) {

	this->m_position += m_velocity * frametime;
	this->render();
}

void Rock::Initialise(Vector2D position)
{
	this->m_active = true;
	this->m_position = position;
	this->m_velocity = Vector2D(0, 100);
	this->Loadimage("assets\\rock4.bmp");


}