// macro definition for miscellaneous keywords translated to german
// makrodefinition fur verschiedene Schlusselworter ubersetzt ins deutsche

#ifdef _DEUTSCH_MISC_H
    #error "deutsch/misc.h included twice"
    #error "deutsch/misc.h zweimal enthalten"
#endif

#ifndef _DEUTSCH_MISC_H
    #define _DEUTSCH_MISC_H

    #ifndef registrieren
        #define registrieren register
    #endif
    
    #ifndef fluchtig
        #define fluchtig volatile
    #endif
    
    #ifndef haupstachlich
        #define haupstachlich main
    #endif
#endif