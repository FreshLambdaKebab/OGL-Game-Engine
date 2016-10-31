#include "CoreEvents.hpp"

#include <iostream>

/*
if ( engine.getEvents().Keyboard().Pressed( ) )
{
	if ( engine.getEvents().Keyboard().Key() == 'A' )
	{

	}
}
*/

namespace FLKGameEngine
{
	CoreEvents* CoreEvents::sInstance = nullptr;

	CoreEvents::CoreEvents()
	{
		keyboardStatus = KEYSTATUS::NO_STATE;
		
		eventsObject.Construct();

		for (int i = 0;i < sizeof(*keysStatus);i++)
		{
			keysStatus[i] = KEYSTATUS::NO_STATE;
		}


	}

	bool CoreEvents::CheckKeyboardStatus(int keyStatus)
	{
		if (keyStatus == keyboardStatus)
		{
			this->keyboardStatus = KEYSTATUS::NO_STATE;

			return true;
		}
		else
		{
			this->keyboardStatus = KEYSTATUS::NO_STATE;

			return false;
		}


		return true;
	}

	bool CoreEvents::CheckKeyStatus(int keyStatus, int key)
	{
		if (keyStatus == this->keysStatus[key])
		{
			return true;
		}
		else
		{
			return false;
		}

		return true;
	}

	void CoreEvents::SetKeyboardStatus(int keyboardStatus)
	{
		this->keyboardStatus = keyboardStatus;
	}

	void CoreEvents::SetKeyStatus(int key, int keyStatus)
	{
		//this->keysStatus[key] = keyStatus;
	}


}