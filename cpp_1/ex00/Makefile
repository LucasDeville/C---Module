MAKEFLAGS += --silent
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJS_EXEC = ${SRCS:.cpp=.o}
EXEC = test


all: ${EXEC}
	echo "\033[7;32m~| Tous les fichiers sont à jour ! |~\033[0m"\

${EXEC}: ${OBJS_EXEC}
	${CC} ${CFLAGS} ${OBJS_EXEC} -o ${EXEC} \
		&& echo "\033[1;32m~| Compilation du $@ : OK |~\033[0m"\
		|| echo "\033[1;31m~| Compilation du $@ : Erreur |~\033[0m"

clean:
	rm -f ${OBJS_BONUS}
	rm -f ${OBJS_EXEC}\
		&& echo "\033[1;33m~| Nettoyage des .o : OK |~\033[0m"\
		|| echo "\033[0;31m~| Compilation du $@ : Erreur |~\033[0m"

fclean: clean
	rm -f ${BONUS}
	rm -f ${EXEC} \
		&& echo "\033[1;33m~| Nettoyage des executables : OK |~\033[0m"\
		|| echo "\033[0;31m~| Compilation du $@ : Erreur |~\033[0m"

re: fclean all
