//
// GraphicalAnimatedObject.hpp for NoName in /home/mjolnir
// 
// Made by Nicolas Cataldo
// Contact   <cataldo.nico@gmail.com>
// 
// Started on  Tue Dec 24 10:27:30 2013 Nicolas Cataldo
// Last update Wed Dec 25 21:18:47 2013 Nicolas Cataldo
//

#ifndef 		_GRAPHICALANIMATEDOBJECT_H_
#define 		_GRAPHICALANIMATEDOBJECT_H_

#include                <SFML/Graphics.hpp>

#include		"GraphicalObject.hpp"

using namespace         std;
using namespace         sf;

class GraphicalAnimatedObject : public GraphicalObject
{
public:
  GraphicalAnimatedObject(String name
			  , e_GobjectType type
			  ,int xInterval
			  ,int yInterval);
  virtual ~GraphicalAnimatedObject();

protected:
  int			_positionAnimation;
  int			_xInterval;
  int			_yInterval;
};

  
#endif /* _GRAPHICALANIMATEDOBJECT_H_ */
