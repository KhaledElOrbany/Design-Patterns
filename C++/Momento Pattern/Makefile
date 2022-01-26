all: compile exe
objects := ./lib/Editor.o ./lib/EditorState.o ./lib/History.o

compile:
	g++ -I ./include/ -o ./lib/Editor.o -c ./src/Editor.cpp
	g++ -I ./include/ -o ./lib/EditorState.o -c ./src/EditorState.cpp
	g++ -I ./include/ -o ./lib/History.o -c ./src/History.cpp
	g++ -I ./include/ -o ./bin/momento $(objects) ./src/Main.cpp

exe:
	./bin/momento