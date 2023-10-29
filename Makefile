bin/ice: src/ice.cpp include/*
	c++ src/ice.cpp -o bin/ice -lcurses -I include

run: bin/ice
	./bin/ice
