/*
 * teachingcodes.h
 *
 *  Created on: Feb 18, 2015
 *      Author: SD4U
 */

#ifndef TEACHINGCODES_H_
#define TEACHINGCODES_H_

#define TC_BEGIN {							\
        setvbuf(stdout, NULL, _IONBF, 0);	\
        setvbuf(stderr, NULL, _IONBF, 0);	\
     }

#define TC_END {							\
	    exit(0);							\
    }

#endif /* TEACHINGCODES_H_ */
