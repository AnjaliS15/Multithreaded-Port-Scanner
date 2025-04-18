CC = g++
CFLAGS = -pthread -Wall -std=c++11

ps: 
	$(CC) pscan.cpp -o ps $(CFLAGS)

clean:
	@rm `find . -type f -executable`