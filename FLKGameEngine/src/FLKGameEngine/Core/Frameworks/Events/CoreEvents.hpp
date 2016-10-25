#pragma once

#include "EventsInterface.hpp"
#include "FLKGameEngine\SystemDefs.h"
#include "KeyboardDefs.h"

#ifdef FLK__SDL
#include "EventsSDL.hpp"
#elif defined(FLK__SFML)
#include "EventsSFML.hpp"
#elif defined(FLK__GLFW)
#include "EventsGLFW.hpp"
#endif

namespace FLKGameEngine
{

	class CoreEvents : public EventsInterface
	{
	public:
		static CoreEvents* getInstance()
		{
			if (!sInstance)
			{
				sInstance = new CoreEvents;
			}
			return sInstance;
		}

		bool CheckKeyboardStatus(int keyStatus);
		bool CheckKeyStatus(int keyStatus, int key);

		//sets the status of the keyboard
		void SetKeyboardStatus(int keyboardStatus);

	private:
		CoreEvents();

		static CoreEvents *sInstance;

#ifdef FLK__SDL
		EventsSDL eventsObject;
#elif defined(FLK__SFML)
		EventsSFML eventsObject;
#elif defined(FLK__GLFW)
		EventsGLFW eventsObject;
#endif
		
		//has a key been pressed or realeased
		bool keyboardStatus;

		int keysStatus[101];
	};

}