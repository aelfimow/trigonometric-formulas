CXXFLAGS  = -O2
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
#CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++23
CXXFLAGS += -Werror
CXXFLAGS += --all-warnings
CXXFLAGS += --extra-warnings
CXXFLAGS += -Wconversion
CXXFLAGS += -Wconversion-null
CXXFLAGS += -Wdiv-by-zero
CXXFLAGS += -Wfloat-conversion
CXXFLAGS += -Wfloat-equal
CXXFLAGS += -fext-numeric-literals

LDFLAGS = -lquadmath

export CXXFLAGS
export LDFLAGS

.PHONY: formula1
.PHONY: formula2
.PHONY: formula3
.PHONY: formula4

all: formula1 formula2 formula3 formula4

formula1:
	${MAKE} -C formula1

formula2:
	${MAKE} -C formula2

formula3:
	${MAKE} -C formula3

formula4:
	${MAKE} -C formula4
