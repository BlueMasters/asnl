/****************************************************************************
 * Copyright 2016 BlueMasters
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#ifndef ASN_L_WRITER__H
#define ASN_L_WRITER__H

#include "AsnLMsg.h"
#include <Arduino.h>

class AsnLWriter {

public:
    AsnLWriter(AsnLMsg &aMsg) : _aMsg(aMsg) {};
    void init();
    int integer(int len, int32_t value);
    int uinteger(int len, uint32_t value);
    int string(String txt);
    int structure();
    int endStructure();
    int close();
    int fixOk();
    AsnLMsg& msg();

private:
    AsnLMsg &_aMsg;
    int _fix;

};

#endif
