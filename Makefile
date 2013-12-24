DIRGRAPHICSSRC	= graphics_src/
DIRGRAPHICSOBJ	= graphics_obj/
DIRGRAPHICSINC	= graphics_inc/

DIRHANDLERSRC	= handler_src/
DIRHANDLEROBJ	= handler_obj/
DIRHANDLERINC	= handler_inc/

DIRSKELETTONSRC	= skeletton_src/
DIRSKELETTONOBJ	= skeletton_obj/
DIRSKELETTONINC	= skeletton_inc/

DIRSOUNDSSRC	= sounds_src/
DIRSOUNDSOBJ	= sounds_obj/
DIRSOUNDSINC	= sounds_inc/

SFMLINCLUDE	= /home/mjolnir/Bureau/Gotcha_Game/unnamed/extlib/SFML-2.1/include
SFMLEXTLIB	= /home/mjolnir/Bureau/Gotcha_Game/unnamed/extlib/SFML-2.1/lib/

DEBUG		= yes

ifeq ($(DEBUG), no)
		OPTI	= -Os -s
else
		OPTI	= -g
endif

CFLAGS		= -Wall -W -Wextra -Werror \
		  -I $(SFMLINCLUDE) \
		  -I $(DIRHANDLERINC) \
		  -I $(DIRGRAPHICSINC) \
		  -I $(DIRSKELETTONINC) \
		  -I $(DIRSOUNDSINC) \
		     $(OPTI)

LDFLAGSGAME	= -L $(SFMLEXTLIB) -Wl,-rpath,$(SFMLEXTLIB) \
		  -lsfml-graphics -lsfml-window -lsfml-system \
		  -I $(SFMLINCLUDE) \
		  -I $(DIRGRAPHICSINC) \
		  -I $(DIRSOUNDSINC) \
		  -I $(DIRSKELETTONINC) \
		  -I $(DIRHANDLERINC)


LDFLAGSGRAPHICS	= -L $(SFMLEXTLIB) -Wl,-rpath,$(SFMLEXTLIB) \
		  -lsfml-graphics -lsfml-window -lsfml-system \
		  -I $(SFMLINCLUDE) \
		  -I $(DIRGRAPHICSINC) \
		  -I $(DIRSOUNDSINC)


LDFLAGSHANDLER	= -L $(SFMLEXTLIB) -Wl,-rpath,$(SFMLEXTLIB) \
		  -lsfml-system -lsfml-graphics -lsfml-window \
		  -I $(SFMLINCLUDE) \
		  -I $(DIRGRAPHICSINC) \
		  -I $(DIRSKELETTONINC) \
		  -I $(DIRHANDLERINC)


LDFLAGSSKEL	= -L $(SFMLEXTLIB) -Wl,-rpath,$(SFMLEXTLIB) \
		  -lsfml-system -lsfml-graphics -lsfml-window \ \
		  -I $(DIRSKELETTONINC) \
		  -I $(DIRGRAPHICSINC) \
		  -I $(SFMLINCLUDE) 

LDFLAGSSOUNDS	= -L $(SFMLEXTLIB) -Wl,-rpath,$(SFMLEXTLIB) \
		  -lsfml-system -lsfml-graphics -lsfml-window \
		  -I $(DIRSOUNDSINC) \
		  -I $(SFMLINCLUDE)


RM		= rm -f

CC		= g++

RED		= "\\033[1\;31m"

GREEN		= "\\033[32m"

YELLOW		= "\\033[33m"

BLUE		= "\\033[34m"

MAGENTA		= "\\033[35m"

CYAN		= "\\033[36m"

NOCOLOR		= "\\033[0\;0m"

ECHO		= /bin/echo -e

HANDLERSRC	= $(DIRHANDLERSRC)main.cpp \

GRAPHSRC	= $(DIRGRAPHICSSRC)GraphicalObject.cpp \

SKELSRC 	= 

SOUNDSSRC	= 

GRAPHOBJ        = $(subst $(DIRGRAPHICSSRC),$(DIRGRAPHICSOBJ),$(GRAPHSRC:.cpp=.o))

HANDLEROBJ      = $(subst $(DIRHANDLERSRC),$(DIRHANDLEROBJ),$(HANDLERSRC:.cpp=.o))

SKELOBJ         = $(subst $(DIRSKELETTONSRC),$(DIRSKELETTONOBJ),$(SKELSRC:.cpp=.o))

SOUNDSOBJ       = $(subst $(DIRSOUNDSSRC),$(DIRSOUNDSOBJ),$(SOUNDSSRC:.cpp=.o))

GAMENAME	= noname

all:		$(GAMENAME)

$(GAMENAME):	$(GRAPHOBJ) $(HANDLEROBJ) $(SKELOBJ) $(SOUNDSOBJ)
	$(CC) -o $(GAMENAME) $(GRAPHOBJ) $(HANDLEROBJ) $(SKELOBJ) $(SOUNDSOBJ) $(LDFLAGSGAME)
	@$(ECHO) "$(BLUE)\n$(GAMENAME) compiled.\n$(NOCOLOR)"

$(DIRGRAPHICSOBJ)%.o: $(DIRGRAPHICSSRC)%.cpp
	$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGSGRAPHICS)

$(DIRHANDLEROBJ)%.o: $(DIRHANDLERSRC)%.cpp
	$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGSHANDLER)

$(DIRSOUNDSOBJ)%.o: $(DIRSOUNDSSRC)%.cpp
	$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGSSOUNDS)

$(DIRSKELETTONOBJ)%.o: $(DIRSKELETTONSRC)%.cpp
	$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGSSKEL)

clean:
	@$(RM) $(GRAPHOBJ) $(HANDLEROBJ) $(SKELOBJ) $(SOUNDSOBJ)
	@echo cleaning done.

fclean:	 clean
	@$(RM) $(GAMENAME)

re:	fclean all

.PHONY:	all re clean fclean
