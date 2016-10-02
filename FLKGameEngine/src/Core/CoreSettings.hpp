#pragma once

#include <GL\glew.h>
#include "Foundations\Foundation.hpp"

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
		vec2<GLint> GetWindowSize();
		
		//returns width of app window
		GLint GetWindowWidth();
		
		//returns height of app window
		GLint GetWindowHeight();

		//sets size of window
		void SetWindowSize(GLint windowWidth, GLint windowHeight);
		
		//sets window width
		void SetWindowWidth(GLint windowWidth);
		
		void SetWindowHeight(GLint windowHeight);

		vec2<GLint> GetScaledWindowSize();
	
		GLint GetScaledWindowWidth();
		
		GLint GetScaledWindowHeight();

		void SetScaledWindowSize(GLint windowWidth, GLint windowHeight);
		
		void SetScaledWindowWidth(GLint windowWidth);
		
		void SetScaledWindowHeight(GLint windowHeight);

		
		//returns the amount of depths bits of the application window
		GLint GetDepthSize();

		/*
		sets the amount of depth bits for the application window
		*/
		void SetDepthSize(GLint depthSize);

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
	};
}