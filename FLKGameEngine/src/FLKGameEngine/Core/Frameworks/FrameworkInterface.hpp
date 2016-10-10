#pragma once

#include <gl\glew.h>
#include <vector>

#include "../CoreSettings.hpp"

namespace FLKGameEngine
{

	class FrameworkInterface
	{
	public:
		void Construct();

		virtual void Init() = 0;
		virtual void PollEvents() = 0;
		virtual void SwapBuffers() = 0;
		virtual void CleanUp() = 0;
		virtual bool WindowIsOpen()const = 0;
		virtual void CloseWindow() = 0;

	protected:
		CoreSettings* coreSettings;

	};

}