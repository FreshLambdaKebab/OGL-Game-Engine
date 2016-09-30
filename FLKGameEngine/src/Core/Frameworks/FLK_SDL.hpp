#pragma once

#include "SystemDefs.h"

#ifdef FLK__SDL
#include "FrameworkInterface.h"

#include <SDL\SDL.h>
#include <SDL\SDL_opengl.h>

namespace FLKGameEngine
{

	class FLK_SDL : public FLKGameEngine::FrameworkInterface
	{
	public:
		FLK_SDL();

		void Init();//initialize SDL
		bool PollEvents();
		void SwapBuffers();
		void CleanUp();

	private:
		SDL_Window* window;
		SDL_GLContext context;
		SDL_Event windowEvent;

	};

}

#endif