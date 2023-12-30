hepsi: derle calistir

derle:
	g++ -I ./include/ -o ./lib/heaptree.o -c ./src/heaptree.cpp
	g++ -I ./include/ -o ./bin/main ./lib/heaptree.o ./src/main.cpp

calistir:
	./bin/main