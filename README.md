# DeutschC
C library that translates all C keywords to their German equivalent.

## Installation
To install DeutschC you will need to download the src file in the repository and move the contents (deutsch.h and the deutsch directory)
to whatever project you will be using it in. Example:
```
MyProject/
├── main.c
├── deutsch.h
└── deutsch/
    └── (deutschc headers)
```

## Usage
To use DeutschC you will need to include the deutsch.h header to your program with ```#include "deutsch.h"```. Then you can create the rest of your program in German. To find keywords and their translation you can check the deutsch directory, use ctrl+m1 in VSCode, or just check the repository.
Note: preprocessor directives and functions defined by libraries such as the standard library are not translated.

Example program:
```
#include "deutsch.h"
#include <stdio.h>

ganze haupstaechlich(ganze argc, zeichen* argv[]) {
    printf("Hallo Welt! \n");
    zurueckkehren 0;
}
```

I am not very good with German and initially just used a lot of Google Translate for the translations. So if you think
a keyword should be changed then open a problem or pull request. <3

# DeutschC
C-Library(Bibliothek), die alle C-Schlüsselwörter in ihr deutsches Äquivalent übersetzt.das alle C-Schlüsselwörter in ihr deutsches Äquivalent übersetzt. 

## Installation
Um DeutschC zu installieren, müssen Sie die src-Datei im Repository herunterladen und den Inhalt verschieben (deutsch.h und das deutsch-Verzeichnis).
für jedes Projekt, in dem Sie es verwenden werden. Beispiel:
```
MeinProjekt/
├── hauptsaechlich.c
├── deutsch.h
└── deutsch/
    └── (deutschc headers)
```

## Wie Benutzt Man
Um DeutschC nutzen zu können, müssen Sie den deutsch.h-Header mit „#include „deutsch.h““ in Ihr Programm einbinden. Den Rest Ihres Programms können Sie dann auf Deutsch erstellen. Um Schlüsselwörter und deren Übersetzung zu finden, können Sie das deutsche Verzeichnis überprüfen, Strg+M1 in VSCode verwenden oder einfach das Repository überprüfen.
Hinweis: Präprozessoranweisungen und -funktionen, die von Bibliotheken wie der Standardbibliothek definiert werden, werden nicht übersetzt.

Beispielprogramm:
```
#include "deutsch.h"
#include <stdio.h>

ganze haupstachlich(ganze argc, zeichen* argv[]) {
    printf("Hallo Welt! \n");
    zuruckkehren 0;
}
```

Ich spreche nicht besonders gut Deutsch und habe Google Translate zunächst nur häufig für Übersetzungen genutzt. Also, wenn Sie denken
Ein Schlüsselwort sollte geändert werden und dann sollte ein Issue oder Pull Request geöffnet werden. <3
