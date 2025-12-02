# Vetores (Grades Average) — MediaMaker

Simple C++ program that reads a fixed number of student grades, validates them, and prints the class average.

## Files

- `vetores.cpp` — Main program. Uses a dynamically-allocated array (pointer) to store grades.

## Overview

The program prompts the user to input `GRADES_VEC` integer grades (currently set to 3). It validates each grade to ensure it's between 0 and 20. If any input is out-of-range the program prints an error and exits with a non-zero status. Otherwise it computes and prints the average (as a `double`).

## Build

Using the included VS Code C/C++ build task (GCC/g++):

```powershell
# Run the VS Code task or run g++ directly from PowerShell:
C:\msys64\ucrt64\bin\g++.exe -g vetores.cpp -o vetores.exe
```

If you use the workspace task, select `C/C++: g++.exe build active file` or `C/C++: gcc.exe build active file` depending on your toolchain.

## Run

From PowerShell in the project directory:

```powershell
.\vetores.exe
```

Example session:

```
Welcome to MediaMaker!

Input the 1 grade:
10

Input the 2 grade:
11

Input the 3 grade:
13

Media of class is 11.3333
```

