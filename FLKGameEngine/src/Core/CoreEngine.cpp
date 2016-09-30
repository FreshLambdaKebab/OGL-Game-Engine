#include "CoreEngine.hpp"

#include <iostream>

namespace FLKGameEngine
{

	CoreEngine::CoreEngine()
	{
	}

	bool CoreEngine::Init()
	{
		coreFramework.Init();

		glewExperimental = GL_TRUE;

		if (GLEW_OK != glewInit())
		{
			std::cout << "Failed to initialize glew!" << std::endl;
			return EXIT_FAILURE;
		}

		//viewport dimensions


		return true;
	}

	bool CoreEngine::GameLoop()
	{
		coreFramework.PollEvents();

		//clear the color 
		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		//draw opengl

		coreFramework.SwapBuffers();

		return true;
	}

	void CoreEngine::CleanUp()
	{
		//clean up the shit
		coreFramework.CleanUp();
	}

}