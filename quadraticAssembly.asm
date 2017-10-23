06 00 ; load 0
07 01 ; store 0 in sumAddr
06 01 ; load 1
07 02 ; store 1
08 00 ; input

05 00 ; load input
03 00 ; multiply input with itself
01 01 ; add sumAddr to calculation
07 01 ; store result in sumAddr
05 00 ; load input
02 02 ; subtract 1
07 00 ; store it back
13 04 ; loop again if not 0
