#define VERIFY_INT(e,t) verify_int(e, t, #t)
#define VERIFY_STR(e,t) verify_str(e, t, #t)
#define VERIFY_NULL(t) verify_null(t, #t)
#define VERIFY_NOT_NULL(t) verify_not_null(t, #t)

extern int Tests_Passed;
extern int Tests_Failed;

void verify_int(int expected, int result, char test[]);
void verify_str(char expected[], char result[], char test[]);
void verify_null(void *result, char test[]);
void verify_not_null(void *result, char test[]);
