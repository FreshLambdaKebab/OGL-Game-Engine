#pragma once

#include "FLKGameEngine\SystemDefs.h"

#ifdef FLK__GLFW

#include "EventsInterface.hpp"

#include <GLFW\glfw3.h>

namespace FLKGameEngine
{

	class EventsGLFW : public EventsInterface
	{
	public:
		EventsGLFW();
		void KeyCallback(GLFWwindow* window,int key,int scancode,int action,int mods);

	private:

	};

}

#endif
