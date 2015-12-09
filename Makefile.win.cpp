# Project: liczby
# Makefile created by Dev-C++ 5.11

CPP      = g++.exe
CC       = gcc.exe
WINDRES  = windres.exe
OBJ      = liczby/Dekoder.o liczby/main.o
LINKOBJ  = liczby/Dekoder.o liczby/main.o
LIBS     = -L"C:/Users/kmusialski/Downloads/Dev-Cpp/MinGW64/lib" -L"C:/Users/kmusialski/Downloads/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib" -static-libgcc
INCS     = -I"C:/Users/kmusialski/Downloads/Dev-Cpp/MinGW64/include" -I"C:/Users/kmusialski/Downloads/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"C:/Users/kmusialski/Downloads/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include"
CXXINCS  = -I"C:/Users/kmusialski/Downloads/Dev-Cpp/MinGW64/include" -I"C:/Users/kmusialski/Downloads/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"C:/Users/kmusialski/Downloads/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include" -I"C:/Users/kmusialski/Downloads/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include/c++"
BIN      = liczby.exe
CXXFLAGS = $(CXXINCS) 
CFLAGS   = $(INCS) 
RM       = rm.exe -f

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o $(BIN) $(LIBS)

liczby/Dekoder.o: liczby/Dekoder.cpp
	$(CPP) -c liczby/Dekoder.cpp -o liczby/Dekoder.o $(CXXFLAGS)

liczby/main.o: liczby/main.cpp
	$(CPP) -c liczby/main.cpp -o liczby/main.o $(CXXFLAGS)
