## ***1.***高级计算机语言与低级计算机语言的优劣及偏好：

### ◦ 高级计算机语言：

####  ◦ 优势：

◦ 更接近人类自然语言，易于理解和编写，开发效率高。
◦ 通常提供丰富的库和工具，方便实现各种功能。
◦ 可移植性强，能够在不同的操作系统和硬件平台上运行。

#### ◦ 劣势：

◦ 执行效率相对较低，因为需要经过编译或解释等过程。
◦ 对硬件的直接控制能力较弱。

### ◦ 低级计算机语言：

#### ◦ 优势：

◦ 执行效率高，能够直接操作硬件资源。
◦ 适合对性能要求极高的场景，如操作系统内核、嵌入式系统等。

#### ◦ 劣势：

◦ 编写难度大，语法复杂，容易出错。
◦ 可移植性差，不同的硬件平台可能需要不同的代码。

### ◦ 偏好：

这取决于具体的应用场景。如果追求开发效率和可移植性，高级语言更合适；如果对性能有极高要求且需要直接控制硬件，低级语言可能是更好的选择。但一般来说，高级语言的使用更为广泛，因为它们能满足大多数应用的需求，同时提高开发效率。

## 2.解读 “hello.c” 中每一行的内容：

1. ◦ #include <stdio.h>：这是预处理指令，告诉编译器在编译程序之前要包含标准输入输出头文件（stdio.h）。这个头文件中包含了一些用于输入输出操作的函数声明，如printf函数。

2. ◦ int main()：这是主函数的定义。在 C 语言中，程序从主函数开始执行。int表示主函数的返回值类型是整数类型。
3. ◦ {：表示主函数的开始。
4. ◦ printf("Hello, world!");：调用printf函数输出字符串 “Hello, world!”。printf是一个标准库函数，用于格式化输出到标准输出设备（通常是控制台）。
5. ◦ return 0;：主函数返回值为 0。在 C 语言中，通常返回 0 表示程序正常结束。

## 3.删一行

在这个程序中，如果删除#include <stdio.h>这一行，程序可能无法正常编译，但在某些编译器中可能会给出警告并继续编译，因为一些编译器可能会默认包含一些常用的头文件。但是，在严格的编程规范中，应该包含所需的头文件以确保程序的正确性和可移植性。如果程序只是简单地输出一个字符串，不使用任何输入输出函数，那么可以删除这一行而不影响程序的运行结果。但这种情况在实际编程中很少见。

## 4.int

int类型是计算机存储整数元素的方式。在 C 语言中，main函数使用int进行声明是一种约定。主函数的返回值可以被操作系统或其他程序用来判断程序的执行状态。返回 0 通常表示程序正常结束，其他非零值可以表示不同的错误状态。

## 5.以下是修改后的程序 “hello.c”：![屏幕截图 2024-10-11 234357](C:\Users\lenovo\Pictures\Screenshots\屏幕截图 2024-10-11 234357.png)

## ---以下是课后题--

`#include <stdio.h>`

`int gcd(int a, int b) {`
    `while (b!= 0) {`
        `int t = b;`
        `b = a % b;`
        `a = t;`
    `}`
    `return a;`
`}`

`int main() {`
    `int m, n;`
    `printf("请输入两个整数（0 < m,n < 2^31）：");`
    `scanf("%d %d", &m, &n);`
    `int result = gcd(m, n);`
    `printf("这两个整数的最大公约数是：%d\n", result);`
    `return 0;`
`}`

*辗转相除法求最大公约数*