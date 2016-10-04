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

		void Init()override;

		bool PollEvents()override;

		void SwapBuffers()override;

		void CleanUp()override;

	private:
		sf::Window* window;
	};

}

#endif