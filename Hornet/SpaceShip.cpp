#include "SpaceShip.h"
#include <string>
SpaceShip::SpaceShip() 
{
	active = false;


}

void SpaceShip::Initialise(Vector2D position)
{
	this->m_position = position;
	this->m_velocity = Vector2D(0,0);
	this->ShipImg = HtGraphics::instance.LoadPicture("assets\\ship.bmp");


}

void SpaceShip::update()
{

}

void SpaceShip::render()
{
	HtGraphics::instance.DrawAt(m_position,ShipImg,1.0,0,0);
}