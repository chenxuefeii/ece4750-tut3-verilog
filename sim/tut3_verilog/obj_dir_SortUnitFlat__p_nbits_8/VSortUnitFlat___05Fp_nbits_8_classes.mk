# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VSortUnitFlat___05Fp_nbits_8.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VSortUnitFlat___05Fp_nbits_8 \
	VSortUnitFlat___05Fp_nbits_8__Dpi_Export__0 \
	VSortUnitFlat___05Fp_nbits_8___024root__DepSet_h9036cf7c__0 \
	VSortUnitFlat___05Fp_nbits_8___024root__DepSet_h74c33cd9__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VSortUnitFlat___05Fp_nbits_8__ConstPool_0 \
	VSortUnitFlat___05Fp_nbits_8___024root__Slow \
	VSortUnitFlat___05Fp_nbits_8___024root__DepSet_h9036cf7c__0__Slow \
	VSortUnitFlat___05Fp_nbits_8___024root__DepSet_h74c33cd9__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VSortUnitFlat___05Fp_nbits_8__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VSortUnitFlat___05Fp_nbits_8__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
