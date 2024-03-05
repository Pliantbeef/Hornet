#include "GameObject.h"
#include <string>
#include "HtGraphics.h"

void GameObject::render()
{
	if (m_active) {
		HtGraphics::instance.DrawAt(m_position, m_image, 1.0, m_angle, 0);
	}
}

void GameObject::Loadimage(std::string image)
{
	this->m_image = HtGraphics::instance.LoadPicture(image);
}
 
GameObject::GameObject() {

}

