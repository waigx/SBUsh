/*
 *
 *  This file is part of SBUsh.
 *        SBUsh is a simple shell implementation, basically, it is
 *  an academic project of CSE506 of Stony Brook University in Spring 
 *  2015. For more details, please refer to README.md.
 *
 *  Copyright (C) 2015 Yigong Wang <yigwang@cs.stonybrook.edu>
 * 
 *
 *  SBUsh is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 * 
 *  SBUsh is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 * 
 *  You should have received a copy of the GNU General Public License
 *  along with SBUsh.  If not, see <http://www.gnu.org/licenses/>.
 *
 */


#ifndef _LIBCOMMON_H
#define _LIBCOMMON_H


#define PS_MAX_LEN 512
#define DIR_MAX_DEPTH 255
#define MAXLINE 1024
#define HOSTNAME_FILE "/proc/sys/kernel/hostname"

#define NULL 0x0

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

#define PATH_TYPE_NON -1
#define PATH_TYPE_FIL 0
#define PATH_TYPE_DIR 1


char ** setopt(const char *, const char *, char **);
char * getopt(char *, const char *, char **);
void echoerr(const char *, const char *, const char *);

#endif
