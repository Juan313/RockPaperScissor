# CS162 W2017 Group Project - Group 5
# Group5 makefile

#
# Project Name
#
PROJ = Group5

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
# added *.pdf to zip design file together
# updated: 02:01 am(PST), 02/25
zip:
	zip $(PROJ).zip *.cpp *.hpp *.pdf makefile
