CFLAGS += -I /unity/src/
CFLAGS += -std=c99
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror
CFLAGS += -Wshadow
CFLAGS += -O
CFLAGS += -Wsequence-point
CFLAGS += -Wmissing-noreturn
CFLAGS += -Wunreachable-code

CFLAGS += -fprofile-arcs -ftest-coverage

CFLAGS += -DTEST
CFLAGS += -DUNITY_SUPPORT_64
CFLAGS += -DUNITY_INCLUDE_DOUBLE

UNITY_C_FILES = /unity/src/unity.c
H_FILES = $(wildcard *.h)
C_FILES = $(wildcard *.c)

.PHONY: test.output
test.output: test makefile
	@./$<

test: makefile create.tests.main $(C_FILES) $(H_FILES)
	@gcc $(CFLAGS) -O *.c $(UNITY_C_FILES) -o $@

create.tests.main :
	@ruby /unity/auto/generate_test_runner.rb order.tests.c tests.main.c
