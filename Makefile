CPP_SRC = main.cpp src/MainGame.cpp src/MainQuiz.cpp
CPP_FLAGS = -std=c++11
all:
		g++ $(CPP_SRC) -I ./include $(CPP_FLAGS)
