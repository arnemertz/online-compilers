# List of online C++ compilers

Online compilers can be useful tools to quickly compile a snippet of code without having to install a proper compiler on our computer. They can be especially useful to play with the newest language features, to share code snippets online or to compare different compilers.

The following list provides information about available online compilers and their most important features. Support for other languages than C++ is available on many of the listed websites but not covered here.
Depending on the versions of the compilers used, they support different versions of the C++ standard. See [this page](http://en.cppreference.com/w/cpp/compiler_support) for more detailed feature lists. Since C++17 is not fully standardized yet, it is marked with an asterisk, where (most of) the expected C++17 features are available.

Besides mere compilation, most online compilers also execute the compiled program. The possibilities to parametrize the compilation via compiler flags, to pass command line/runtime parameters to the executed program and to provide input for standard input vary between the different compilers.

* Table of Contents
{:toc}

## TL;DR 

| Name | Number Compilers | C++ version | Execution | Distinguishing features | Other Languages |
|----------------------------------------------------------------------------------------|:----------------:|:---------:|-------------------------------------------------------------------------------------------------------------|:---------------:|
| [Wandbox](http://melpon.org/wandbox) | 35 | C++17 | ✔️ | multiple files, very modern compilers | ✔️ |
| [Compiler Explorer (Godbolt)](http://godbolt.org) | 50+ | C++17 |  | compile to assembly as you type, on multiple compilers | ✔️ |
| [Coliru](http://coliru.stacked-crooked.com) | 2 | C++17 | ✔️ | GCC & Clang, freely editable shell command line |  |
| [Rextester](http://rextester.com/) | 3 | C++14 | ✔️ | GCC, Clang, MSVC, collaborative live editing features | ✔️ |
| [Ideone](https://ideone.com/) | 1 | C++14 | ✔️ | GCC | ✔️ |
| [Visual C++ Compiler Online](http://webcompiler.cloudapp.net/) | 1 | C++14-17 | ✔️ | up-to-date MSVC 19/2017 |  |
| [C++ Shell](http://cpp.sh/) | 1 | C++11-14 | ✔️ | GCC, interactive Stdin |  |
| [Tutorialspoint CodingGround](https://www.tutorialspoint.com/compile_cpp11_online.php) | 1 | C++11 | ✔️ | multiple files like proper IDE, GCC <br/> but sluggish web app |  |
| [Codepad](http://codepad.org/) | 1 | C++03 | ✔️ | GCC | ✔️ |
| [LoopPerfect C++ Fiddle](http://fiddle.jyt.io/) |  | |  | interactive C++ interpreter/terminal, but currently broken |  |

## The Compilers 

### [Wandbox](http://melpon.org/wandbox)
![GCC 4.4.7 .. 8.0.0](https://img.shields.io/badge/GCC-4.4.7%2D8.0.0%20%28HEAD%29-brightgreen.svg)
![Clang 3.1 .. 5.0.0](https://img.shields.io/badge/Clang-3.1%2D5.0.0%20%28HEAD%29-brightgreen.svg)
![zapcc 1.0.1](https://img.shields.io/badge/zapcc-1.0.1-brightgreen.svg)  
![C++17](https://img.shields.io/badge/C++-17-blue.svg)  
![Compiler flags: free text](https://img.shields.io/badge/flags-free%20text-brightgreen.svg)
![Runtime parameters: yes](https://img.shields.io/badge/runtime%20parameters-yes-brightgreen.svg)
![Stdin: yes](https://img.shields.io/badge/stdin-yes-brightgreen.svg)

[Wandbox](http://melpon.org/wandbox) provides pretty much all of the functionality you'd want from a typical online compiler, including support for multiple files and different editor keybindings. 
Besides the standard library, it features a few libraries including Boost (up to 1.64), Sprout and MessagePack. The compiled programs run in a sandbox environment that allows file I/O. 
The snapshot versions of GCC and Clang that are provided make it possible to play with the latest C++17 features.


### [Compiler Explorer (Godbolt)](http://godbolt.org)
![GCC 4.4.7 .. 8.0.0](https://img.shields.io/badge/GCC-4.4.7%2D8.0.0%20%28snapshot%29-brightgreen.svg)
![Clang 3.0 .. 5.0.0](https://img.shields.io/badge/Clang-3.0%2D5.0.0%20%28trunk%29-brightgreen.svg)
![MSVC 19/2017 (x86, x64)](https://img.shields.io/badge/MSVC-19%2F2017%20%28x86%2C%20x64%29-brightgreen.svg)
![icc 13, 16, 17](https://img.shields.io/badge/icc-13%2F16%2F17-brightgreen.svg)
![zapcc 190308](https://img.shields.io/badge/zapcc-190308-brightgreen.svg)
![PowerPC gcc 4.8](https://img.shields.io/badge/PowerPC%20gcc-4.8-brightgreen.svg)
![PowerPC 64 6.3.0](https://img.shields.io/badge/PowerPC%2064-6.3.0-brightgreen.svg)
![MSP430 gcc 4.5.3 .. 6.2.1](https://img.shields.io/badge/MSP430%20gcc-4.5.3%2D6.2.1-brightgreen.svg)
![MIPS gcc 5.4 (32/64 bit, el)](https://img.shields.io/badge/MIPS%20gcc-5.4%20%2832%2F64%20bit%2C%20el%29-brightgreen.svg)
![elcc 0.1.33, 0.1.34](https://img.shields.io/badge/elcc-0.1.33%2F0.1.34-brightgreen.svg)
![AVR gcc 4.5.4, 4.6.4](https://img.shields.io/badge/AVR%20gcc-4.5.4%2F4.6.4-brightgreen.svg)
![ARM64 gcc 5.4](https://img.shields.io/badge/ARM64%20gcc-5.4-brightgreen.svg)
![ARM gcc 4.5.4 .. 5.4.1](https://img.shields.io/badge/ARM%20gcc-4.5.4%2D5.4.1-brightgreen.svg)
![ARM CL 2017 RTW](https://img.shields.io/badge/ARM%20CL-2017%20RTW-brightgreen.svg)  
![C++17](https://img.shields.io/badge/C++-17-blue.svg)  
![Compiler flags: free text](https://img.shields.io/badge/flags-free%20text-brightgreen.svg)

[Compiler Explorer](http://godbolt.org) is a compile-as-you-type IDE with a unique feature as it presents the assembly produced by the compilers. The resulting assembler can be color-mapped to the originating C++ code. It supports the use of different sources and multiple compilers at the same time, so we can compare the assembly produced by different code and/or different compilers, optimization flags, etc. 
Compiler explorer can be found on [GitHub](https://github.com/mattgodbolt/compiler-explorer) and can be used locally.
Currently, the compiled code can **not** be executed, but there is an [open GitHub issue](https://github.com/mattgodbolt/compiler-explorer/issues/429) for this feature.


### [Coliru](http://coliru.stacked-crooked.com)
![GCC 4.6 .. 7.1](https://img.shields.io/badge/GCC-4.6%2D7.1-brightgreen.svg)
![Clang 3.8](https://img.shields.io/badge/Clang-3.8-brightgreen.svg)  
![C++17](https://img.shields.io/badge/C++-17-blue.svg)  
![Compiler flags: free text](https://img.shields.io/badge/flags-free%20text-brightgreen.svg)
![Runtime parameters: yes](https://img.shields.io/badge/runtime%20parameters-yes-brightgreen.svg)
![Stdin: yes](https://img.shields.io/badge/stdin-shell%2Bpipe-brightgreen.svg)

[Coliru](http://coliru.stacked-crooked.com) provides an editor and a freely editable Linux shell command line, which makes it relatively powerful. For example, you can compare the outputs of both Clang and GCC by issuing the commands for compilation and execution for both compilers. Editing of multiple files at once is not supported, but since the code you share is saved in an archive you can use that to prepare multiple files (see the [FAQ](https://docs.google.com/document/d/18md3rLdgD9f5Wro3i7YYopJBFb_6MPCO8-0ihtxHoyM/edit) for an example). It is also possible to download e.g. a Gist via `curl` before the compilation.
Coliru provides a public API, so it can, for example, be integrated into websites [cppreference.com](cppreference.com), which uses Coliru for its runnable examples.


### [Rextester](http://rextester.com/)

![GCC 5.4.0](https://img.shields.io/badge/GCC-5.4.0-brightgreen.svg)
![Clang 3.8.0](https://img.shields.io/badge/Clang-3.8.0-brightgreen.svg) 
![MSVC 19/2017](https://img.shields.io/badge/MSVC-19%2F2017-brightgreen.svg)  
![C++14](https://img.shields.io/badge/C++-14-blue.svg)  
![Compiler flags: free text](https://img.shields.io/badge/flags-free%20text-brightgreen.svg)
![Runtime parameters: no](https://img.shields.io/badge/runtime%20parameters-no-red.svg)
![Stdin: yes](https://img.shields.io/badge/stdin-yes-brightgreen.svg)

[Rextester](http://rextester.com/) is a standard online IDE that allows to edit, compile, execute and share single C++ files. As a distinguishing feature, it allows creating live editing sessions so that multiple people can edit the same source simultaneously and see each other's edits in real time.


### [Ideone](https://ideone.com/)
![GCC 6.3.0](https://img.shields.io/badge/GCC-6.3.0-brightgreen.svg)  
![C++14](https://img.shields.io/badge/C++-14-blue.svg)  
![Compiler flags: free text](https://img.shields.io/badge/flags-fix-red.svg)
![Runtime parameters: no](https://img.shields.io/badge/runtime%20parameters-no-red.svg)
![Stdin: yes](https://img.shields.io/badge/stdin-yes-brightgreen.svg)

[Ideone](https://ideone.com/) is a standard online IDE that allows to edit, compile, execute and share single C++ files. 


### Visual C++ Compiler Online

| **URL**                | [http://webcompiler.cloudapp.net/](http://webcompiler.cloudapp.net/)
| **Compilers**          | MSVC 19/2017 (x86)
| **C++ Version**        | C++14
| **Compiler flags**     | reduced set
| **Runtime parameters** | yes
| **Stdin**              | no

Microsoft's showcase for its most up-to-date compiler. It allows single file compilation, running the executable after compilation is optional.


### C++ Shell

| **URL**                | [http://cpp.sh/](http://cpp.sh/)
| **Compilers**          | GCC 4.9.2
| **C++ Version**        | C++11, partially C++14
| **Compiler flags**     | reduced set
| **Runtime parameters** | no
| **Stdin**              | static or interactive

Another single file compilation IDE, but with the rare feature of interactive stdin input. The web application seems to hang sometimes during compilation or execution. 


### Tutorialspoint CodingGround

| **URL**                | [https://www.tutorialspoint.com/compile_cpp11_online.php](https://www.tutorialspoint.com/compile_cpp11_online.php)
| **Compilers**          | GCC 4.8.5
| **C++ Version**        | C++11
| **Compiler flags**     | yes
| **Runtime parameters** | no
| **Stdin**              | yes

An online IDE with multiple files. The whole web application seems to be sluggish at times, I could not register to try out the features that require an account login like saving or uploading whole projects (broken link/unresponsive web app). 


### Codepad

| **URL**                | [http://codepad.org/](http://codepad.org/)
| **Compilers**          | GCC 4.1.2
| **C++ Version**        | C++03
| **Compiler flags**     | fixed
| **Runtime parameters** | no
| **Stdin**              | no

Codepad can be unintuitive - pasting new code at the URL of previously pasted code will return to the original code. The code will be compiled and executed as-is without any possibility to further parametrize it.


### LoopPerfect C++ Fiddle

| **URL**                | [http://fiddle.jyt.io/](http://fiddle.jyt.io/)
| **Compilers**          | unknown
| **C++ Version**        | unknown
| **Compiler flags**     | N/A
| **Runtime parameters** | N/A
| **Stdin**              | N/A

C++ Fiddle claims to be an interactive C++ interpreter/terminal but seems to be broken, or the interface is so non-obvious that is should be considered broken.


