//
// Hero.hpp for noName in /home/mjolnir
// 
// Made by Nicolas Cataldo
// Contact   <cataldo.nico@gmail.com>
// 
// Started on  Wed Dec 25 19:39:41 2013 Nicolas Cataldo
// Last update Wed Dec 25 20:20:51 2013 Nicolas Cataldo
//

#ifndef 		_HERO_H_
#define 		_HERO_H_

#include		"GraphicalAnimatedObject.hpp"

class Hero : public GraphicalAnimatedObject
{
public:
  Hero();
  virtual ~Hero();
  
protected:
  int			_hp;
  int			_kakari;
  int			_kendo;
  int			_kenji;

  int			_agi;
  int			_str;
  int			_int;

  int			_agilityStat;
  int			_magicStat;
  int			_attackStat;
};

#endif /* _HERO_H_ */
