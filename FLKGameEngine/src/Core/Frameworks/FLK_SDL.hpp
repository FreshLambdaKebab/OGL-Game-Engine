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

		void Init()override;//initialize SDL
		bool PollEvents()override;
		void SwapBuffers()override;
		void CleanUp()override;

	private:
		SDL_Window* window;
		SDL_GLContext context;
		SDL_Event windowEvent;

	};

}

#endif