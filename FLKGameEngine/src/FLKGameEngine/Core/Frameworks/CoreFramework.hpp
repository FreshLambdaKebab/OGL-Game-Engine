#pragma once

#include "FrameworkInterface.hpp"
#include "FLKGameEngine\SystemDefs.h"

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

		void Init()override;
		void PollEvents()override;
		void SwapBuffers()override;
		void CleanUp()override;
		bool WindowIsOpen()const override;
		void CloseWindow()override;

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