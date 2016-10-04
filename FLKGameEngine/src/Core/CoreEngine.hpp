#ifndef _CORE_ENGINE_H
#define _CORE_ENGINE_H

#include "SystemDefs.h"
#include <string>
#include <GL\glew.h>

#ifdef FLK__SDL
	#include "Frameworks\FLK_SDL.hpp"
#elif defined(FLK__SFML)
	#include "Frameworks\FLK_SFML.hpp"
#elif defined(FLK__GLFW)
#include "Frameworks\FLK_GLFW.hpp"
#endif

#include "Frameworks\CoreFramework.hpp"
#include "CoreSettings.hpp"


namespace FLKGameEngine
{

	class CoreEngine
	{
	public:
		CoreEngine();

		bool Init();//init the framework

		bool GameLoop();//this loop is run every frame

		void CleanUp();//de allocate memory

	private:
		CoreFramework coreFramework;

		CoreSettings* coreSettings;
	};

}

#endif
