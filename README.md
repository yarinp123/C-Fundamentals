# **Instructions**

This lab introduces basic programming in C for Unix. The reading material covers basic C programming, using the make(1) utility to compile and run programs, and the Unix man(1) facility — the traditional on-line Unix manual on command-line utilities, system calls, and C libraries.

**Programming in C**

There are many good books on the C programming language, including

- [C: A Reference Manual](https://savedparadigms.files.wordpress.com/2014/09/harbison-s-p-steele-g-l-c-a-reference-manual-5th-ed.pdf)
- The C Programming Language

and others. For the lab assignments, the students should read an introductory section of any available book on C programming; in particular, we recommend chapter: [Beginning C](https://en.m.wikibooks.org/wiki/C_Programming/Intro_exercise) from the freely available wikibook [C Programming](http://en.wikibooks.org/wiki/C_Programming). We also reccomend to read about [ASCII Table and Description ](http://www.asciitable.com/).

**Using make and writing makefiles**

There are several different versions of make(1) available, but the modern _de facto_ standard is GNU Make. GNU Make is a free software included with Linux, and its manual is available online. Students should read and understand the [introductory section](http://www.gnu.org/software/make/manual/make.html#Introduction) of the manual, s ections 2, 2.1, 2.2, 2.3, 4.1. The description of makefile syntax and make capabilities provided in the introduction is sufficient for the System Programming Laboratory course. You can read more and see an example in "Makefile examples" file.

**Unix **** MAN(1)**

MAN (short for Manual) is the traditional Unix browser for manual pages. Unix programmers and users consult man to learn about properties of unix commands, arguments and return values of library functions, configuration file formats etc. Two man pages serve as introduction to man: "man intro", which describes organization of contents of the Unix manual, and "man man", which explains how to use the man command. Please read and understand the man pages and try to use man. We will use it frequently during the lab sessions.

As part of your preparation for lab 1, you should also read about the C standard library functions: **strncmp(3), fprintf(3), fgetc(3), fputc(3), fopen(3), fclose(3).**