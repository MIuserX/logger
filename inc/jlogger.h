#ifndef _LOGGER_DEF_H_20160914
#define _LOGGER_DEF_H_20160914

#define JLOGLEVEL_INFO  (0)
#define JLOGLEVEL_ERROR (1)
#define JLOGLEVEL_FATAL (2)

void jlogger_info(const char *_date, const char *_time, const char *_file, int _line, const char *fmt, ...);
void jlogger_error(const char *_date, const char *_time, const char *_file, int _line, const char *fmt, ...);
void jlogger_fatal(const char *_date, const char *_time, const char *_file, int _line, const char *fmt, ...);

#define JLOGGER_INFO(fmt, ...) \
    do { \
        jlogger_info(__DATE__, __TIME__, __FILE__, __LINE__, fmt, ##__VA_ARGS__); \
    } \
    while (0); \

#define JLOGGER_ERROR(fmt, ...) \
    do { \
        jlogger_error(__DATE__, __TIME__, __FILE__, __LINE__, fmt, ##__VA_ARGS__); \
    } \
    while (0); \

#define JLOGGER_FATAL(fmt, ...) \
    do { \
        jlogger_fatal(__DATE__, __TIME__, __FILE__, __LINE__, fmt, ##__VA_ARGS__); \
    } \
    while (0); \

#endif
