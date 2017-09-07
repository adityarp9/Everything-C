#
# Makefile, my first attempt
#

cortana: find generate

find: find.c helpers.c helpers.h sort.c sort.h
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o find find.c sort.c helpers.c -lcs50 -lm

generate: generate.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o generate generate.c -lcs50

clean:
	rm -f *.o a.out core find generate sort helper
