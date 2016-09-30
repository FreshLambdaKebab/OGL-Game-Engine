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

	bool CoreFramework::PollEvents()
	{
		frameworkObject.PollEvents();

		return true;
	}

	void CoreFramework::SwapBuffers()
	{
		frameworkObject.SwapBuffers();
	}

	void CoreFramework::CleanUp()
	{
		frameworkObject.CleanUp();
	}

}