#pragma once

#include "FLKGameEngine\SystemDefs.h"

#ifdef FLK__SFML

#include "EventsInterface.hpp"
#include <SFML\Window.hpp>

namespace FLKGameEngine 
{

	class EventsSFML : public EventsInterface
	{
	public:
		EventsSFML();

	private:

	};

}

#endif