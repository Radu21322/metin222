// XGetopt.h  Version 1.2
//
// Author:  Hans Dietrich
//          hdietrich2@hotmail.com
//
// This software is released into the public domain.
// You are free to use it in any way you like.
//
// This software is provided "as is" with no expressed
// or implied warranty.  I accept no liability for any
// damage or loss of business that this software may cause.
//
///////////////////////////////////////////////////////////////////////////////

#ifndef XGETOPT_H
#define XGETOPT_H

extern int optind, opterr, optreset;
extern TCHAR *optarg;

int getopt(int argc, TCHAR *argv[], TCHAR *optstring);

extern char* _optarg;
extern int _optind;

int getopt(int argc, char *const argv[], const char *optstring);

#endif //XGETOPT_H
//martysama0134's dcf42890919f0da1c0e6dbb7f15bc7ec
