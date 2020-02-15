CONTEST = abc152
SRC_A = a.cpp
SRC_B = b.cpp
SRC_C = c.cpp
SRC_D = d.cpp
SRC_E = e.cpp
SRC_F = f.cpp

all: a b c d e f

a: $(SRC_A)
	g++ -std=c++14 -Wall $(SRC_A) -o a.out

b: $(SRC_B)
	g++ -std=c++14 -Wall $(SRC_B) -o b.out

c: $(SRC_C)
	g++ -std=c++14 -Wall $(SRC_C) -o c.out

d: $(SRC_D)
	g++ -std=c++14 -Wall $(SRC_D) -o d.out

e: $(SRC_E)
	g++ -std=c++14 -Wall $(SRC_E) -o e.out

f: $(SRC_F)
	g++ -std=c++14 -Wall $(SRC_F) -o f.out

test_a: a
	python autoJudge/autojudge.py -p ./$(SRC_A) $(CONTEST) $(CONTEST)_a

test_b: b
	python autoJudge/autojudge.py -p ./$(SRC_B) $(CONTEST) $(SRC_B)

test_c: c
	python autoJudge/autojudge.py -p ./$(SRC_C) $(CONTEST) $(SRC_C)

test_d: d
	python autoJudge/autojudge.py -p ./$(SRC_D) $(CONTEST) $(SRC_D)

test_e: e
	python autoJudge/autojudge.py -p ./$(SRC_E) $(CONTEST) $(SRC_E)

test_f: f
	python autoJudge/autojudge.py -p ./$(SRC_F) $(CONTEST) $(SRC_F)

clean:
	rm -rf *.out
