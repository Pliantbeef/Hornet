#include "Game.h"
#include <iostream>
#include "HtKeyboard.h"
#include "HtMouse.h"
#include "HtGameController.h"


void Game::StartOfProgram()
{
    HtMouse::instance.SetPointerVisiblity(false);
}

void Game::StartOfGame()
{
    pShip = new SpaceShip(); // creates a new ship with a pointer
    pShip->Initialise(Vector2D(0,0)); // initialises the new ship and sets its position vector to 0,0


    //asteroid.Initialise(Vector2D(100, 0));

}

void Game::Update(double frameTime)
{




    pShip->update(frameTime);
    HtGraphics::instance.Present();
    //asteroid.render();
    
}

void Game::OnSuspend()
{

}

void Game::OnResume()
{

}

void Game::EndOfGame()
{
    delete pShip;
    pShip = nullptr;
}

void Game::EndOfProgram()
{
}
