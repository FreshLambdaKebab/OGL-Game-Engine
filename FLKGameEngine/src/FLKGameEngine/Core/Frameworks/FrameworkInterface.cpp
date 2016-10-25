#include "FrameworkInterface.hpp"

namespace FLKGameEngine
{

	void FrameworkInterface::Construct()
	{
		coreSettings = CoreSettings::getInstance();
		coreEvents = CoreEvents::getInstance();
	}

}