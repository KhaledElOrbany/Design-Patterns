all: compile exe
objects := ./lib/Canvas.o ./lib/Tool.o ./lib/SelectionTool.o ./lib/EraserTool.o

compile:
	g++ -I ./include/ -o ./lib/Canvas.o -c ./src/Canvas.cpp
	g++ -I ./include/ -o ./lib/Tool.o -c ./src/Tool.cpp
	g++ -I ./include/ -o ./lib/SelectionTool.o -c ./src/SelectionTool.cpp
	g++ -I ./include/ -o ./lib/EraserTool.o -c ./src/EraserTool.cpp
	g++ -I ./include/ -o ./bin/state $(objects) ./src/Main.cpp

exe:
	./bin/state