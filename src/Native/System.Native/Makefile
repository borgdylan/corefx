#Standalone Makefile for System.Native on Linux x86/x64/arm/aarch64

prefix := /usr/local

all: *.h *.cpp
	g++ --shared -fPIC -std=c++11 -DSTANDALONE *.cpp -o libSystem.Native.so

clean:
	rm -f *.so

install:
	cp libSystem.Native.so $(prefix)/lib/libSystem.Native.so
	ldconfig

uninstall:
	rm $(prefix)/lib/libSystem.Native.so
	ldconfig

.PHONY: all clean install uninstall
