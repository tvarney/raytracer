
#ifndef RAYTRACER_SCENE_HPP
#define RAYTRACER_SCENE_HPP

#include <vector>
#include <SDLWrap/Color.hpp>

namespace ray {
    class Object;
    class Ray;
    
    class Scene {
    public:
        Scene();
        ~Scene();
        
        void add(Object &object);
        sdl::Color<double> project(const Ray &ray) const;
    protected:
        std::vector<Object *> mObjects;
    };
}

#endif
