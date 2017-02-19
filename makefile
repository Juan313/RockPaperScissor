CXX = g++
CXXFLAGS = -std=c++11
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors 
CXXFLAGS += -g
LDFLAGS = -lboost_date_time


OBJS = RPS.o RPSGame.o Tool.o input.o menu.o play_game.o 

SRCS = RPS.cpp RPSGame.cpp Tool.cpp input.cpp menu.cpp play_game.cpp 

HEADERS = RPS.hpp RPSGame.hpp Tool.hpp input.hpp menu.hpp 

prog: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${OBJS} -o prog

${OBJS}:${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)
clean:
	rm *o prog

# added zip command if not necessary, please feel free to remove
# updated: 17:24, 02/18
zip:
	zip $(PROJ).zip *.cpp *.hpp makefile
