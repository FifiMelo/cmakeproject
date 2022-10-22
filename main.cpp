#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <iostream>

int main(int args, char** argv)
{
    std::cout << "Ready" << std::endl;
    if(false) SDL_Init(SDL_INIT_EVERYTHING);
	return 0;
}
