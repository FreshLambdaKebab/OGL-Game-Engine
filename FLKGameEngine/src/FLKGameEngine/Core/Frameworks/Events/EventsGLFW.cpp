#include "EventsGLFW.hpp"

#ifdef FLK__GLFW

#include <iostream>

namespace FLKGameEngine
{

	EventsGLFW::EventsGLFW()
	{
		//   glfwSetKeyCallback( this->window, FrameworkGLFW::KeyCallback );

		// glfwSetWindowCloseCallback( this->window, cbfun );
	}

	void EventsGLFW::KeyCallback(GLFWwindow * window, int key, int scancode, int action, int mods)
	{
		// if (key == GLFW_KEY_E && action == GLFW_PRESS)
		//       activate_dickShip();
	}

}

#endif
