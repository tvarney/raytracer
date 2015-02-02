
#ifndef RAYTRACER_RAYTRACER_APP_HPP
#define RAYTRACER_RAYTRACER_APP_HPP

#include <SDLWrap/Application.hpp>

namespace ray {
    class RaytracerApp : public sdl::Application {
    public:
        RaytracerApp();
        virtual ~RaytracerApp();
        
        virtual void start();
    };
}

#endif
