CC = gcc
CFLAGS = -std=c89

SRCS = prog.c process.c

all:
	$(CC) $(CFLAGS) $(SRCS) -o welcome
welcome: 
	$(CC) $(CFLAGS) $(SRCS) -o welcome
clean:
	rm -f welcome

rebuild: clean all welcome
