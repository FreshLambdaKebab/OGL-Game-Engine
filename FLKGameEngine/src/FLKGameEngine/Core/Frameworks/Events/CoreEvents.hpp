#pragma once

#include "EventsInterface.hpp"
#include "FLKGameEngine\SystemDefs.h"

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
		void Construct();

	private:
#ifdef FLK__SDL
		EventsSDL eventsObject;
#elif defined(FLK__SFML)
		EventsSFML eventsObject;
#elif defined(FLK__GLFW)
		EventsGLFW eventsObject;
#endif
	};

}