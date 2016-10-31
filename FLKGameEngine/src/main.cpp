#include <iostream>
#include "FLKGameEngine\FLKGameEngine.hpp"

USING_NAMESPACE_FLK_GAME_ENGINE;

int main(int argc, char* argv[])
{
	CoreEngine engine;

	engine.Init();

	while (engine.WindowIsOpen())
	{
		//std::cout << engine.getEvents()->CheckKeyboardStatus(KEYSTATUS::PRESSED) <<  std::endl;
		std::cout << KEYS::C << std::endl;
		/*
		if ( ce.getEvents().Keyboard().Pressed() )
		{
			if ( ce.getEvents().Keyboard().Key() == 'A' )
			{

			}
		}
		*/

		//std::cout << ce.getCoreSettings()->GetWindowTitle() << std::endl;
		engine.GameLoop();
	}

	engine.CleanUp();

	return EXIT_SUCCESS;
}