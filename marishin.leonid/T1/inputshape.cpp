#include "inputshape.hpp"

marishin::Shape** marishin::inputShape(std::istream& in, size_t& shapeCount)
{
  const size_t NUM_SHAPES = 3;
  const std::string shapeNames[NUM_SHAPES] = { "RECTANGLE", "TRIANGLE", "RING" };
  const size_t shapeParametrsCount[NUM_SHAPES] = { 4, 6, 4};

  Shape** shapeArray = nullptr;
  char symbol = 0;

  while (true)
  {
    std::string name;
    in >> name;

    if (name == "SCALE")
    {
      break;
    }

    bool isValidShape = false;
    for (size_t i = 0; i < NUM_SHAPES; ++i)
    {
      if (name == shapeNames[i])
      {

      }
    }
  }
}
