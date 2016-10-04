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
		sf::ContextSettings settings;
		settings.depthBits = coreSettings->GetDepthSize();
		settings.stencilBits = coreSettings->GetStencilSize();
		settings.majorVersion = coreSettings->GetOpenGLVersion().major;
		settings.minorVersion = coreSettings->GetOpenGLVersion().minor;
		settings.attributeFlags = sf::ContextSettings::Core;
		settings.antialiasingLevel = coreSettings->GetAntiAliasing();

		int windowResizable = 0;

		if (coreSettings->GetWindowResizable())
		{
			windowResizable = sf::Style::Resize;
		}

		this->window = new sf::Window(sf::VideoMode(coreSettings->GetWindowWidth(), coreSettings->GetWindowHeight(), 32),
			                          "SFML", sf::Style::Titlebar | sf::Style::Close | windowResizable, settings);
	}

	bool FLK_SFML::PollEvents()
	{
		sf::Event windowEvent;

		while (this->window->pollEvent(windowEvent))
		{
			switch (windowEvent.type)
			{
			case sf::Event::Closed:
				return false;

				break;
			}
		}

		return true;
	}

	void FLK_SFML::SwapBuffers()
	{
		this->window->display();
	}

	void FLK_SFML::CleanUp()
	{
		this->window->close();
	}

}

#endif