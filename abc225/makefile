CONTEST = abc225


CC = g++
OPTIONS = -std=c++14 -Wall -I`git rev-parse --show-toplevel`/ac-library

SRC_A = a.cpp
SRC_B = b.cpp
SRC_C = c.cpp
SRC_D = d.cpp
SRC_E = e.cpp
SRC_F = f.cpp

BIN_A = a.out
BIN_B = b.out
BIN_C = c.out
BIN_D = d.out
BIN_E = e.out
BIN_F = f.out

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
	python autoJudge/autojudge.py -p ./$(SRC_C) $(CONTEST) $(CONTEST)_c

d: $(BIN_D)
	python autoJudge/autojudge.py -p ./$(SRC_D) $(CONTEST) $(CONTEST)_d

e: $(BIN_E)
	python autoJudge/autojudge.py -p ./$(SRC_E) $(CONTEST) $(CONTEST)_e

f: $(BIN_F)
	python autoJudge/autojudge.py -p ./$(SRC_F) $(CONTEST) $(CONTEST)_f

clean:
	rm -rf *.out testcase
