#include "FLK_SFML.hpp"

#ifdef FLK__SFML

#include <iostream>

namespace FLKGameEngine
{

	FLK_SFML::FLK_SFML()
	{

	}

	void FLK_SFML::Init()
	{
		int windowResizable = 0;

		if (coreSettings->GetWindowResizable())
		{
			windowResizable = sf::Style::Resize;
		}

		int windowFullscreen = 0;
		if (coreSettings->GetWindowFullscreen())
		{
			windowFullscreen = sf::Style::Fullscreen;
		}

		sf::ContextSettings settings;
		settings.depthBits = coreSettings->GetDepthSize();
		settings.stencilBits = coreSettings->GetStencilSize();
		settings.majorVersion = coreSettings->GetOpenGLVersion().major;
		settings.minorVersion = coreSettings->GetOpenGLVersion().minor;
		settings.attributeFlags = sf::ContextSettings::Core;
		settings.antialiasingLevel = coreSettings->GetAntiAliasing();

		this->window = new sf::Window(sf::VideoMode(coreSettings->GetWindowWidth(), coreSettings->GetWindowHeight(), 32),
			coreSettings->GetWindowTitle().c_str(),
			sf::Style::Titlebar | sf::Style::Close | windowResizable | windowFullscreen, settings);

		window->setVerticalSyncEnabled(coreSettings->GetVSync());

	}

	void FLK_SFML::PollEvents()
	{
		sf::Event windowEvent;

		while (this->window->pollEvent(windowEvent))
		{
			switch (windowEvent.type)
			{
			case sf::Event::Closed:
				window->close();

				break;
			}
		}

	}

	void FLK_SFML::SwapBuffers()
	{
		this->window->display();
	}

	void FLK_SFML::CleanUp()
	{
		this->window->close();
	}

	bool FLK_SFML::WindowIsOpen()
	{
		if (window->isOpen() == true)
		{
			return true;
		}
		else
		{
			return false;
		}


	}

	void FLK_SFML::CloseWindow()
	{
		window->close();
	}

}

#endif