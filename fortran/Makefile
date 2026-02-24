FC     = gfortran
FFLAGS = -std=f2018 -Wall -Wextra
SRC    = $(wildcard *.f90)
EXE    = $(SRC:.f90=)

.PHONY: all run clean

all: $(EXE)

%: %.F90
	$(FC) $(FFLAGS) $< -o $@

# run a specific program: make run NAME=hello
run: $(NAME)
	./$(NAME)

clean:
	rm -f $(EXE) *.o *.mod
