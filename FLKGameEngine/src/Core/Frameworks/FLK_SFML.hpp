#pragma once

#include "SystemDefs.h"

#ifdef FLK__SFML

#include "FrameworkInterface.h"
#include <SFML\Window.hpp>

namespace FLKGameEngine
{

	class FLK_SFML : public FrameworkInterface
	{
	public:
		FLK_SFML();

		void Init();

		bool PollEvents();

		void SwapBuffers();

		void CleanUp();

	private:
		sf::Window* window;
	};

}

#endif