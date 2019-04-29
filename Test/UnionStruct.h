#pragma once

typedef union Udata {
    int a;
    struct {
        int b;
        float c;
    } d;
};