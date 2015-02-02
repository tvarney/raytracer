
#include "RaytracerApp.hpp"

#include "SDLWrap/Window.hpp"

using namespace ray;

RaytracerApp::RaytracerApp() :
    sdl::Application("Raytracer")
{ }
RaytracerApp::~RaytracerApp() { }

void RaytracerApp::start() {
    sdl::Window::Create("Raytracer", 640, 400);
}

AppMain(RaytracerApp);
