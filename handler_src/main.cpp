//
// main.cpp for NoName in /home/mjolnir
// 
// Made by Nicolas Cataldo
// Contact   <cataldo.nico@gmail.com>
// 
// Started on  Tue Dec 24 10:28:06 2013 Nicolas Cataldo
// Last update Wed Dec 25 21:42:35 2013 Nicolas Cataldo
//

#include 		<SFML/Window.hpp>
#include 		<SFML/Graphics.hpp>
#include 		<iostream>

#include		"Hero.hpp"

using namespace 	std;
using namespace 	sf;

// int main()
// {
//   Texture 		texture;
//   Event 		event;
//   int			xPos;
//   int			yPos;

//   xPos = 0;
//   yPos = 0;

//   RenderWindow window(VideoMode(800,600), "Brototype DUDE");
//   window.setFramerateLimit(60);

//   if(!texture.loadFromFile("res/Sprite/Kelin/kelinSheet.png"))
//      return EXIT_FAILURE;

//   Sprite sprite(texture);
  

//   sprite.setTextureRect(IntRect(0, 0, 71, 61));

//   while(window.isOpen())
//     {
      

//       while(window.pollEvent(event))
// 	{
// 	  if (event.type ==  Event::Closed)
// 	    { 
// 	      window.close(); 
// 	      break;
// 	    }
// 	  else if (event.type == Event::KeyPressed)
// 	    {
// 	      if(event.key.code == Keyboard::D)
// 		{
// 		  xPos += 71;
// 		  sprite.setTextureRect(IntRect(0+xPos, 0+yPos, 71, 61));
// 		}
// 	      else if(event.key.code == Keyboard::Q)
// 		{
// 		  xPos -= 71;
// 		  sprite.setTextureRect(IntRect(0+xPos, 0+yPos, -71, 61));
// 		  //sprite.setTextureRect(IntRect(69,0,-69,69));
// 		}
// 	      else if(event.key.code == Keyboard::S)
// 		{
// 		  yPos += 71;
// 		  sprite.setTextureRect(IntRect(0+xPos, 0+yPos, 71, 61));
// 		}
// 	    }
		
// 	}

//       window.clear();
//       window.draw(sprite);
//       window.display();
//     }
//   return EXIT_SUCCESS;

//}


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
		  hero->getSprite()->setTextureRect(IntRect(0, 0, 71, 61));
		}
	      else if(event.key.code == Keyboard::Q)
		{
		  
		}
	    }
		
	}

      window.clear();
      window.draw( *(hero->getSprite()) );
      window.display();
    }
  return EXIT_SUCCESS;

};
