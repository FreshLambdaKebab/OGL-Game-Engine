#pragma once

#include "../../SystemDefs.h"

#ifdef FLK__SFML

#include "FrameworkInterface.hpp"
#include <SFML\Window.hpp>

namespace FLKGameEngine
{

	class FLK_SFML : public FrameworkInterface
	{
	public:
		FLK_SFML();

		void Init()override;

		void PollEvents()override;

		void SwapBuffers()override;

		void CleanUp()override;

		bool WindowIsOpen()override;

		void CloseWindow()override;

	private:
		sf::Window* window;
	};

}

#endif