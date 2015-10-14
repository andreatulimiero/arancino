#define LOG_BUILD 1
#define DEBUG_BUILD 1
#define INFO_BUILD  1
#define WARN_BUILD  1
#define ERROR_BUILD 1
#define LOG_FILENAME "FindOEP.log"
static FILE * fd = fopen("TESTTEST.log","w");

#define MYDEBUG(fmt, ...) \
        do { if (DEBUG_BUILD) fprintf(stderr, "%s:%d:%s(): " fmt, __FILE__, \
                                __LINE__, __FUNCTION__, __VA_ARGS__); } while (0)

#define MYINFO(fmt, ...) \
            do { if (INFO_BUILD) fprintf(stderr,"[INFO] "fmt, __VA_ARGS__); } while (0)


#define MYWARN(fmt, ...) \
            do { if (WARN_BUILD) fprintf(stderr,"[WARNING] "fmt, __VA_ARGS__); } while (0)

#define MYERRORE(fmt, ...) \
            do { if (ERROR_BUILD) fprintf(stderr,"[ERROR] "fmt, __VA_ARGS__); } while (0)

#define MYLOG(fmt, ...) \
	do { if (LOG_BUILD){ fprintf(fd,"[INFO] "fmt, __VA_ARGS__);} } while (0)

#define CLOSELOG()\
	do { if (LOG_BUILD){ fclose(fd);}}while (0)
