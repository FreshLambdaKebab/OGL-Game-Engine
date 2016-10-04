#include "CoreSettings.hpp"

#define FLK_DEF_WINDOW_WIDTH 800
#define FLK_DEF_WINDOW_HEIGHT 600
#define FLK_DEF_WINDOW_DEPTH_SIZE 24
#define FLK_DEF_WINDOW_STENCIL_SIZE 8
#define FLK_DEF_OPENGL_MAJOR_VERSION 3
#define FLK_DEF_OPENGL_MINOR_VERSION 3
#define FLK_DEF_IS_WINDOW_RESIZABLE GL_FALSE
#define FLK_DEF_ANTI_ALIASING 0

namespace FLKGameEngine
{
	CoreSettings *CoreSettings::sInstance = nullptr;

	CoreSettings::CoreSettings()
	{
		// set initial values
		this->windowSize = vec2<GLint>{ FLK_DEF_WINDOW_WIDTH, FLK_DEF_WINDOW_HEIGHT };
		this->scaledWindowSize = vec2<GLint>{ FLK_DEF_WINDOW_WIDTH, FLK_DEF_WINDOW_HEIGHT };

		this->depthSize = FLK_DEF_WINDOW_DEPTH_SIZE;
		this->stencilSize = FLK_DEF_WINDOW_STENCIL_SIZE;

		this->openGLVersion.major = FLK_DEF_OPENGL_MAJOR_VERSION;
		this->openGLVersion.minor = FLK_DEF_OPENGL_MINOR_VERSION;

		this->isWindowResizable = FLK_DEF_IS_WINDOW_RESIZABLE;

		this->antiAliasing = FLK_DEF_ANTI_ALIASING;

	}

	//GETTERS AND SETTERS
	const vec2<GLint>& CoreSettings::GetWindowSize()const
	{
		return this->windowSize;
	}

	GLint CoreSettings::GetWindowWidth()const 
	{
		return this->windowSize.width;
	}

	GLint CoreSettings::GetWindowHeight()const
	{
		return this->windowSize.height;
	}

	void CoreSettings::SetWindowSize(GLint windowWidth, GLint windowHeight)
	{
		this->windowSize = vec2<GLint>{ windowWidth, windowHeight };
	}

	void CoreSettings::SetWindowWidth(GLint windowWidth)
	{
		this->windowSize.width = windowWidth;
	}

	void CoreSettings::SetWindowHeight(GLint windowHeight)
	{
		this->windowSize.height = windowHeight;
	}

	const vec2<GLint>& CoreSettings::GetScaledWindowSize() const
	{
		return this->scaledWindowSize;
	}

	GLint CoreSettings::GetScaledWindowWidth() const
	{
		return this->scaledWindowSize.width;
	}

	GLint CoreSettings::GetScaledWindowHeight() const
	{
		return this->scaledWindowSize.height;
	}

	void CoreSettings::SetScaledWindowSize(GLint windowWidth, GLint windowHeight)
	{
		this->scaledWindowSize = vec2<GLint>{ windowWidth, windowHeight };
	}

	void CoreSettings::SetScaledWindowWidth(GLint windowWidth)
	{
		this->scaledWindowSize.width = windowWidth;
	}

	void CoreSettings::SetScaledWindowHeight(GLint windowHeight)
	{
		this->scaledWindowSize.height = windowHeight;
	}
	
	//start depth size getters and setters//
	GLint CoreSettings::GetDepthSize()const
	{
		return this->depthSize;
	}

	void CoreSettings::SetDepthSize(GLint depthSize)
	{
		this->depthSize = depthSize;
	}

	//start stencil size getters and setters//
	GLint CoreSettings::GetStencilSize()const
	{
		return this->stencilSize;
	}

	void CoreSettings::SetStencilSize(GLint stencilSize)
	{
		this->stencilSize = stencilSize;
	}

	//start opengl version getters and setters//
	const vec2<GLint>& CoreSettings::GetOpenGLVersion()const
	{
		return this->openGLVersion;
	}

	void CoreSettings::SetOpenGLVersion(GLint major,GLint minor)
	{
		this->openGLVersion.major = major;
		this->openGLVersion.minor = minor;
	}

	//start window resizable getters and setters
	GLboolean CoreSettings::GetWindowResizable() const
	{
		return this->isWindowResizable;
	}

	void CoreSettings::SetWindowResizable(GLboolean isWindowResizable)
	{
		this->isWindowResizable = isWindowResizable;
	}

	//start AA getters and setters
	GLint CoreSettings::GetAntiAliasing() const
	{
		return this->antiAliasing;
	}

	void CoreSettings::SetAntiAliasing(GLint AA)
	{
		antiAliasing = AA;
	}


}
