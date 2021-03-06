
#pragma once

#include <nan.h>
#include <node.h>
#include <girepository.h>

#include "gi.h"

using v8::Function;
using v8::Local;
using v8::MaybeLocal;
using v8::String;
using Nan::FunctionCallbackInfo;
using Nan::WeakCallbackInfo;

namespace GNodeJS {

  namespace Throw {

    void GError(const char* domain, GError* error);

    void NotEnoughArguments (int expected, int actual);

    void InvalidType (GIArgInfo *info, GITypeInfo *type_info, Local<Value> value);

    void InvalidReturnValue (GITypeInfo *type_info, Local<Value> value);

    void UnsupportedCallback (GIBaseInfo* info);

  }; // namespace Throw

}; // namespace GNodeJS
