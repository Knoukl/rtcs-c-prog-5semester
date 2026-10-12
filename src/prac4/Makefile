CC = gcc
CFLAGS = -std=c89

SRCS = prog.c process.c

all:
	$(CC) $(CFLAGS) $(SRCS) -o prog
prog: 
	$(CC) $(CFLAGS) $(SRCS) -o prog
clean:
	rm -f prog

rebuild: clean all prog

