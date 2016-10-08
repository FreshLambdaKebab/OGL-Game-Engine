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
		isOpen = true;

		int windowResizable = 0;
		if (coreSettings->GetWindowResizable())
		{
			windowResizable = SDL_WINDOW_RESIZABLE;
		}

		int windowFullscreen = 0;
		if (coreSettings->GetWindowFullscreen())
		{
			windowFullscreen = SDL_WINDOW_FULLSCREEN;
		}

		int multisampleBuffer = 0;
		if (coreSettings->GetAntiAliasing() > 0)
		{
			multisampleBuffer = 1;
		}

		GLint vsync;
		if (coreSettings->GetVSync())
		{
			vsync = vsync = 1;
		}
		else
		{
			vsync = 0;
		}

		SDL_Init(SDL_INIT_EVERYTHING);

		SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
		SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, coreSettings->GetStencilSize());
		SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, coreSettings->GetOpenGLVersion().major);
		SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, coreSettings->GetOpenGLVersion().minor);
		SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, coreSettings->GetDepthSize());
		SDL_GL_SetAttribute(SDL_GL_MULTISAMPLEBUFFERS,multisampleBuffer);
		SDL_GL_SetAttribute(SDL_GL_MULTISAMPLESAMPLES, coreSettings->GetAntiAliasing());
		SDL_GL_SetSwapInterval(vsync);

		window = SDL_CreateWindow(coreSettings->GetWindowTitle().c_str(), 100, 100, coreSettings->GetWindowWidth(),
								  coreSettings->GetWindowHeight(), SDL_WINDOW_OPENGL | windowResizable | windowFullscreen);


		int actualWidth, actualHeight;

		SDL_GL_GetDrawableSize(window, &actualWidth, &actualHeight);

		coreSettings->SetScaledWindowWidth(actualWidth);
		coreSettings->SetScaledWindowHeight(actualHeight);

		context = SDL_GL_CreateContext(window);

	}

	void FLK_SDL::PollEvents()
	{
		if (SDL_PollEvent(&windowEvent))
		{
			if (windowEvent.type == SDL_QUIT)
			{
				isOpen = false;
			}
		}
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

	bool FLK_SDL::WindowIsOpen()
	{
		return isOpen;
	}

	void FLK_SDL::CloseWindow()
	{
		isOpen = false;
	}

}

#endif
