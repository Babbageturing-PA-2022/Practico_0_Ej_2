
CC      = g++
PROG    = racional
OBJS    = main.o racional.o
LDFLAGS =
CDFLAGS =

all        : $(PROG)

rebuild    : clean $(PROG)

clean      :
	@ rm -f core $(PROG) $(OBJS)

run        : $(PROG)
	@ ./$(PROG)

$(PROG)    : $(OBJS)
	@ $(CC) $(LDFLAGS) -o $(PROG) $(OBJS)

main.o     :
	@ $(CC) $(CCFLAGS) -c main.cpp

racional.o :
	@ $(CC) $(CCFLAGS) -c racional.cpp