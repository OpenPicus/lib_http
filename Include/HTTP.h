/** \file HTTP.h
 *  \brief HTTP library
 */

/**
\mainpage Main page

 Library to manage HTTP requests.
*/

#define ARRAY_SIZE(x) (sizeof(x))

/*****************************************************************************
        HTTP function declarations
*****************************************************************************/

int HTTP_GET(TCP_SOCKET socket, char * host, char * path_data, char * custom_header, char * header, int headersize, char * body, int bodysize, int timeout);
int HTTP_GETsimple(TCP_SOCKET socket, char * host, char * path_data, char * header, int headersize, char * body, int bodysize);
int HTTP_POST(TCP_SOCKET socket, char * host, char * path, char * custom_header, char * CType, char * data, char * header, int headersize, char * body, int bodysize, int timeout);
int HTTP_POSTsimple(TCP_SOCKET socket, char * host, char * path, char * data, char * header, int headersize, char * body, int bodysize);
void HTTP_URLEncode(char * dest, char * src);
int HTTP_URLEncodeLen(char * str);
void HTTP_URLDecode(char * dest, char * src);
int HTTP_URLDecodeLen(char * str);
int HTTP_Read(TCP_SOCKET socket, char * header, int headersize, char * body, int bodysize, int timeout);
