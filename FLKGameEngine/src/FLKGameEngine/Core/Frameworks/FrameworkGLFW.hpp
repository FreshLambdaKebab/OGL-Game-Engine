#pragma once

#include "../../SystemDefs.h"

#ifdef FLK__GLFW

#include "FrameworkInterface.hpp"

#include <GLFW\glfw3.h>

namespace FLKGameEngine
{
	
	class FrameworkGLFW : public FrameworkInterface
	{
	public:
		FrameworkGLFW();

		void Init()override;

		void PollEvents()override;

		void SwapBuffers()override;

		void CleanUp()override;

		bool WindowIsOpen()const override;

		void CloseWindow()override;

		static void KeyCallback(GLFWwindow* window,int key,int scancode,int action,int mods);


	private:
		GLFWwindow* window;

	};
}

#endif