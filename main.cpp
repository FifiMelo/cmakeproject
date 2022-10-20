#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <iostream>

int main(int args, char** argv)
{
    std::cout << "Ready" << std::endl;
    SDL_Delay(10000);
	return 0;
}
