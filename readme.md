# Draw Feynman Diagram
## Usage
This is a modified version of a C++ Feynman Diagram auto-generation program. The original version can be found at https://www-zeuthen.desy.de/theory/capp2005/Course/czakon/Examples

## Quickstart 

1. A simple way of using this program is to use the following commands in your system CLI. Please note that you need a C++ complier installed in your system and added to system path.

```{bash}
make clean
make
make exec
```

2. After striking 'make exec' command, the generated executable will run. And one should follow the command line output to input the neccessary infomation for diagram generation.

3. The generated plots will be stored to the "plots" subdirectory. (you may need to create it)

## Next steps
1. Try to implement the tikz output for a better Feynman Diagram layout.

## Notes
1. This program is under C++11 standard, thus one should add the "std=c++11" flag to complie it.


