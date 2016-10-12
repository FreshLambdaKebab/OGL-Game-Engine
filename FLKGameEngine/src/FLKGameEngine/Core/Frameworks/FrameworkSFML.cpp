#include "FrameworkSFML.hpp"

#ifdef FLK__SFML

#include <iostream>

namespace FLKGameEngine
{

	FrameworkSFML::FrameworkSFML()
	{

	}

	void FrameworkSFML::Init()
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

	void FrameworkSFML::PollEvents()
	{
		sf::Event windowEvent;

		while (this->window->pollEvent(windowEvent))
		{
			if (windowEvent.type == sf::Event::TextEntered)
			{
				if(windowEvent.text.unicode < 128)
					std::cout << "ASCII character typed: " << static_cast<char>(windowEvent.text.unicode) << std::endl;
			}

			switch (windowEvent.type)
			{
			case sf::Event::Closed:
				window->close();

				break;

			case sf::Event::KeyPressed:
				std::cout << windowEvent.text.unicode << std::endl;

				switch (windowEvent.key.code)
				{
				case sf::Keyboard::A:

					break;

				case sf::Keyboard::B:

					break;
				}
				break;
			}
		}

	}

	void FrameworkSFML::SwapBuffers()
	{
		this->window->display();
	}

	void FrameworkSFML::CleanUp()
	{
		this->window->close();
	}

	bool FrameworkSFML::WindowIsOpen()const
	{
		return window->isOpen();
	}

	void FrameworkSFML::CloseWindow()
	{
		window->close();
	}

}

#endif
