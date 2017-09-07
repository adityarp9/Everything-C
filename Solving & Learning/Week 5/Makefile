#
#
# Makefile for Week 5 codes
#
#

scanf-0: scanf-0.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o scanf-0 scanf-0.c -lm

linkl: linkedList.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o linkl linkedList.c cs50.c -lm

gip: GetIntProto.c cs50.h
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o gip GetIntProto.c cs50.c -lm

hello: hello.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o hello hello.c -lcs50 -lm

linkl-1: linkedList-1.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o linkl-1 linkedList-1.c cs50.c -lm

linkl-2: linkedList-2.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o linkl-2 linkedList-2.c cs50.c -lm

stacksll: StackSLL.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o stacksll StackSLL.c cs50.c -lm

test: test.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o test test.c -lm

hashT: hashTable.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o hashT hashTable.c cs50.c -lm

clean:
	rm -f a.out *.o core scanf-0 linkl linkl-1 linkl-2 gip hello stacksll test hashT
