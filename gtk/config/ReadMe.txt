1 - Instalar o Msys

2 - Instalar o GTK

3 - Instalar o Glade

4 - Instalar as bibliotecas que permitem a comunicaçaõ entre a linguagem C e o GTK

5 - Configure enviroment variable
- shell msys
- arquivo: ~/.bash_profile
export PATH=/usr/lib/pkgconfig:/usr/share/pkgconfig:/lib/pkgconfig:/c/msys64/mingw64/lib/pkgconfig
export PKG_CONFIG_PATH=/usr/lib/pkgconfig:/usr/share/pkgconfig:/lib/pkgconfig:/c/msys64/mingw64/lib/pkgconfig

- windows via GUI

6 - Acess directory by project

7 - Compile using on shell Msys: 
gcc -o gtk gtk.c -Wall `pkg-config --cflags --libs gtk+-3.0` -export-dynamic



8 - Run using on shell Msys:: 
./gtk (shell msys)
gtk
 (sheel Windows)

Obs.: 
- No shell msys compila e executa o programa. No shell do Windows apenas executa o programa
- O executável só funciona corretamente quando o arquivo de template está no mesmo diretório. Como corrigir?
- Em computadores em que a variável de ambiente não está configurada aparece um erro mensagem de erro informada a inexistência de uma dll. Como corrigir? Linkagem estática?

Info:
- Path Glade and GGC v10.2.0
C:\msys64\mingw64\bin
- Path GGC v9.2.0
C:\MinGW\bin