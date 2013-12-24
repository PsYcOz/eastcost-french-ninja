//
// GraphicalAnimatedObject.cpp for NoName in /home/mjolnir
// 
// Made by Nicolas Cataldo
// Contact   <cataldo.nico@gmail.com>
// 
// Started on  Tue Dec 24 10:28:16 2013 Nicolas Cataldo
// Last update Tue Dec 24 10:42:41 2013 Nicolas Cataldo
//

#include		"GraphicalAnimatedObject.hpp"

GraphicalAnimatedObject::GraphicalAnimatedObject(String name
						 ,e_GobjectType type) : GraphicalObject(name, type)
{
  positionAnimation = 0;
  xInterval = 0;
  yInterval = 0;
};


GraphicalAnimatedObject::~GraphicalAnimatedObject(){};
