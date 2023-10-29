bin/ice: src/ice.cpp include/*
	c++ src/ice.cpp -o bin/ice -o ice.exe -lcurses -I include

run: bin/ice
	./bin/ice
