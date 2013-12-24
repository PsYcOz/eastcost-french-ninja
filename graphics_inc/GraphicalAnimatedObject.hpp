//
// GraphicalAnimatedObject.hpp for NoName in /home/mjolnir
// 
// Made by Nicolas Cataldo
// Contact   <cataldo.nico@gmail.com>
// 
// Started on  Tue Dec 24 10:27:30 2013 Nicolas Cataldo
// Last update Tue Dec 24 10:40:14 2013 Nicolas Cataldo
//

#ifndef 		_GRAPHICALANIMATEDOBJECT_H_
#define 		_GRAPHICALANIMATEDOBJECT_H_

#include                <iostream>
#include                <string>
#include                <SFML/Graphics.hpp>

#include		"GraphicalObject.hpp"

using namespace         std;
using namespace         sf;

class GraphicalAnimatedObject : public GraphicalObject
{
public:
  GraphicalAnimatedObject();
  virtual ~GraphicalAnimatedObject();

protected:
  int			positionAnimation;
  int			xInterval;
  int			yInterval;
};

  
#endif /* _GRAPHICALANIMATEDOBJECT_H_ */
