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
		glfwWindowHint(GLFW_STENCIL_BITS, 8);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
		glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
		glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

		//create glfw window
		window = glfwCreateWindow(coreSettings->GetWindowWidth(), coreSettings->GetWindowHeight(), "GLFW window", nullptr, nullptr);

		int scaledWidth, scaledHeight;
		glfwGetFramebufferSize(window, &scaledWidth, &scaledHeight);

		coreSettings->SetScaledWindowWidth(scaledWidth);
		coreSettings->SetScaledWindowWidth(scaledHeight);

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