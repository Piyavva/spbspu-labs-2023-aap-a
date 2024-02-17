#ifndef PARALLELOGRAM_HPP
#define PARALLELOGRAM_HPP

#include "shape.hpp"
#include "base-functions.hpp"

namespace lebedev
{
  class Parallelogram: public Shape
  {
  public:
    Parallelogram(const point_t & p1, const point_t & p2, const point_t & p3);
    virtual ~Parallelogram() = default;
    virtual double getArea() const;
    virtual rectangle_t getFrameRect() const;
    virtual void move(const point_t & p);
    virtual void move(double dx, double dy);
    virtual void scale(double ratio);
  private:
    point_t p1_;
    point_t p2_;
    point_t p3_;
  };
}

#endif
