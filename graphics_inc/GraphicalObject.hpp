//
// GraphicalObject.hpp for NoName in /home/mjolnir
// 
// Made by Nicolas Cataldo
// Contact   <cataldo.nico@gmail.com>
// 
// Started on  Tue Dec 24 10:27:42 2013 Nicolas Cataldo
// Last update Wed Dec 25 21:41:11 2013 Nicolas Cataldo
//


#ifndef 		_GRAPHICALOBJECT_H_
#define 		_GRAPHICALOBJECT_H_

#include		<iostream>
#include		<string>
#include		<SFML/Graphics.hpp>

using namespace std;
using namespace sf;

enum GobjectType { 	ITEM
		   	,BUTTON
		   	,SKILLBUTTON
		   	,MENU 
			,CHAR
};
typedef enum GobjectType e_GobjectType;

class GraphicalObject
{
public:
  GraphicalObject(String name, e_GobjectType type);
  virtual ~GraphicalObject();

  Sprite*		getSprite();
protected:
  String		_name;
  Texture		_texture;
  Sprite		_sprite;
};

#endif /* _GRAPHICALOBJECT_H_ */
