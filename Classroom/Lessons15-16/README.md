## Строки в C++

Строка - массив переменных типа char. Для объявления используется конструкция:

```C++
char str[size]; // str - имя переменной, size - количество символов. 
```
Для работы со строками используются функции из заголовочного файла `<cstring>` (или string.h).

Некоторые из них:
- `size_t strlen ( const char * str )` - возвращает значение длины строки
- `char * strcpy ( char * destination, const char * source )` - копирует строку source в строку destination, возвращает destination
- `char * strcat ( char * destination, const char * source )` - добавляет к строке destination строку source, возвращает destination
- `int strcmp ( const char * str1, const char * str2 )` - сравнивает 2 строки; возвращаемое значение: =0 - строки равны, >0 - строка str1 больше str2, <0 - строка str1 меньше str2
- `char * strstr ( char * str1, const char * str2 )` - возвращает позицию в строке str1, начиная с которой встечается str2; в случае отсутствия возвращает nullptr

## Файлы в C++

Необходим заголовочный файл `<fstream>`.

```C++
ifstream fin("filename_in.txt"); //открываем файл для работы на чтение; можно не .txt, например, .html
char buffer[256];
fin >> buffer; //считываем строку из файла (до пробела/переноса строки), связанного в файловым потоком fin в buffer
cout << buffer;
fin.getline(buffer, 256); //считываем строку из файла (до переноса строки), связанного в файловым потоком fin в buffer
fin.close(); //закрываем файл

ofstream fout("filename_out.txt"); //открываем файл для работы на запись; можно не .txt, например, .html
fout << buffer; //выводим значение buffer в файл, связанный с файловым потоком fout
fout.close(); //закрываем файл
```

## HTML

```HTML
<!DOCTYPE html>
<html>
<head>
<title> Название страницы </title>
</head>
<body>

<h1> Заголовок </h1>
<p> Абзац </p>
<img src="имя картинки с расширением">
</body>
</html>
```
