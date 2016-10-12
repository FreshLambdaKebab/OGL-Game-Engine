#pragma once

#include <GL\glew.h>
#include <vector>
#include "../../CoreSettings.hpp"

namespace FLKGameEngine
{

	class EventsInterface
	{
	public:
		void Construct();

	protected:
		CoreSettings* coreSettings;
	};

}