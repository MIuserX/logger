#include "../inc/jlogger.h"
#include <stdio.h>
#include <stdarg.h>

// add a comment

int jlogger_level = 0;

void jlogger_info(const char *_date, const char *_time, const char *_file, int _line, const char *fmt, ...)
{
    va_list argptr;

    if (jlogger_level == JLOGLEVEL_INFO) {
        va_start(argptr, fmt);
        printf("%s %s/%s/line %d/INFO: ", _date, _time, _file, _line);
        vprintf(fmt, argptr);
        printf("\n");
    }
}

void jlogger_error(const char *_date, const char *_time, const char *_file, int _line, const char *fmt, ...)
{
    va_list argptr;

    if (jlogger_level == JLOGLEVEL_ERROR) {
        va_start(argptr, fmt);
        printf("%s %s/%s/line %d/ERROR: ", _date, _time, _file, _line);
        vprintf(fmt, argptr);
        printf("\n");
    }
}

void jlogger_fatal(const char *_date, const char *_time, const char *_file, int _line, const char *fmt, ...)
{
    va_list argptr;

    if (jlogger_level == JLOGLEVEL_FATAL) {
        va_start(argptr, fmt);
        printf("%s %s/%s/line %d/FATAL: ", _date, _time, _file, _line);
        vprintf(fmt, argptr);
        printf("\n");
    }
}
