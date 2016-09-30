#include <iostream>
#include "Core\CoreEngine.hpp"

using namespace FLKGameEngine;

int main(int argc, char* argv[])
{
	CoreEngine engine;

	engine.Init();

	while (true)
	{
		if (!engine.GameLoop())
		{
			break;
		}
	}

	engine.CleanUp();

	return EXIT_SUCCESS;
}