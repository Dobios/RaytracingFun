#pragma once

#include "vec3f.h"
#include "material.h"

class Intersection {
public:
    Vec3f point;            //The point at which the intersection happened 
    Vec3f normal;           //The normal of the intersection
    Material material;      //The material of the intersected point
    float intersection_t;   //At which point along the ray the intersection happened
    bool intersected;       //Whether the intersection is valid or not

    Intersection() = delete;

    //Constructor
    Intersection(Vec3f const& point, Vec3f const& normal, Material const& material, float intersection_t, bool intersected);

    //Copy constructor
    Intersection(Intersection const& that);
};