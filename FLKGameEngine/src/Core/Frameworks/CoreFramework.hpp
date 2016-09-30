#pragma once

#include "FrameworkInterface.h"
#include "SystemDefs.h"

#ifdef FLK__SDL
	#include "FLK_SDL.hpp"
#elif defined(FLK__SFML)
	#include "FLK_SFML.hpp"
#elif defined(FLK__GLFW)
	#include "FLK_GLFW.hpp"
#endif

namespace FLKGameEngine
{

	class CoreFramework : public FrameworkInterface
	{
	public:
		CoreFramework();

		void Init();
		bool PollEvents();
		void SwapBuffers();
		void CleanUp();

	private:
#ifdef FLK__SDL
		FLK_SDL frameworkObject;
#elif defined(FLK__SFML)
		FLK_SFML frameworkObject;
#elif defined(FLK__GLFW)
		FLK_GLFW frameworkObject;
#endif
	};

}