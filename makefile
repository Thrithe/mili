COMPILER=g++
OUTPUT=mili
SOURCE_FILES=src/main.cpp
EXTRA_TAGS=

default: build
build:
	$(COMPILER) -o $(OUTPUT) $(EXTRA_TAGS) $(SOURCE_FILES)
run:
	./$(OUTPUT)
