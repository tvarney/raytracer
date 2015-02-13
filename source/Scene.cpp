
#include "Scene.hpp"

#include "Object.hpp"
#include "Ray.hpp"

using namespace ray;

Scene::Scene() { }
Scene::~Scene() { }

void Scene::add(Object &object) {
    mObjects.push_back(&object);
}

sdl::Color<double> project(const Ray &ray) {
    return sdl::Color<double>();
}
