About
=====

Compiling C applications on WebLab takes a lot of time. If you follow the instructions below, you can compile and test your C applications locally. And best of all, it's almost copy and paste only!

Installation Instructions
=========================

First you need to download a C IDE, we'll use [Eclipse CDT](http://www.eclipse.org/cdt/ "Eclipse CDT") as an example here.
Create a new C Project (with your desired toolchain).
Import the files included in the src directory.

How To Use
==========
After you put the files into your project, open main.c and main.h. Edit/paste your solution and tests into these files respectively. The only thing you need to do, is including main.h in main.c like this:
```c
#include main.h
```

Troubleshooting
===============
If you use the Microsoft Visual C++ toolchain, it's possible you get this error when you try to compile:

```LINK : fatal error LNK1104: cannot open file 'kernel32.lib```

In this case you'll need to include this file into your project manually:

1. Right click on your project
2. Go to C/C++ General > Paths and Symbols > Libraries
3. Add 'C:\Program Files\Microsoft SDKs\Windows\v7.0A\Lib\Kernel32.lib' (32-bit) or 'C:\Program Files (x86)\Microsoft SDKs\Windows\v7.0A\Lib\Kernel32.lib' (64-bit). Please note that you need to include the single quotes.

This fix is tested on Windows 7 with Microsoft Visual Studio 2010.