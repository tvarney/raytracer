
#include "Ray.hpp"

using namespace ray;

Ray::Ray() : mOrigin(0,0,0), mDirection(0,0,1) { }
Ray::Ray(const geom::Point3d &origin, const geom::Vec3d &direction) :
    mOrigin(origin), mDirection(direction)
{ }
Ray::Ray(const Ray &source) :
    mOrigin(source.mOrigin), mDirection(source.mDirection)
{ }
Ray::~Ray() { }
