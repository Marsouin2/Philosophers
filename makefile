EXEC = exec/philo

SRC_DIR = code/src
INC_DIR = code/include

SRC_EXT = cpp
OBJ_EXT = o

SRCS = $(wildcard $(SRC_DIR)/*.$(SRC_EXT))
OBJS = $(SRCS:$(SRC_DIR)/%.$(SRC_EXT)=$(SRC_DIR)/%.$(OBJ_EXT))

CXX = g++
CXXFLAGS = -I$(INC_DIR) -Wall -std=c++14

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(OBJS) -o $(EXEC)

$(SRC_DIR)/%.$(OBJ_EXT): $(SRC_DIR)/%.$(SRC_EXT)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(SRC_DIR)/*.$(OBJ_EXT) $(EXEC)

re : clean all

.PHONY: all clean
