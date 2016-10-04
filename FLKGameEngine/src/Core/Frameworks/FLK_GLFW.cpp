#include "FLK_GLFW.hpp"

#ifdef FLK__GLFW

#include <iostream>

namespace FLKGameEngine
{
	FLK_GLFW::FLK_GLFW()
	{
	}

	void FLK_GLFW::Init()
	{
		//init glfw
		glfwInit();

		//set all required options
		glfwWindowHint(GLFW_DEPTH_BITS, coreSettings->GetDepthSize());
		glfwWindowHint(GLFW_STENCIL_BITS,coreSettings->GetStencilSize());
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, coreSettings->GetOpenGLVersion().major);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, coreSettings->GetOpenGLVersion().minor);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
		glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
		glfwWindowHint(GLFW_RESIZABLE, coreSettings->GetWindowResizable());
		glfwWindowHint(GLFW_SAMPLES, coreSettings->GetAntiAliasing());

		//create glfw window
		window = glfwCreateWindow(coreSettings->GetWindowWidth(), coreSettings->GetWindowHeight(), "GLFW", nullptr, nullptr);

		int scaledWidth, scaledHeight;
		glfwGetFramebufferSize(window, &scaledWidth, &scaledHeight);

		coreSettings->SetScaledWindowWidth(scaledWidth);
		coreSettings->SetScaledWindowHeight(scaledHeight);

		if (nullptr == window)
		{
			std::cout << "Failed to create GLFW window!" << std::endl;
			glfwTerminate();
		}

		glfwMakeContextCurrent(window);
	}

	bool FLK_GLFW::PollEvents()
	{
		glfwPollEvents();

		return true;
	}

	void FLK_GLFW::SwapBuffers()
	{
		glfwSwapBuffers(window);
	}

	void FLK_GLFW::CleanUp()
	{
		glfwTerminate();
	}

}

#endif
