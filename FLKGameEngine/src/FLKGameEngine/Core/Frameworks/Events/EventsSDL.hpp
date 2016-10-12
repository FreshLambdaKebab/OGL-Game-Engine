#pragma once

#include "FLKGameEngine\SystemDefs.h"

#ifdef FLK__SDL

#include "EventsInterface.hpp"
#include <SDL\SDL.h>

namespace FLKGameEngine
{

	class EventsSDL : public EventsInterface
	{
	public:
		EventsSDL();

	};

}

#endif