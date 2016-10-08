#include "CoreFramework.hpp"

namespace FLKGameEngine
{

	CoreFramework::CoreFramework()
	{
		frameworkObject.Construct();
	}

	void CoreFramework::Init()
	{
		frameworkObject.Init();
	}

	void CoreFramework::PollEvents()
	{
		frameworkObject.PollEvents();
	}

	void CoreFramework::SwapBuffers()
	{
		frameworkObject.SwapBuffers();
	}

	void CoreFramework::CleanUp()
	{
		frameworkObject.CleanUp();
	}

	bool CoreFramework::WindowIsOpen()
	{
		return frameworkObject.WindowIsOpen();
	}

	void CoreFramework::CloseWindow()
	{
		frameworkObject.CloseWindow();
	}

}