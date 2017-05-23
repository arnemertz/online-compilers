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

### Wandbox

| **URL**                | [http://melpon.org/wandbox](http://melpon.org/wandbox)
| **Compilers**          | GCC 4.4.7 .. 8.0.0 (HEAD)  <br/>  Clang 3.1 .. 5.0.0 (HEAD)  <br/>  zapcc 1.0.1
| **C++ version**        | C++17*
| **Compiler flags**     | dropdown selection + free text
| **Runtime parameters** | yes
| **Stdin**              | yes
 
Wandbox provides pretty much all of the functionality you'd want from a typical online compiler, including support for multiple files and different editor keybindings. 
Besides the standard library, it features a few libraries including Boost (up to 1.64), Sprout and MessagePack. The compiled programs run in a sandbox environment that allows file I/O. 
The snapshot versions of GCC and Clang that are provided make it possible to play with the latest C++17 features.


### Compiler Explorer (Godbolt)

| **URL**                | [http://godbolt.org](http://godbolt.org)
| **Compilers**          | GCC 4.4.7 .. 8.0.0 (snapshot) <br/>  Clang 3.0 .. 5.0.0 (trunk) <br/>  MSVC 19/2017 (x86, x64) <br/>  icc 13, 16, 17 <br/>  zapcc 190308 <br/>  PowerPC gcc 4.8, PowerPC 64 6.3.0 <br/>  MSP430 gcc 4.5.3 .. 6.2.1 <br/>  MIPS gcc 5.4 (32/64 bit, el) <br/>  elcc 0.1.33, 0.1.34 <br/>  AVR gcc 4.5.4, 4.6.4 <br/>  ARM64 gcc 5.4 <br/>  ARM gcc 4.5.4 .. 5.4.1 <br/>  ARM CL 2017 RTW
| **C++ Version**        | C++17*
| **Compiler flags**     | free text
| **Runtime parameters** | N/A
| **Stdin**              | N/A

Compiler Explorer is a compile-as-you-type IDE with a unique feature as it presents the assembly produced by the compilers. The resulting assembler can be color-mapped to the originating C++ code. It supports the use of different sources and multiple compilers at the same time, so we can compare the assembly produced by different code and/or different compilers, optimization flags, etc. 
Compiler explorer can be found on [GitHub](https://github.com/mattgodbolt/compiler-explorer) and can be used locally.
Currently, the compiled code can **not** be executed, but there is an [open GitHub issue](https://github.com/mattgodbolt/compiler-explorer/issues/429) for this feature.


### Coliru

| **URL**                | [http://coliru.stacked-crooked.com](http://coliru.stacked-crooked.com)
| **Compilers**          | GCC 4.6 .. 7.1 <br/>  Clang 3.8 
| **C++ Version**        | C++17*
| **Compiler flags**     | free text
| **Runtime parameters** | free text
| **Stdin**              | via linux shell pipe

Coliru provides an editor and a freely editable Linux shell command line, which makes it relatively powerful. For example, you can compare the outputs of both Clang and GCC by issuing the commands for compilation and execution for both compilers. Editing of multiple files at once is not supported, but since the code you share is saved in an archive you can use that to prepare multiple files (see the [FAQ](https://docs.google.com/document/d/18md3rLdgD9f5Wro3i7YYopJBFb_6MPCO8-0ihtxHoyM/edit) for an example). It is also possible to download e.g. a Gist via `curl` before the compilation.
Coliru provides a public API, so it can, for example, be integrated into websites [cppreference.com](cppreference.com), which uses Coliru for its runnable examples.


### [Rextester](http://rextester.com/)

![GCC 5.4.0](https://img.shields.io/badge/GCC-5.4.0-brightgreen.svg)
![Clang 3.8.0](https://img.shields.io/badge/Clang-3.8.0-brightgreen.svg) 
![MSVC 19/2017](https://img.shields.io/badge/MSVC-19%2F2017-brightgreen.svg)  
![C++14](https://img.shields.io/badge/C++-03%2F11%2F14-blue.svg)  
![Compiler flags: free text](https://img.shields.io/badge/flags-free%20text-brightgreen.svg)
![Runtime parameters: no](https://img.shields.io/badge/runtime%20parameters-no-red.svg)
![Stdin: yes](https://img.shields.io/badge/stdin-yes-brightgreen.svg)

[Rextester](http://rextester.com/) is a standard online IDE that allows to edit, compile, execute and share single C++ files. As a distinguishing feature, it allows creating live editing sessions so that multiple people can edit the same source simultaneously and see each other's edits in real time.


### Ideone

| **URL**                | [https://ideone.com/](https://ideone.com/)
| **Compilers**          | GCC 6.3.0
| **C++ Version**        | C++14
| **Compiler flags**     | fixed
| **Runtime parameters** | none
| **Stdin**              | yes

Ideone is a standard online IDE that allows to edit, compile, execute and share single C++ files. 


### [Visual C++ Compiler Online](http://webcompiler.cloudapp.net/)

![](https://img.shields.io/badge/MSVC-19/2017%20(x86)-brightgreen.svg)    
![](https://img.shields.io/badge/C%2B%2B-14-blue.svg)  
![](https://img.shields.io/badge/flags-reduced%20set-brightgreen.svg)
![](https://img.shields.io/badge/runtime%20parameters-yes-brightgreen.svg)
![](https://img.shields.io/badge/stdin-no-red.svg)  

[Microsoft's showcase](http://webcompiler.cloudapp.net/) for its most up-to-date compiler. It allows single file compilation, running the executable after compilation is optional.


### [C++ Shell](http://cpp.sh/)

![](https://img.shields.io/badge/GCC-4.9.1-brightgreen.svg)  
![](https://img.shields.io/badge/C%2B%2B-11/~14-blue.svg)  
![](https://img.shields.io/badge/flags-reduced%20set-brightgreen.svg)
![](https://img.shields.io/badge/runtime%20parameters-no-red.svg)
![](https://img.shields.io/badge/stdin-static|interactive-brightgreen.svg)    
![](https://img.shields.io/badge/interactive-stdin-brightgreen.svg)

Another single file compilation IDE, but with the rare feature of interactive stdin input. The web application seems to hang sometimes during compilation or execution. 


### [Tutorialspoint CodingGround](https://www.tutorialspoint.com/compile_cpp11_online.php)

![](https://img.shields.io/badge/GCC-4.8.5-brightgreen.svg)  
![](https://img.shields.io/badge/C%2B%2B-11-blue.svg)  
![](https://img.shields.io/badge/flags-yes-brightgreen.svg)
![](https://img.shields.io/badge/runtime%20parameters-yes-brightgreen.svg)
![](https://img.shields.io/badge/stdin-yes-brightgreen.svg)  
![](https://img.shields.io/badge/multi%20file-yes-brightgreen.svg)


An online IDE with multiple files. The whole web application seems to be sluggish at times, I could not register to try out the features that require an account login like saving or uploading whole projects (broken link/unresponsive web app). 


### [Codepad](http://codepad.org/)

![](https://img.shields.io/badge/GCC-4.1.2-brightgreen.svg)  
![](https://img.shields.io/badge/C%2B%2B-03-blue.svg)  
![](https://img.shields.io/badge/flags-fixed-brightgreen.svg)
![](https://img.shields.io/badge/runtime%20parameters-no-red.svg)
![](https://img.shields.io/badge/stdin-no-red.svg)

[Codepad](http://codepad.org/) can be unintuitive - pasting new code at the URL of previously pasted code will return to the original code. The code will be compiled and executed as-is without any possibility to further parametrize it.


### [LoopPerfect C++ Fiddle](http://fiddle.jyt.io/)

![](https://img.shields.io/badge/status-broken-lightgrey.svg)

[C++ Fiddle](http://fiddle.jyt.io/) claims to be an interactive C++ interpreter/terminal but seems to be broken, or the interface is so non-obvious that is should be considered broken.


