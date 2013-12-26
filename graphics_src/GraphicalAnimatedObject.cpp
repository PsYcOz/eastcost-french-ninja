//
// GraphicalAnimatedObject.cpp for NoName in /home/mjolnir
// 
// Made by Nicolas Cataldo
// Contact   <cataldo.nico@gmail.com>
// 
// Started on  Tue Dec 24 10:28:16 2013 Nicolas Cataldo
// Last update Wed Dec 25 20:50:44 2013 Nicolas Cataldo
//

#include		"GraphicalAnimatedObject.hpp"

GraphicalAnimatedObject::GraphicalAnimatedObject(String name
						 ,e_GobjectType type
						 ,int xInterval
						 ,int yInterval) : GraphicalObject(name, type)
{
  _positionAnimation = 0;
  _xInterval = xInterval;
  _yInterval = yInterval;
};


GraphicalAnimatedObject::~GraphicalAnimatedObject(){};
