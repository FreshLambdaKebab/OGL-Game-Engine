#include "CoreEngine.hpp"

#include <iostream>

namespace FLKGameEngine
{

	CoreEngine::CoreEngine()
	{
		coreSettings = CoreSettings::getInstance();

		coreEvents = CoreEvents::getInstance();
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
		glViewport(0, 0, coreSettings->GetScaledWindowWidth(), coreSettings->GetScaledWindowHeight());
	
		if (coreSettings->GetAntiAliasing() > 0)
		{
			glEnable(GL_MULTISAMPLE);
		}
		else
		{
			glDisable(GL_MULTISAMPLE);
		}

		return EXIT_SUCCESS;
	}

	void CoreEngine::GameLoop()
	{
		coreFramework.PollEvents();

		//clear the color 
		glClearColor(0.2f, 1.0f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		//draw opengl

		coreFramework.SwapBuffers();
	}

	void CoreEngine::CleanUp()
	{
		//clean up the shit
		coreFramework.CleanUp();
	}

	bool CoreEngine::WindowIsOpen()const
	{
		return coreFramework.WindowIsOpen();
	}

}