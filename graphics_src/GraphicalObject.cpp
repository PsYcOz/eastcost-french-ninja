#include 		"GraphicalObject.hpp"

GraphicalObject::GraphicalObject(String name, e_GobjectType type)
{
  String 		textureLink;
  String 		stringTypeObj;

  if(type == ITEM)
    stringTypeObj = "Items";
  else if(type == BUTTON)
    stringTypeObj = "Button";
  else if(type == SKILLBUTTON)
    stringTypeObj = "SkillsButton";
  else if(type == MENU)
    stringTypeObj = "Menu";
  else if(type == CHAR)
    stringTypeObj = "CharSheet";

  textureLink = "res/Sprite/" + stringTypeObj + "/" + name + ".png";

  if(!_texture.loadFromFile(textureLink))
    exit(0);

  _sprite.setTexture(_texture);

  
};

GraphicalObject::~GraphicalObject(){};

Sprite*			GraphicalObject::getSprite()
{
  return &_sprite;
};
