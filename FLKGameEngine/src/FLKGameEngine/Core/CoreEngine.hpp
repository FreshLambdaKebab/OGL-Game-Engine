#ifndef _CORE_ENGINE_H
#define _CORE_ENGINE_H

#include "../SystemDefs.h"
#include <string>
#include <GL\glew.h>

#ifdef FLK__SDL
	#include "Frameworks\FrameworkSDL.hpp"
#elif defined(FLK__SFML)
	#include "Frameworks\FrameworkSFML.hpp"
#elif defined(FLK__GLFW)
#include "Frameworks\FrameworkGLFW.hpp"
#endif

#include "Frameworks\CoreFramework.hpp"
#include "CoreSettings.hpp"
#include "Frameworks\Events\CoreEvents.hpp"


namespace FLKGameEngine
{

	class CoreEngine
	{
	public:
		CoreEngine();

		bool Init();//init the framework

		void GameLoop();//this loop is run every frame

		void CleanUp();//de allocate memory

		bool WindowIsOpen()const;//is the window still open or not

		CoreSettings* getSettings() { return this->coreSettings; }
		CoreEvents* getEvents() { return this->coreEvents; }

	private:
		CoreFramework coreFramework;

		CoreSettings* coreSettings;
		CoreEvents* coreEvents;
	};

}

#endif
