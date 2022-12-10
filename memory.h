//
// Created by tblyl on 2022/12/10.
//

#ifndef CLOX_MEMORY_H
#define CLOX_MEMORY_H

#include "common.h"

#define GROW_CAPACITY(capacity) \
    ((capacity) < 8 ? 8 : (capacity * 2))


#define GROW_ARRAY(type, pointer, oldCount, newCount) \
    (type*) reallocate(pointer, sizeof(type)*(oldCount), sizeof(type) * (newCount))

#define FREE_ARRAY(type, pointer, capacity) \
    reallocate(pointer, sizeof (type) * capacity, 0)

void *reallocate(void *pointer, size_t oldSize, size_t newSize);

#endif //CLOX_MEMORY_H
