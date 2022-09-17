all:
	gcc -I src/include -L src/lib -o evolution.c -lmingw32 -lSDL2main -lSDL2