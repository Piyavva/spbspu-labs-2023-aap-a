#include <iostream>

struct point_t
{
  double x;
  double y;
};

struct rectangle_t
{
  double width;
  double heigth;
  point_t pos;
};

class Shape
{
  public:
    virtual double getArea() = 0;
    virtual rectangle_t getFrameRect() = 0;
    virtual point_t move() = 0;
    virtual void scale() = 0;
};

class Rectangle: public Shape
{
  public:
    Rectangle(point_t p1, point_t p2):
      p1_(p1),
      p2_(p2)
    {}
    virtual double getArea()
    {
      return std::abs((p1_.x - p2_.x) * (p1_.y - p2_.y));
    }
    virtual rectangle_t getFrameRect()
    {
      return {std::abs(p1_.x - p2_.x), std::abs(p1_.y - p2_.y), pos_};
    }
    virtual point_t move(point_t smesh)
    {
      pos_.x += smesh.x;
      pos_.y += smesh.y;
      return pos;
    }
    virtual void scale(double k)
    {
      p1_.x = k * (std::abs(pos_.x) - p1_.x);
      p2_.x = k * (std::abs(pos_.x) - p2_.x);
      p1_.y = k * (std::abs(pos_.y) - p1_.y);
      p2_.y = k * (std::abs(pos_.y) - p2_.y);
    }
  private:
    point_t p1_;
    point_t p2_;
    point_t pos_ = {(p1_.x + p2_.x) / 2, (p1_.y + p2_.y) / 2};
};

int main()
{
}
