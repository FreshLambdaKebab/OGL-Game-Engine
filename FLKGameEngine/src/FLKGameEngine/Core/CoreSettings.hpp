#pragma once

#include <GL\glew.h>
#include "Foundations\Foundation.hpp"

#include <string>

namespace FLKGameEngine
{
	class CoreSettings
	{
	public:
		static CoreSettings* getInstance()
		{
			if (!sInstance)
			{
				sInstance = new CoreSettings;
			}
			return sInstance;
		}

		//returns window size vector
		const vec2<GLint>& GetWindowSize()const;
		
		//returns width of app window
		GLint GetWindowWidth()const;
		
		//returns height of app window
		GLint GetWindowHeight()const;

		//sets size of window
		void SetWindowSize(GLint windowWidth, GLint windowHeight);
		
		//sets window width
		void SetWindowWidth(GLint windowWidth);
		
		void SetWindowHeight(GLint windowHeight);

		const vec2<GLint>& GetScaledWindowSize()const;
	
		GLint GetScaledWindowWidth()const;
		
		GLint GetScaledWindowHeight()const;

		void SetScaledWindowSize(GLint windowWidth, GLint windowHeight);
		
		void SetScaledWindowWidth(GLint windowWidth);
		
		void SetScaledWindowHeight(GLint windowHeight);

		//returns the amount of depths bits of the application window
		GLint GetDepthSize()const;

		//sets the amount of depth bits for the application window
		void SetDepthSize(GLint depthSize);

		//returns the amount of stencil bits of the application window
		GLint GetStencilSize()const;

		//sets the amount of depth stencil for the application window
		void SetStencilSize(GLint stencilSize);

		//get the opengl major and minor version
		const vec2<GLint>& GetOpenGLVersion()const;

		void SetOpenGLVersion(GLint major, GLint minor);

		//check if the window is resizable
		GLboolean GetWindowResizable()const;

		void SetWindowResizable(GLboolean isWindowResizable);

		//check if window is fullscreen
		GLboolean GetWindowFullscreen()const;

		void SetWindowFullscreen(GLboolean isWindowFullscreen);

		//get anti aliasing amount
		GLint GetAntiAliasing()const;

		void SetAntiAliasing(GLint AA);

		//get the window title
		std::string GetWindowTitle()const;

		void SetWindowTitle(std::string windowTitle);

		//check if vsync is enabled
		GLboolean GetVSync()const;

		void SetVSync(GLboolean isVSync);

	private:
		CoreSettings();

		static CoreSettings *sInstance;

		//CORE ENGINE PROPERTIES

		// the size of the application window
		vec2<GLint> windowSize;
		// the scaled size of the application window for high density displays such as Retina Macs
		vec2<GLint> scaledWindowSize;

		// depth size
		GLint depthSize;
		//stencil size
		GLint stencilSize;

		//opengl version(major or minor)
		vec2<GLint>openGLVersion;

		//boolean "is window's"
		GLboolean isWindowResizable;

		GLboolean isWindowFullscreen;

		//amount AA
		GLint antiAliasing;

		//the widnow title
		std::string windowTitle;

		GLboolean isVSync;

	};
}