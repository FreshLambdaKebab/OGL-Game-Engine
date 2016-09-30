#pragma once

#include "SystemDefs.h"

#ifdef FLK__GLFW

#include "FrameworkInterface.h"

#include <GLFW\glfw3.h>

namespace FLKGameEngine
{
	
	class FLK_GLFW : public FrameworkInterface
	{
	public:
		FLK_GLFW();

		void Init();

		bool PollEvents();

		void SwapBuffers();

		void CleanUp();

	private:
		GLFWwindow* window;

	};
}

#endif