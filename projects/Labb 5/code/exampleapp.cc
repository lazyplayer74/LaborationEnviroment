//------------------------------------------------------------------------------
// exampleapp.cc
// (C) 2015-2018 Individual contributors, see AUTHORS file
//------------------------------------------------------------------------------
#include "config.h"
#include "exampleapp.h"
#include <cstring>
//#include <Windows.h>

const GLchar* vs =
"#version 430\n"
"layout(location=0) in vec3 aPos;\n"
"layout(location=1) in vec4 aColor;\n"
"layout(location=2) in vec2 aTexCoord;\n"
"layout(location=0) out vec4 ourColor;\n"
"layout(location=1) out vec2 TexCoord;\n"
"void main()\n"
"{\n"
"	gl_Position = vec4(aPos, 1.0);\n"
"	ourColor = aColor;\n"
"	TexCoord = aTexCoord;\n"
"}\n";

const GLchar* ps =
"#version 430\n"
"layout(location=0) in vec4 ourColor;\n"
"layout(location=1) in vec2 TexCoord;\n"
"layout(location=0) out vec4 PixelColor;\n"
"uniform sampler2D ourTexture;\n"
"void main()\n"
"{\n"
"PixelColor = texture(ourTexture, TexCoord);\n"
"}\n";

using namespace Display;
namespace Example
{

//------------------------------------------------------------------------------
/**
*/
ExampleApp::ExampleApp()
{
	// empty
}

//------------------------------------------------------------------------------
/**
*/
ExampleApp::~ExampleApp()
{
	// empty
}

//------------------------------------------------------------------------------
/**
*/
bool
ExampleApp::Open()
{
	App::Open();
	this->window = new Display::Window;
	window->SetKeyPressFunction([this](int32, int32, int32, int32)
	{
		//this->window->Close();
	});

	if (this->window->Open())
	{
		// set clear color to gray
		glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
		return true;
	}
	return false;
}

//------------------------------------------------------------------------------
/**
*/
void
ExampleApp::Run()
{
	GraphicsNode box;
	box.setup();

	bool firstTime = true;
	float mouseX, mouseY;
	while (this->window->IsOpen())
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		this->window->Update();
		
		// do stuff
		box.draw();

		this->window->SwapBuffers();
	}
}

}