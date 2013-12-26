//
// Hero.cpp<2> for noName in /home/mjolnir
// 
// Made by Nicolas Cataldo
// Contact   <cataldo.nico@gmail.com>
// 
// Started on  Wed Dec 25 20:03:26 2013 Nicolas Cataldo
// Last update Wed Dec 25 20:46:10 2013 Nicolas Cataldo
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
