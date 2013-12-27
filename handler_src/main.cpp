//
// main.cpp for NoName in /home/mjolnir
// 
// Made by Nicolas Cataldo
// Contact   <cataldo.nico@gmail.com>
// 
// Started on  Tue Dec 24 10:28:06 2013 Nicolas Cataldo
// Last update Thu Dec 26 12:39:33 2013 Nicolas Cataldo
//

#include 		<SFML/Window.hpp>
#include 		<SFML/Graphics.hpp>
#include 		<iostream>

#include		"Hero.hpp"

using namespace 	std;
using namespace 	sf;

int main()
{
  Event			event;
  //Joystick		joy00;
  Hero			*hero;

  hero = new Hero();

  RenderWindow window(VideoMode(800,600), "Gotcha Game Industry");
  window.setFramerateLimit(60);

  while(window.isOpen())
    {
      while(window.pollEvent(event))
	{
	  if (event.type ==  Event::Closed)
	    { 
	      window.close(); 
	      break;
	    }
	  else if (event.type == Event::KeyPressed)
	    {
	      if(event.key.code == Keyboard::D)
		{
		  hero->moveHero(RIGHT);
		}
	      else if(event.key.code == Keyboard::Q)
		{
		  cout << "BLOCKED \n";
		  hero->moveHero(LEFT);
		}
	    }
		
	}

      window.clear();
      window.draw( *(hero->getSprite()) );
      window.display();
    }
  return EXIT_SUCCESS;

};
