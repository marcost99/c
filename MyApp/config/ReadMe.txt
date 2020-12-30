1 - Configure enviroment variable
- shell msys
~/.bash_profile
export PATH=/usr/lib/pkgconfig:/usr/share/pkgconfig:/lib/pkgconfig:/c/msys64/mingw64/lib/pkgconfig
export PKG_CONFIG_PATH=/usr/lib/pkgconfig:/usr/share/pkgconfig:/lib/pkgconfig:/c/msys64/mingw64/lib/pkgconfig
- windows via GUI

2 - Acess directory by project

3 - Compile using on shell Msys: 
gcc -o MyAppWin myapp.c -Wall `pkg-config --cflags --libs gtk+-3.0` -export-dynamic



4 - Run using on shell Msys:: 
./MyAppWin (shell msys)
MyAppWin
 (sheel Windows)

Obs.: No shel msys compila e executa o programa. No Windows apenas executa o programa

Correções: verificar Warning

Info:
- Path Glade and GGC v10.2.0
C:\msys64\mingw64\bin
- Path GGC v9.2.0
C:\MinGW\bin