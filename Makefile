CFLAGS = -g -Wall
SOURCES = hofstadter.c
TARGET = hofstadter

default: all

all: $(TARGET)

$(TARGET): $(SOURCES)
	gcc $< $(CFLAGS) -o $@

clean:
	rm -f $(TARGET)
	rm -rf $(TARGET).dSYM