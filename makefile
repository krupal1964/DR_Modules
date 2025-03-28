CC = gcc
CFLAGS= -Wall -g

MODULE=Module5

SRC_PATH = ./Modules/$(MODULE)/src/
OBJ_PATH = ./Modules/$(MODULE)/obj/
EXE_PATH = ./Modules/$(MODULE)/exe/

SRCS = $(wildcard $(SRC_PATH)/*.c) ./Modules/$(MODULE)/main.c

OBJS = $(SRCS:.c=.o)

EXECUTABLE = run

tareget: build execute

build: $(OBJS)
	@mv $(OBJS) $(OBJ_PATH)
	@$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OBJ_PATH)/*.o -lm
	@mv $(EXECUTABLE) $(EXE_PATH)

execute:
	@$(EXE_PATH)/$(EXECUTABLE)

clean:
	@rm $(OBJ_PATH)/*.o
	@rm $(EXE_PATH)/$(EXECUTABLE)

cleanobject:
	@rm $(OBJ_PATH)/*.o

cleanexecute:
	@rm  $(EXE_PATH)/$(EXECUTABLE)

%.o: %.c
	gcc -c $< -o $@
