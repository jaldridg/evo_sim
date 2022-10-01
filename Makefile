all:
	gcc -I src/include -L src/lib -o evo.exe src/evolution.c -lmingw32 -lSDL2main -lSDL2