all:
	g++ -c src/main.cpp src/app.cpp src/algorithm.cpp src/visualizer.cpp
	g++ main.o app.o algorithm.o visualizer.o -o Visualizer -lsfml-graphics

	rm app.o
	rm algorithm.o
	rm visualizer.o
	rm main.o