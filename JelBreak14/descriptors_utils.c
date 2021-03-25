//
//  descriptors_utils.c
//  JelBreak14
//
//  Created by jas0n on 3/25/21.
//

#include <sys/resource.h>
#include "descriptors_utils.h"

void increase_limits(uint32_t limit) {
    struct rlimit lim = {0};
    getrlimit(RLIMIT_NOFILE, &lim);
    lim.rlim_cur = limit;
    setrlimit(RLIMIT_NOFILE, &lim);
}
