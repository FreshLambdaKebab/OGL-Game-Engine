#pragma once

#include "../../SystemDefs.h"

#ifdef FLK__SDL
#include "FrameworkInterface.hpp"

#include <SDL\SDL.h>
#include <SDL\SDL_opengl.h>

namespace FLKGameEngine
{

	class FLK_SDL : public FLKGameEngine::FrameworkInterface
	{
	public:
		FLK_SDL();

		void Init()override;//initialize SDL
		void PollEvents()override;
		void SwapBuffers()override;
		void CleanUp()override;
		bool WindowIsOpen()override;
		void CloseWindow()override;

	private:
		SDL_Window* window;
		SDL_GLContext context;
		SDL_Event windowEvent;

		bool isOpen;
	};

}

#endif