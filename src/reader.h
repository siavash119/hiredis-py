#ifndef __READER_H
#define __READER_H

#include "hiredis.h"

typedef struct {
    PyObject_HEAD
    void *reader;
} hiredis_ReaderObject;

extern PyTypeObject hiredis_ReaderType;

#endif
