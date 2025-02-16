# fast-invsqrt-re

```bash
# using a makefile
make
make clean

# compile with debugging info
gcc -g main.c -o hello

# disassembly
# -d: disassemble executable sections
# -M intel: use Intel syntax for disassembly (vs AT&T)
# -S: intermix source code with disassembly
# > disassembled.s: save output to file
objdump -d -M intel -S hello > disassembled.s

# Disassemble the executable, showing the __TEXT,__text section (where code resides).
#  -t: Disassemble the text section.
#  -v: Verbose output (includes symbolic information).
#  -V:  Even more verbose, shows instruction addresses.
otool -tvV hello > disassembled.s

# If you want to see the source code intermixed (you'll need to compile with -g):
#  -s __TEXT __text:  Disassemble a specific section (TEXT segment, text section).
#  -X: Print the section name.
otool -s __TEXT __text -vV hello > disassembled.s

```
