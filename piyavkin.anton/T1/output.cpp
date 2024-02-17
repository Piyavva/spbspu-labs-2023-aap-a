#include "output.hpp"

namespace piyavkin
{
  void output(std::ostream& out, const CompositeShape& shapes)
  {
    if (shapes.empty())
    {
      throw std::logic_error("No figures");
    }
//    double sum = 0;
//    for (size_t i = 0; i < shapeCount; ++i)
//    {
//      sum += shapes[i]->getArea();
//    }
    out << shapes.getArea();
    for (size_t i = 0; i < shapes.size(); ++i)
    {
      out << " ";
      out << shapes[i].getFrameRect().pos.x - shapes[i].getFrameRect().width / 2 << " ";
      out << shapes[i].getFrameRect().pos.y - shapes[i].getFrameRect().height / 2 << " ";
      out << shapes[i].getFrameRect().pos.x + shapes[i].getFrameRect().width / 2 << " ";
      out << shapes[i].getFrameRect().pos.y + shapes[i].getFrameRect().height / 2;
    }
  }
}