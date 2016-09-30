#include "FLK_SDL.hpp"

#ifdef FLK__SDL

#include <iostream>

namespace FLKGameEngine
{

	FLK_SDL::FLK_SDL()
	{
	}

	void FLK_SDL::Init()
	{
		SDL_Init(SDL_INIT_EVERYTHING);

		SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
		SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
		SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
		SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
		SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, coreSettings->GetDepthSize());

		window = SDL_CreateWindow("SDL Window",0,0, coreSettings->GetWindowWidth(),
			                      coreSettings->GetWindowHeight(), SDL_WINDOW_OPENGL);

		int actualWidth, actualHeight;

		SDL_GL_GetDrawableSize(window, &actualWidth, &actualHeight);

		coreSettings->SetScaledWindowWidth(actualWidth);
		coreSettings->SetScaledWindowHeight(actualHeight);

		context = SDL_GL_CreateContext(window);

	}

	bool FLK_SDL::PollEvents()
	{
		if (SDL_PollEvent(&windowEvent))
		{
			if (windowEvent.type == SDL_QUIT)
			{
				return false;
			}
		}
		return true;
	}

	void FLK_SDL::SwapBuffers()
	{
		SDL_GL_SwapWindow(window);
	}

	void FLK_SDL::CleanUp()
	{
		SDL_GL_DeleteContext(context);
		SDL_DestroyWindow(window);
		SDL_Quit();
	}

}

#endif