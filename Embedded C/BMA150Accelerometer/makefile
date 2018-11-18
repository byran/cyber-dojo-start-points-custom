CFLAGS += -I /unity/src/
CFLAGS += -I /unity/extras/fixture/src/
CFLAGS += -I /stm32f4xx_hal
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

CFLAGS += -DUNITY_SUPPORT_64
CFLAGS += -DUNITY_INCLUDE_DOUBLE

CFLAGS += -DSTM32F411xE

UNITY_C_FILES = /unity/src/unity.c /unity/extras/fixture/src/unity_fixture.c
H_FILES = $(wildcard *.h)
C_FILES = $(wildcard *.c)

.PHONY: test.output
test.output: test makefile
	@./$<

test: makefile create.tests.main $(C_FILES) $(H_FILES)
	@gcc $(CFLAGS) -O *.c $(UNITY_C_FILES) -o $@

create.tests.main :
	@ruby /unity/auto/generate_fixture_runner.rb tests.main.c
