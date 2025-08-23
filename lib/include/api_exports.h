#ifdef API_EXPORTS
#define __APP_API __declspec(dllexport)
#else
#define __APP_API __declspec(dllimport)
#endif