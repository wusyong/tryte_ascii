CC:=gcc
EXE:=main
OBJ:=main.o tryte_ascii.o

all:$(OBJ)
	$(CC) -o $(EXE) $(OBJ)

%.o:%.c
	$(CC) -c $^ -o $@

.PHONY:clean

clean:
	rm -rf $(OBJ) $(EXE)
