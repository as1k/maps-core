// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wmts.djinni

#include "NativeWmtsLayerConfiguration.h"  // my header
#include "Marshal.hpp"
#include "NativeRectCoord.h"

namespace djinni_generated {

NativeWmtsLayerConfiguration::NativeWmtsLayerConfiguration() = default;

NativeWmtsLayerConfiguration::~NativeWmtsLayerConfiguration() = default;

auto NativeWmtsLayerConfiguration::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeWmtsLayerConfiguration>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.indentifier)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.urlFormat)),
                                                           ::djinni::get(::djinni_generated::NativeRectCoord::fromCpp(jniEnv, c.bounds)),
                                                           ::djinni::get(::djinni::Map<::djinni::String, ::djinni::String>::fromCpp(jniEnv, c.dimensions)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeWmtsLayerConfiguration::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 5);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeWmtsLayerConfiguration>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_indentifier)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_urlFormat)),
            ::djinni_generated::NativeRectCoord::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_bounds)),
            ::djinni::Map<::djinni::String, ::djinni::String>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_dimensions))};
}

}  // namespace djinni_generated