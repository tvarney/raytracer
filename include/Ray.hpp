
#ifndef RAYTRACER_RAY_HPP
#define RAYTRACER_RAY_HPP

#include <geom/Point3.hpp>
#include <geom/Vector3.hpp>

namespace ray {
    class Ray {
    public:
        Ray();
        Ray(const geom::Point3d &origin, const geom::Vec3d &direction);
        Ray(const Ray &source);
        ~Ray();
        
    private:
        geom::Point3d mOrigin;
        geom::Vec3d mDirection;
    };
}

#endif
