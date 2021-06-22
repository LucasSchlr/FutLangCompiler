flex compiler.l
bison -dy compiler.y
gcc -I. y.tab.c -o compiler.exe	