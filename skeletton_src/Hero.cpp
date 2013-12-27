//
// Hero.cpp for noName in /home/mjolnir
// 
// Made by Nicolas Cataldo
// Contact   <cataldo.nico@gmail.com>
// 
// Started on  Wed Dec 25 20:03:26 2013 Nicolas Cataldo
// Last update Thu Dec 26 12:46:11 2013 Nicolas Cataldo
//
#include		"Hero.hpp"

Hero::Hero() : GraphicalAnimatedObject("Hero", CHAR, 71, 61)
{
  _hp = 150;
  _kakari = 50;
  _kendo = 100;
  _kenji = 110;

  _agi = 5;
  _str = 5;
  _int = 5;

  _agilityStat= _agi*2;
  _magicStat = _int*2;
  _attackStat = _str*2;
};

Hero::~Hero(){};

void 			Hero::moveHero(e_mvtDirection dir)
{
  _positionAnimation++;

  if(_positionAnimation == 9)
    {
      _positionAnimation = 0;
      _xInterval = 0;
    }

  if(_positionAnimation%2 == 0)
    {
      _xInterval += 71;
      if(dir == RIGHT)
	{
	  _sprite.move(15, 0);
	  _sprite.setTextureRect(IntRect(_xInterval, _yInterval, 71, 61));
	}
      else if(dir == LEFT)
	{
	  _sprite.move(-15, 0);
	  _sprite.setTextureRect(IntRect(_xInterval, _yInterval, -71, 61));
	}
    }
};
