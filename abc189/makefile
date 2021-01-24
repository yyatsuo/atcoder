CONTEST = abc189

CC = g++
OPTIONS = -std=c++14 -Wall

SRC_A = a.cpp
SRC_B = b.cpp
SRC_C = c.cpp
SRC_D = d.cpp
SRC_E = e.cpp
SRC_F = f.cpp

all: a b c d e f

a: $(SRC_A)
	python autoJudge/autojudge.py -p ./$(SRC_A) $(CONTEST) $(CONTEST)_a

b: $(SRC_B)
	python autoJudge/autojudge.py -p ./$(SRC_B) $(CONTEST) $(CONTEST)_b

c: $(SRC_C)
	python autoJudge/autojudge.py -p ./$(SRC_C) $(CONTEST) $(CONTEST)_c

d: $(SRC_D)
	python autoJudge/autojudge.py -p ./$(SRC_D) $(CONTEST) $(CONTEST)_d

e: $(SRC_E)
	python autoJudge/autojudge.py -p ./$(SRC_E) $(CONTEST) $(CONTEST)_e

f: $(SRC_F)
	python autoJudge/autojudge.py -p ./$(SRC_F) $(CONTEST) $(CONTEST)_f

clean:
	rm -rf *.out testcase
