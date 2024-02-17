#include "base-function.hpp"
#include <cmath>
#include "shape.hpp"

namespace piyavkin
{
  void Shape::scale(double k)
  {
    if (k < 0)
    {
      throw std::logic_error("Сoefficient less than 0");
    }
    scaleFigure(k);
  }
  double getLength(const point_t& p1, const point_t& p2)
  {
    return std::sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
  }
  point_t& addShift(point_t& p, double dx, double dy)
  {
    p.x += dx;
    p.y += dy;
    return p;
  }
  point_t& scalePoint(point_t& p, const point_t& pos, double k)
  {
    p.x = k * (p.x - pos.x) + pos.x;
    p.y = k * (p.y - pos.y) + pos.y;
    return p;
  }
}