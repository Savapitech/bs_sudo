/*
** EPITECH PROJECT, 2024
** radar
** File description:
** _
*/

#ifndef SECURED_H
    #include "colors.h"
    #include "hashtable.h"
    #include "my.h"
    #define SECURED_H
    #define OMIT
    #define RETURN_SUCCESS 0
    #define RETURN_FAILURE 84
    #define FAILURE_MSG(str) (e_puterr(str "\n"), RETURN_FAILURE)
    #define FAILURE_MSG_PTR(str) (e_puterr(str "\n"), NULL)

    #ifdef R_DEBUG_MODE
        #define HEAD __FILE_NAME__, __LINE__

        #define HEAD_FMT_FILE BOLD BLUE "%s" RESET
        #define HEAD_FMT_LINE ":" BOLD PURPLE "%d" RESET

        #define HEAD_FMT HEAD_FMT_FILE HEAD_FMT_LINE "  "

        #define ERR(fmt, ...) my_printf(fmt, __VA_ARGS__)
        #define DEBUG_INTERNAL(fmt, ...) ERR(HEAD_FMT fmt, HEAD, __VA_ARGS__)

        #define MY_DEBUG(fmt, ...) DEBUG_INTERNAL(fmt, __VA_ARGS__)
        #define MY_DEBUG_MSG(msg) DEBUG_INTERNAL("%s\n", msg)
    #else

        #define MY_DEBUG_MSG(msg) OMIT
        #define MY_DEBUG(fmt, ...) OMIT

        #define MY_DEBUG_CALL(func, ...) OMIT
        #define MY_DEBUG_USED __attribute__((unused))
    #endif
#endif /* SECURED_H */
