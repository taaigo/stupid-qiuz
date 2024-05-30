CC = gcc
CFLAGS = -Wall -Wextra -g
BIN_NAME = stupid-qiuz
BUILD_DIR = bin

SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c,$(BUILD_DIR)/%.o,$(SRCS))

all: $(BUILD_DIR)/$(BIN_NAME)

$(BUILD_DIR)/%.o: %.c
	$(CC) $(CFLAGS) $< -o $@ -c

$(BUILD_DIR)/$(BIN_NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -r bin/*
