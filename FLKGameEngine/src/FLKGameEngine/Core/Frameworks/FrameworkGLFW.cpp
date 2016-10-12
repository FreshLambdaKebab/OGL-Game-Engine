#include "FrameworkGLFW.hpp"

#ifdef FLK__GLFW

#include <iostream>

namespace FLKGameEngine
{
	FrameworkGLFW::FrameworkGLFW()
	{
	}

	void cbfun(GLFWwindow* window)
	{
		glfwSetWindowShouldClose(window,GL_TRUE);
	}

	void FrameworkGLFW::Init()
	{
		//init glfw
		glfwInit();

		GLFWmonitor *fullscreen = nullptr;

		if (coreSettings->GetWindowFullscreen())
		{
			fullscreen = glfwGetPrimaryMonitor();
		}

		GLint vsync;

		if (coreSettings->GetVSync())
		{
			vsync = 1;
		}
		else
		{
			vsync = 0;
		}

		// Set all the required options for GLFW
		glfwWindowHint(GLFW_DEPTH_BITS, coreSettings->GetDepthSize());
		glfwWindowHint(GLFW_STENCIL_BITS, coreSettings->GetStencilSize());
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, coreSettings->GetOpenGLVersion().major);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, coreSettings->GetOpenGLVersion().minor);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
		glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
		glfwWindowHint(GLFW_RESIZABLE, coreSettings->GetWindowResizable());
		glfwWindowHint(GLFW_SAMPLES, coreSettings->GetAntiAliasing());

		// Create a GLFWwindow object that we can use for GLFW's functions
		this->window = glfwCreateWindow(coreSettings->GetWindowWidth(), coreSettings->GetWindowHeight(),
			                            coreSettings->GetWindowTitle().c_str(), fullscreen, nullptr);

		int scaledWidth, scaledHeight;
		glfwGetFramebufferSize(window, &scaledWidth, &scaledHeight);

		coreSettings->SetScaledWindowWidth(scaledWidth);
		coreSettings->SetScaledWindowWidth(scaledHeight);

		if (nullptr == window)
		{
			std::cout << "Failed to create GLFW window!" << std::endl;
			glfwTerminate();
		}

		glfwSetKeyCallback(window,FrameworkGLFW::KeyCallback);

		glfwSetWindowCloseCallback(window, cbfun);

		glfwSwapInterval(vsync);

		glfwMakeContextCurrent(window);
	}

	void FrameworkGLFW::PollEvents()
	{
		glfwPollEvents();
	}

	void FrameworkGLFW::SwapBuffers()
	{
		glfwSwapBuffers(window);
	}

	void FrameworkGLFW::CleanUp()
	{
		glfwTerminate();
	}

	bool FrameworkGLFW::WindowIsOpen()const
	{
		return !glfwWindowShouldClose(window);

	}

	void FrameworkGLFW::CloseWindow()
	{
		glfwSetWindowShouldClose(window,GL_TRUE);
	}

	void FrameworkGLFW::KeyCallback(GLFWwindow * window, int key, int scancode, int action, int mods)
	{
		std::cout << GLFW_KEY_A + 32 << std::endl;

		std::cout << "Input" << std::endl;
	}

}

#endif
