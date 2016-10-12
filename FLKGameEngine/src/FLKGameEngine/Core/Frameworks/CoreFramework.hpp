#pragma once

#include "FrameworkInterface.hpp"
#include "FLKGameEngine\SystemDefs.h"

#ifdef FLK__SDL
	#include "FrameworkSDL.hpp"
#elif defined(FLK__SFML)
	#include "FrameworkSFML.hpp"
#elif defined(FLK__GLFW)
	#include "FrameworkGLFW.hpp"
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
		FrameworkSDL frameworkObject;
#elif defined(FLK__SFML)
		FrameworkSFML frameworkObject;
#elif defined(FLK__GLFW)
		FrameworkGLFW frameworkObject;
#endif
	};

}