# pointers
-> they are variable that stores address(hexadecimal) of other variables. <br>
-> we can access and modify the variable by the pointer that stores its address.

**Pointer Arithmetic**
-> ++,--,+,- only this are valid operations.

```
if int a=10;
int *aptr=&a;
suppose aptr=2000 (address of variable of int type)
if aptr++;
then aptr will be 2004 coz int has 4 data size 
```
-> thats why we need to create pointer of same data type as that of the variable whose address it stores coz it indicates how many memory bytes to skip in case of pointer arithmetic. <br>
-> so if we perform pointer arithmetic on pointer and change its memory location so then the value of variable also gets changed. <br>
-> lets say variable and pointer were of char type and address was 2000 and then we increment the pointer so now the ptr will be 2001 as char has 1 data size. <br>

-> `(void *)cptr` has no associated data type and its used to print the address for any data type <br>
