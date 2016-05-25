- hello.c

``` C
    #include <stdio.h>
    #if 1
    //argument count 
    //argument value
    int main(int argc, char **argv)
    {
        printf("hello, world!\n");
        return 5;
    }
    #endif
```

```
gcc hello.c -o hello
```

```
./hello
```

```
gcc -E hello.c -o hello.i # vim hello.i
```

```
gcc -S hello.i -o hello.s
```

```
gcc -c hello.s -o hello.o # ELF 64-bit LSB relocatable
```

```
objdump -S -d hello.o
```

```
    /* do nothing */
    #if 0
    void main(void)
    {
    }
    main()
    {
    }
    int main(void)
    {
    }
    #endif 
```

```
echo $?
```
