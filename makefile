bin/newtonraphson : src/newtonraphson.cpp include/*
	c++ src/newtonraphson.cpp -o bin/newtonraphson -I include -lcurses

run : bin/newtonraphson
	./bin/newtonraphson