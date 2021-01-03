1 - Install Msys2

2 - Install GTK

3 - Install Glade

4 - Install the libraries that permited a comunication between the language C and the GTK

5 - Configure enviroment variable
- shell Msys2
- local of file: ~/.bash_profile
export PATH=/usr/lib/pkgconfig:/usr/share/pkgconfig:/lib/pkgconfig:/c/msys64/mingw64/lib/pkgconfig
export PKG_CONFIG_PATH=/usr/lib/pkgconfig:/usr/share/pkgconfig:/lib/pkgconfig:/c/msys64/mingw64/lib/pkgconfig

- windows by GUI

6 - Access the directory of project

7 - Process of Compilation in the shell Msys:
gcc -o gtk gtk.c -Wall `pkg-config --cflags --libs gtk+-3.0` -export-dynamic

8 - Run program in the shell Msys2 
./gtk (shell Msys2)
gtk
 (sheel Windows)

Obs.: 
- In the shell Msys2 the program is compiled and executed. But in the shell of Windows the program is only executed
- The file of bytecode is started correctly only when the file of template has on same directory. What do make?
- In the computers in that a variable of environment not has configured is show a message of error about a file of dll not encountred. What do make?

Info:
- Path Glade and GGC v10.2.0
C:\msys64\mingw64\bin
- Path GGC v9.2.0
C:\MinGW\bin
- In the Msys2 the folders /bin and /usr/bin are same
- The pkgconfig is a software what gerency the search of the dependencies in the moment of the compilation