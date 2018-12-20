# Compiler
CXX=g++

# Compiler options
CXXFLAGS=-Wall

# This is a compilation rule:
# "compiling .o file means compile a .cc file"
LINK.o=$(LINK.cc)

# <Name of the executable>: <which files to compile>
test: test.o figure.o circle.o square.o

# Called when executing `make clean`
clean:
	$(RM) *.o test
