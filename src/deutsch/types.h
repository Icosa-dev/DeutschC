// macro definition for datatypes translated to german
// makrodefinition fur datentypen ins deutsche ubersetzt

#ifdef _DEUTSCH_TYPES_H
    #error "deutsch/types.h included twice"
    #error "deutsch/types.h zweimal enthalten"
#endif

#ifndef _DEUTSCH_TYPES_H
    #define _DEUTSCH_TYPES_H

    #ifndef konst
        #define konst const
    #endif

    #ifndef automatisch
        #define automatisch auto
    #endif

    #ifndef ganze
        #define ganze int
    #endif

    #ifndef zeichen
        #define zeichen char
    #endif

    #ifndef schweben
        #define schweben float
    #endif

    #ifndef doppelt
        #define doppelt double
    #endif 

    #ifndef kurz
        #define kurz short
    #endif

    #ifndef lang
        #define lang long
    #endif

    #ifndef strukt
        #define strukt struct
    #endif

    #ifndef typdef
        #define typdef typedef
    #endif

    #ifndef ungultig
        #define ungultig void
    #endif

    

#endif // _DEUTSCH_TYPES_H