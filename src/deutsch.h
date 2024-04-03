// Text replacement macros which replaces keywords in C with german words
// Textersetzungsmakros, die Schlüsselwörter in C durch deutsche Wörter ersetzen

#ifdef _DEUTSCH_H
    #error "deutsch.h included twice"
    #error "deutsch.h zweimal enthalten"
#endif

#ifndef _DEUTSCH_H
    #define _DEUTSCH_H
    
    // control flow keywords
    #include "deutsch/controlflow.h"

    // misc keywords
    #include "deutsch/misc.h"

    // datatype keywords
    #include "deutsch/types.h"

#endif // _DEUTSCH_H