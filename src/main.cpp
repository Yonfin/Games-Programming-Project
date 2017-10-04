/**
 * @file   main.cpp
 * @author your_name (your_email)
 * @brief  The main entry point for our simple game.
*/

//C++ Headers
#include <iostream> // functions for printing things out
#include <string>   // functions for strings
#include <Windows.h> // functions for Sleep
#include "sdl.h" // SDL functions, core component to this project


//Alias -- we don't want to type out std:: all the time!
using namespace std;

int main(int argc, char *argv[])
{
	//Print hello world
	cout << "hello world!" << endl;

	//Initialise
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
		return 1;

	//Creating a Window using SDL
	SDL_Window* window = SDL_CreateWindow("Reece Goodwin 15576606", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_RESIZABLE);

	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 1);



	SDL_SetRenderDrawColor(renderer, 255,255,0,0);
	SDL_Delay(500);

	SDL_RenderClear(renderer);


	SDL_Delay(1000);

	SDL_UpdateWindowSurface(window);

	//Delays the program from closing or continuing through the code below it.
	SDL_Delay(4000);

	//Standard sleep for C++
	//Sleep(5000);

	//Finally, exit
	return 0;
}
