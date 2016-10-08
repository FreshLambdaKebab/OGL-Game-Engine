#include <iostream>
#include "FLKGameEngine\FLKGameEngine.hpp"

USING_NAMESPACE_FLK_GAME_ENGINE;

int main(int argc, char* argv[])
{
	CoreEngine engine;

	engine.Init();

	while (engine.WindowIsOpen())
	{
		engine.GameLoop();
	}

	engine.CleanUp();

	return EXIT_SUCCESS;
}