/*
 * errmap.h
 *
 *  Created on: Apr 07, 2017
 *      Author: Jeroen van der Heijden <jeroen@transceptor.technology>
 */

#ifndef SIRIDB_ERRMAP_H_
#define SIRIDB_ERRMAP_H_

#define ERR_MEM_ALLOC       -1
#define ERR_SOCK_FD         -2
#define ERR_SOCK_CONNECT    -3
#define ERR_PENDING         -4
#define ERR_THREAD_START    -5
#define ERR_NO_REPLY        -6
#define ERR_CANCELLED       -7
#define ERR_INVALID_STAT    -8
#define ERR_CORRUPT         -9
#define ERR_DESTROYED       -10
#define ERR_OVERWRITTEN     -11
#define ERR_SOCK_WRITE      -12
#define ERR_OCCUPIED        -13
#define ERR_UNKNOWN         -100

const char * siridb_strerror(int err);

#endif /* SIRIDB_ERRMAP_H_ */
