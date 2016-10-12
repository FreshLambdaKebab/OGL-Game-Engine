#pragma once

#include "../../SystemDefs.h"

#ifdef FLK__SFML

#include "FrameworkInterface.hpp"
#include <SFML\Window.hpp>

namespace FLKGameEngine
{

	class FrameworkSFML : public FrameworkInterface
	{
	public:
		FrameworkSFML();

		void Init()override;

		void PollEvents()override;

		void SwapBuffers()override;

		void CleanUp()override;

		bool WindowIsOpen()const override;

		void CloseWindow()override;

	private:
		sf::Window* window;
	};

}

#endif