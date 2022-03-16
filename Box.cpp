#include "Box.h"

void Box::setLength(int l)
{
  length = l;
}

void Box::setWidth(int w)
{
  width = w;
}

void Box::setHeight(int h)
{
  height = h;
}

int Box::getLength()
{
  return length;
}

int Box::getWidth()
{
  return width;
}
int Box::getHeight()
{
  return height;
}
int Box::calcVolume()
{
  int vol = length*width*height;
  return vol;
}

// Implement setters and getters

// Implemenet the calcVolume() unction
