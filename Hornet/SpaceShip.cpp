#include "SpaceShip.h"
#include <string>
SpaceShip::SpaceShip() 
{
	active = false;


}

void SpaceShip::Initialise(Vector2D position)
{
	m_active = true;
    m_input.set(0, 0);
    m_angle = 0;
	m_position = position;
	m_velocity = Vector2D(0,200);
	Loadimage("assets\\ship.bmp");
    speed = 800;
    m_maxSpeed = 800;
    m_angleSpeed = 10;
    
    

}

void SpaceShip::update(double frametime)
{

    SetVelocity(); // user input, decides which direction the ship will move
    AdjustAngle(frametime); // rotates the ship tp face the direction the player is attempting to move
    ChangeVelocity(frametime); // updates the ships velocity
    
	m_position += m_velocity * frametime; // moves the ship


	render();


}

void SpaceShip::SetVelocity() // based on the users input, will increase or decrease the value of m_input in the x or y direction by 1 or -1
{
    m_input.set(0, 0);

    if (HtKeyboard::instance.KeyPressed(SDL_SCANCODE_W))
    {
        m_input.YValue += 1;
    }

    if (HtKeyboard::instance.KeyPressed(SDL_SCANCODE_A))
    {
        m_input.XValue -= 1;
    }
    if (HtKeyboard::instance.KeyPressed(SDL_SCANCODE_S))
    {
        m_input.YValue -= 1;
    }
    if (HtKeyboard::instance.KeyPressed(SDL_SCANCODE_D))
    {
        m_input.XValue += 1;
    }

 
    m_desiredVelocity.set(m_input);


}

void SpaceShip::ChangeVelocity(double frametime)
{
    Vector2D acceleration;
    acceleration.setBearing(m_angle, m_input.magnitude()); //creates a vector using the angle the ship is currently facing and the magnitude
    m_velocity += acceleration * speed * frametime; //ship is moved 
    m_velocity -= m_velocity * frametime; //friction

}

void SpaceShip::AdjustAngle(double frametime) 
{
    double desiredAngle = m_desiredVelocity.angle(); // gets the angle from the desired velocity. if the player is pressing D this is to the relative right of the ship etc
    double angleDifference = Vector2D::AngleDifference(m_angle, desiredAngle); // finds the difference between the ships current angle and the desired angle

    m_angle += angleDifference * m_angleSpeed * frametime * m_input.magnitude(); // rotates the ship to face the desired angle 
    
}



