#pragma once

#ifdef FLK__SDL
	#include <SDL\SDL.h>
#elif defined(FLK__SFML)
	#include <SFML\Window.hpp>
#elif defined(FLK__GLFW)
	#include <GLFW\glfw3.h>
#endif

#ifdef FLK__SDL

// KEYS ON THE KEYBOARD
enum KEYS
{
	A = SDLK_a,
	B = SDLK_b,
	C = SDLK_c,
	D = SDLK_d,
	E = SDLK_e,
	F = SDLK_f,
	G = SDLK_g,
	H = SDLK_h,
	I = SDLK_i,
	J = SDLK_j,
	K = SDLK_k,
	L = SDLK_l,
	M = SDLK_m,
	N = SDLK_n,
	O = SDLK_o,
	P = SDLK_p,
	Q = SDLK_q,
	R = SDLK_r,
	S = SDLK_s,
	T = SDLK_t,
	U = SDLK_u,
	V = SDLK_v,
	W = SDLK_w,
	X = SDLK_x,
	Y = SDLK_y,
	Z = SDLK_z,
	Num0 = SDLK_0,
	Num1 = SDLK_1,
	Num2 = SDLK_2,
	Num3 = SDLK_3,
	Num4 = SDLK_4,
	Num5 = SDLK_5,
	Num6 = SDLK_6,
	Num7 = SDLK_7,
	Num8 = SDLK_8,
	Num9 = SDLK_9,
	Escape = SDLK_ESCAPE,
	LControl = SDLK_LCTRL,
	LShift = SDLK_LSHIFT,
	LAlt = SDLK_LALT,
	LSystem = SDLK_LGUI,
	RControl = SDLK_RCTRL,
	RShift = SDLK_RSHIFT,
	RAlt = SDLK_RALT,
	RSystem = SDLK_RGUI,
	Menu = SDLK_MENU,
	LBracket = SDLK_LEFTBRACKET,
	RBracket = SDLK_RIGHTBRACKET,
	SemiColon = SDLK_SEMICOLON,
	Comma = SDLK_COMMA,
	Period = SDLK_PERIOD,
	Quote = SDLK_QUOTE,
	Slash = SDLK_SLASH,
	BackSlash = SDLK_BACKSLASH,
	Tilde = SDLK_BACKQUOTE,
	Equal = SDLK_EQUALS,
	Dash = SDLK_MINUS,
	Space = SDLK_SPACE,
	Return = SDLK_RETURN,
	BackSpace = SDLK_BACKSPACE,
	Tab = SDLK_TAB,
	PageUp = SDLK_PAGEUP,
	PageDown = SDLK_PAGEDOWN,
	End = SDLK_END,
	Home = SDLK_HOME,
	Insert = SDLK_INSERT,
	Delete = SDLK_DELETE,
	Add = SDLK_KP_PLUS,
	Subtract = SDLK_KP_MINUS,
	Multiply = SDLK_KP_MULTIPLY,
	Divide = SDLK_KP_DIVIDE,
	Left = SDLK_KP_4,
	Right = SDLK_KP_6,
	Up = SDLK_KP_8,
	Down = SDLK_KP_2,
	Numpad0 = SDLK_KP_0,
	Numpad1 = SDLK_KP_1,
	Numpad2 = SDLK_KP_2,
	Numpad3 = SDLK_KP_3,
	Numpad4 = SDLK_KP_4,
	Numpad5 = SDLK_KP_5,
	Numpad6 = SDLK_KP_6,
	Numpad7 = SDLK_KP_7,
	Numpad8 = SDLK_KP_8,
	Numpad9 = SDLK_KP_9,
	F1 = SDLK_F1,
	F2 = SDLK_F2,
	F3 = SDLK_F3,
	F4 = SDLK_F4,
	F5 = SDLK_F5,
	F6 = SDLK_F6,
	F7 = SDLK_F7,
	F8 = SDLK_F8,
	F9 = SDLK_F9,
	F10 = SDLK_F10,
	F11 = SDLK_F11,
	F12 = SDLK_F12,
	F13 = SDLK_F13,
	F14 = SDLK_F14,
	F15 = SDLK_F15,
	Pause = SDLK_PAUSE
};

#elif defined(FLK__SFML)

enum KEYS
{
	A = sf::Keyboard::A,
	B = sf::Keyboard::B,
	C = sf::Keyboard::C,
	D = sf::Keyboard::D,
	E = sf::Keyboard::E,
	F = sf::Keyboard::F,
	G = sf::Keyboard::G,
	H = sf::Keyboard::H,
	I = sf::Keyboard::I,
	J = sf::Keyboard::J,
	K = sf::Keyboard::K,
	L = sf::Keyboard::L,
	M = sf::Keyboard::M,
	N = sf::Keyboard::N,
	O = sf::Keyboard::O,
	P = sf::Keyboard::P,
	Q = sf::Keyboard::Q,
	R = sf::Keyboard::R,
	S = sf::Keyboard::S,
	T = sf::Keyboard::T,
	U = sf::Keyboard::U,
	V = sf::Keyboard::V,
	W = sf::Keyboard::W,
	X = sf::Keyboard::X,
	Y = sf::Keyboard::Y,
	Z = sf::Keyboard::Z,
	Num0 = sf::Keyboard::Num0,
	Num1 = sf::Keyboard::Num1,
	Num2 = sf::Keyboard::Num2,
	Num3 = sf::Keyboard::Num3,
	Num4 = sf::Keyboard::Num4,
	Num5 = sf::Keyboard::Num5,
	Num6 = sf::Keyboard::Num6,
	Num7 = sf::Keyboard::Num7,
	Num8 = sf::Keyboard::Num8,
	Num9 = sf::Keyboard::Num9,
	Escape = sf::Keyboard::Escape,
	LControl = sf::Keyboard::LControl,
	LShift = sf::Keyboard::LShift,
	LAlt = sf::Keyboard::LAlt,
	LSystem = sf::Keyboard::LSystem,
	RControl = sf::Keyboard::RControl,
	RShift = sf::Keyboard::RShift,
	RAlt = sf::Keyboard::RAlt,
	RSystem = sf::Keyboard::RSystem,
	Menu = sf::Keyboard::Menu,
	LBracket = sf::Keyboard::LBracket,
	RBracket = sf::Keyboard::RBracket,
	SemiColon = sf::Keyboard::SemiColon,
	Comma = sf::Keyboard::Comma,
	Period = sf::Keyboard::Period,
	Quote = sf::Keyboard::Quote,
	Slash = sf::Keyboard::Slash,
	BackSlash = sf::Keyboard::BackSlash,
	Tilde = sf::Keyboard::Tilde,
	Equal = sf::Keyboard::Equal,
	Dash = sf::Keyboard::Dash,
	Space = sf::Keyboard::Space,
	Return = sf::Keyboard::Return,
	BackSpace = sf::Keyboard::BackSpace,
	Tab = sf::Keyboard::Tab,
	PageUp = sf::Keyboard::PageUp,
	PageDown = sf::Keyboard::PageDown,
	End = sf::Keyboard::End,
	Home = sf::Keyboard::Home,
	Insert = sf::Keyboard::Insert,
	Delete = sf::Keyboard::Delete,
	Add = sf::Keyboard::Add,
	Subtract = sf::Keyboard::Subtract,
	Multiply = sf::Keyboard::Multiply,
	Divide = sf::Keyboard::Divide,
	Left = sf::Keyboard::Left,
	Right = sf::Keyboard::Right,
	Up = sf::Keyboard::Up,
	Down = sf::Keyboard::Down,
	Numpad0 = sf::Keyboard::Numpad0,
	Numpad1 = sf::Keyboard::Numpad1,
	Numpad2 = sf::Keyboard::Numpad2,
	Numpad3 = sf::Keyboard::Numpad3,
	Numpad4 = sf::Keyboard::Numpad4,
	Numpad5 = sf::Keyboard::Numpad5,
	Numpad6 = sf::Keyboard::Numpad6,
	Numpad7 = sf::Keyboard::Numpad7,
	Numpad8 = sf::Keyboard::Numpad8,
	Numpad9 = sf::Keyboard::Numpad9,
	F1 = sf::Keyboard::F1,
	F2 = sf::Keyboard::F2,
	F3 = sf::Keyboard::F3,
	F4 = sf::Keyboard::F4,
	F5 = sf::Keyboard::F5,
	F6 = sf::Keyboard::F6,
	F7 = sf::Keyboard::F7,
	F8 = sf::Keyboard::F8,
	F9 = sf::Keyboard::F9,
	F10 = sf::Keyboard::F10,
	F11 = sf::Keyboard::F11,
	F12 = sf::Keyboard::F12,
	F13 = sf::Keyboard::F13,
	F14 = sf::Keyboard::F14,
	F15 = sf::Keyboard::F15,
	Pause = sf::Keyboard::Pause
};

#elif defined(FLK__GLFW)

enum KEYS
{
	A = GLFW_KEY_A,
	B = GLFW_KEY_B,
	C = GLFW_KEY_C,
	D = GLFW_KEY_D,
	E = GLFW_KEY_E,
	F = GLFW_KEY_F,
	G = GLFW_KEY_G,
	H = GLFW_KEY_H,
	I = GLFW_KEY_I,
	J = GLFW_KEY_J,
	K = GLFW_KEY_K,
	L = GLFW_KEY_L,
	M = GLFW_KEY_M,
	N = GLFW_KEY_N,
	O = GLFW_KEY_O,
	P = GLFW_KEY_P,
	Q = GLFW_KEY_Q,
	R = GLFW_KEY_R,
	S = GLFW_KEY_S,
	T = GLFW_KEY_T,
	U = GLFW_KEY_U,
	V = GLFW_KEY_V,
	W = GLFW_KEY_W,
	X = GLFW_KEY_X,
	Y = GLFW_KEY_Y,
	Z = GLFW_KEY_Z,
	Num0 = GLFW_KEY_0,
	Num1 = GLFW_KEY_1,
	Num2 = GLFW_KEY_2,
	Num3 = GLFW_KEY_3,
	Num4 = GLFW_KEY_4,
	Num5 = GLFW_KEY_5,
	Num6 = GLFW_KEY_6,
	Num7 = GLFW_KEY_7,
	Num8 = GLFW_KEY_8,
	Num9 = GLFW_KEY_9,
	Escape = GLFW_KEY_ESCAPE,
	LControl = GLFW_KEY_LEFT_CONTROL,
	LShift = GLFW_KEY_LEFT_SHIFT,
	LAlt = GLFW_KEY_LEFT_ALT,
	LSystem = GLFW_KEY_LEFT_SUPER,
	RControl = GLFW_KEY_RIGHT_CONTROL,
	RShift = GLFW_KEY_RIGHT_SHIFT,
	RAlt = GLFW_KEY_RIGHT_ALT,
	RSystem = GLFW_KEY_RIGHT_SUPER,
	Menu = GLFW_KEY_MENU,
	LBracket = GLFW_KEY_LEFT_BRACKET,
	RBracket = GLFW_KEY_RIGHT_BRACKET,
	SemiColon = GLFW_KEY_SEMICOLON,
	Comma = GLFW_KEY_COMMA,
	Period = GLFW_KEY_PERIOD,
	Quote = GLFW_KEY_APOSTROPHE,
	Slash = GLFW_KEY_SLASH,
	BackSlash = GLFW_KEY_BACKSLASH,
	Tilde = GLFW_KEY_WORLD_1,
	Equal = GLFW_KEY_EQUAL,
	Dash = GLFW_KEY_MINUS,
	Space = GLFW_KEY_SPACE,
	Return = GLFW_KEY_ENTER,
	BackSpace = GLFW_KEY_BACKSPACE,
	Tab = GLFW_KEY_TAB,
	PageUp = GLFW_KEY_PAGE_UP,
	PageDown = GLFW_KEY_PAGE_DOWN,
	End = GLFW_KEY_END,
	Home = GLFW_KEY_HOME,
	Insert = GLFW_KEY_INSERT,
	Delete = GLFW_KEY_DELETE,
	Add = GLFW_KEY_KP_ADD,
	Subtract = GLFW_KEY_KP_SUBTRACT,
	Multiply = GLFW_KEY_KP_MULTIPLY,
	Divide = GLFW_KEY_KP_DIVIDE,
	Left = GLFW_KEY_KP_4,
	Right = GLFW_KEY_KP_6,
	Up = GLFW_KEY_KP_8,
	Down = GLFW_KEY_KP_2,
	Numpad0 = GLFW_KEY_KP_0,
	Numpad1 = GLFW_KEY_KP_1,
	Numpad2 = GLFW_KEY_KP_2,
	Numpad3 = GLFW_KEY_KP_3,
	Numpad4 = GLFW_KEY_KP_4,
	Numpad5 = GLFW_KEY_KP_5,
	Numpad6 = GLFW_KEY_KP_6,
	Numpad7 = GLFW_KEY_KP_7,
	Numpad8 = GLFW_KEY_KP_8,
	Numpad9 = GLFW_KEY_KP_9,
	F1 = GLFW_KEY_F1,
	F2 = GLFW_KEY_F2,
	F3 = GLFW_KEY_F3,
	F4 = GLFW_KEY_F4,
	F5 = GLFW_KEY_F5,
	F6 = GLFW_KEY_F6,
	F7 = GLFW_KEY_F7,
	F8 = GLFW_KEY_F8,
	F9 = GLFW_KEY_F9,
	F10 = GLFW_KEY_F10,
	F11 = GLFW_KEY_F11,
	F12 = GLFW_KEY_F12,
	F13 = GLFW_KEY_F13,
	F14 = GLFW_KEY_F14,
	F15 = GLFW_KEY_F15,
	Pause = GLFW_KEY_PAUSE
};
#endif

enum KEYSTATUS
{
	NOT_PRESSED = 990,
	NO_STATE = 990,
	PRESSED = 991,
	RELEASED = 992,
};