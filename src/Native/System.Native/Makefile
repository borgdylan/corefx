#Standalone Makefile for System.Native on Linux x86/x64/arm/aarch64

all: *.h *.cpp
	clang++ --shared -fPIC -std=c++11 -DSTANDALONE *.cpp -o libSystem.Native.so

clean:
	rm *.so

.PHONY: all clean
