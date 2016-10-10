#pragma once

#include "../../SystemDefs.h"

#ifdef FLK__GLFW

#include "FrameworkInterface.hpp"

#include <GLFW\glfw3.h>

namespace FLKGameEngine
{
	
	class FLK_GLFW : public FrameworkInterface
	{
	public:
		FLK_GLFW();

		void Init()override;

		void PollEvents()override;

		void SwapBuffers()override;

		void CleanUp()override;

		bool WindowIsOpen()const override;

		void CloseWindow()override;



	private:
		GLFWwindow* window;

	};
}

#endif