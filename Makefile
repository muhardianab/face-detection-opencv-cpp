cc = "g++"
PROJECT = fr-cpp
SRC = tutorial-cascade-classifier.cpp 				#test.cpp
LSTD = lstdc++
LIBS = `pkg-config opencv4 --cflags --libs`

CCFLAGS = -g

$(PROJECT) : $(SRC)
	$(CC) $(CCFLAGS) $(SRC) $(LIBS) -o $(PROJECT) -$(LSTD)