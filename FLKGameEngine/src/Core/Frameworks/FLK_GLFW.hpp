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

		void Init()override;

		bool PollEvents()override;

		void SwapBuffers()override;

		void CleanUp()override;

	private:
		GLFWwindow* window;

	};
}

#endif