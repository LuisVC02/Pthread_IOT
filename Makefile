
CC ?= gcc

APP_NAME   = pthread
OBJ_FILES  = pthread.o

LIBS = .
LIB  = pthread


all: $(APP_NAME)

$(APP_NAME): $(OBJ_FILES)
	$(CC) $^ -o $@ -L$(LIBS) -l$(LIB)

%.o: %.c
	$(CC) -o $@ -c $^ -g


clean:
	rm *.o $(APP_NAME)

fresh:
	make clean
	make all
