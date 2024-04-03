// macro definition for control flow keywords translated to german
// makrodefinition fur kontrollflussschlusselworter ins deutsche ubersetzt

#ifdef _DEUTSCH_CONTROLFLOW_H
    #error "deutsch/controlflow.h included twice"
    #error "deutsch/control.h zweimal enthalten"
#endif

#ifndef _DEUTSCH_CONTROLFLOW_H
    #define _DEUTSCH_CONTROLFLOW_H

    #ifndef brechen
        #define brechen break
    #endif
    
    #ifndef auswahl
        #define auswahl case
    #endif
    
    #ifndef weitermachen
        #define weitermachen continue
    #endif
    
    #ifndef standardfall
        #define standardfall default
    #endif
    
    #ifndef machen
        #define machen do
    #endif
    
    #ifndef anders
        #define anders else
    #endif
    
    #ifndef fuer
        #define fuer for
    #endif
    
    #ifndef gehenzu
        #define gehenzu goto
    #endif
    
    #ifndef wenn
        #define wenn if
    #endif

    #ifndef zurueckkehren
        #define zurueckkehren return
    #endif

    #ifndef schalten
        #define schalten switch
    #endif

    #ifndef nichtvorzeichen
        #define nichtvorzeichen unsigned
    #endif

    #ifndef vorzeichen
        #define vorzeichen signed
    #endif

#endif // _DEUTSCH_CONTROLFLOW_H