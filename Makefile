all:
	g++ -I src/include -L src/lib -o evo evolution.c -lmingw32 -lSDL2main -lSDL2