CONTEST = abc155

CC = g++
OPTIONS = -std=c++14 -Wall

SRC_A = a.cpp
SRC_B = b.cpp
SRC_C = c.cpp
SRC_D = d.cpp
SRC_E = e.cpp
SRC_F = f.cpp

BIN_A = a.cpp
BIN_B = b.cpp
BIN_C = c.cpp
BIN_D = d.cpp
BIN_E = e.cpp
BIN_F = f.cpp

all: a b c d e f

$(BIN_A): $(SRC_A)
	$(CC) $(OPTIONS) $(SRC_A) -o $(BIN_A)

$(BIN_B): $(SRC_B)
	$(CC) $(OPTIONS) $(SRC_B) -o $(BIN_B)

$(BIN_C): $(SRC_C)
	$(CC) $(OPTIONS) $(SRC_C) -o $(BIN_C)

$(BIN_D): $(SRC_D)
	$(CC) $(OPTIONS) $(SRC_D) -o $(BIN_D)

$(BIN_E): $(SRC_E)
	$(CC) $(OPTIONS) $(SRC_E) -o $(BIN_E)

$(BIN_F): $(SRC_F)
	$(CC) $(OPTIONS) $(SRC_F) -o $(BIN_F)

a: $(BIN_A)
	python autoJudge/autojudge.py -p ./$(SRC_A) $(CONTEST) $(CONTEST)_a

b: $(BIN_B)
	python autoJudge/autojudge.py -p ./$(SRC_B) $(CONTEST) $(CONTEST)_b

c: $(BIN_C)
	python autoJudge/autojudge.py -p ./$(SRC_C) $(CONTEST) $(SRC_C)

d: $(BIN_D)
	python autoJudge/autojudge.py -p ./$(SRC_D) $(CONTEST) $(SRC_D)

e: $(BIN_E)
	python autoJudge/autojudge.py -p ./$(SRC_E) $(CONTEST) $(SRC_E)

f: $(BIN_F)
	python autoJudge/autojudge.py -p ./$(SRC_F) $(CONTEST) $(SRC_F)

clean:
	rm -rf *.out testcase
