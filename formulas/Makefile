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

FORMULAS = $(wildcard formula*)
.PHONY: $(FORMULAS)

all: $(FORMULAS)
	$(info Finished, no errors)

$(FORMULAS):
	$(MAKE) -C $@
