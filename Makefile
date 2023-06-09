#Default goal for make is compilation to the executable 'Vbsg_cordic_sine_cosine_hyperbolic'.
#Use 'make run' to to run the executable and compute the error analysis.
#TRACE variable is used to enable tracing. While doing 'make run' give 
#variable value of TRACE=1 at command line;Use 'make run TRACE=1.
.ONESHELL: 
.PHONY: clean

FILE_DEL = $(VERI_DIR) CORDIC_tanh.vcd params_def.h bsg_tanh.v

#Use 'make clean' to remove the trace and verilated files. Define FILE_DEL variable
#with files folder to verilated files if not using default 'obj_dir' directory name. 
#To have a different folder name for Verilated files, give the folder name to make 
#with variable VERI_DIR;Use 'make run VERI_DIR=your_desired_name'

GENERATED_VERILOG_FILE = bsg_tanh.v

#To generate the default design with the parameters at line #53, please use 
# 'make bsg_cordic_sine_cosine_hyperbolic.v'. 

SRC_FILES = $(GENERATED_VERILOG_FILE) 

TEST_FILES = bsg_tanh_test2.cpp 

VERI_DIR = obj_dir

TRACE = 0

VFLAGS = -Wall --cc --exe --top-module bsg_tanh --Mdir 

VLINT_OFF = -Wno-UNUSED

.DEFAULT_GOAL := $(VERI_DIR)/Vbsg_tanh

#If installed verilator isn't included in your environment's default path,
#use VERILATOR_PATH to point to the installed 'verilator' executable.
#Use 'make run VERILATOR_PATH=where/verilator/is/installed/verilator-'version'/bin/verilator'

VERILATOR_PATH := $$HOME/verilator/install/bin/verilator

run: $(VERI_DIR)/Vbsg_tanh
	$(VERI_DIR)/Vbsg_tanh

Vbsg_tanh.mk: $(SRC_FILES) $(TEST_FILES)
ifeq ($(TRACE),1)
		$(VERILATOR_PATH)  $(VFLAGS) $(VERI_DIR) --trace $(SRC_FILES) $(TEST_FILES) $(VLINT_OFF)
else
		$(VERILATOR_PATH) $(VFLAGS) $(VERI_DIR) $(SRC_FILES) $(TEST_FILES) $(VLINT_OFF)
endif

$(VERI_DIR)/Vbsg_tanh: Vbsg_tanh.mk
		make -j -C $(VERI_DIR) -f Vbsg_tanh.mk Vbsg_tanh

$(GENERATED_VERILOG_FILE):
		echo -n > $(GENERATED_VERILOG_FILE)
		python3 bsg_tanh_script.py 21 32 6 12 16 4 > $(GENERATED_VERILOG_FILE)

clean:
		rm -rf $(FILE_DEL)

setup:
	cd $$HOME/verilator
	autoconf
	./configure --prefix=$$PWD/install
	make -j8
	make install

	export VERILATOR_ROOT=$$HOME/verilator
	export PATH=$$PATH:$$VERILATOR_ROOT/bin
# export VERILATOR_ROOT=$HOME/verilator
# export PATH=$PATH:$VERILATOR_ROOT/bin