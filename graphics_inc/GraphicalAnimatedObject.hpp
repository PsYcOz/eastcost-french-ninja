//
// GraphicalAnimatedObject.hpp for NoName in /home/mjolnir
// 
// Made by Nicolas Cataldo
// Contact   <cataldo.nico@gmail.com>
// 
// Started on  Tue Dec 24 10:27:30 2013 Nicolas Cataldo
// Last update Thu Dec 26 11:50:56 2013 Nicolas Cataldo
//

#ifndef 			_GRAPHICALANIMATEDOBJECT_H_
#define 			_GRAPHICALANIMATEDOBJECT_H_

#include                	<SFML/Graphics.hpp>

#include			"GraphicalObject.hpp"

using namespace         	std;
using namespace         	sf;

enum movementDirection{RIGHT, LEFT, UP, DOWN};

typedef enum movementDirection	e_mvtDirection;

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
