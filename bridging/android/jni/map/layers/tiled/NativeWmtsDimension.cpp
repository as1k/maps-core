// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wmts.djinni

#include "NativeWmtsDimension.h"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeWmtsDimension::NativeWmtsDimension() = default;

NativeWmtsDimension::~NativeWmtsDimension() = default;

auto NativeWmtsDimension::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeWmtsDimension>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.key)),
                                                           ::djinni::get(::djinni::List<::djinni::String>::fromCpp(jniEnv, c.values)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.defaultValue)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeWmtsDimension::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 4);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeWmtsDimension>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_key)),
            ::djinni::List<::djinni::String>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_values)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_defaultValue))};
}

}  // namespace djinni_generated