// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wmts_capabilities.djinni

#pragma once

#include "WmtsCapabilitiesResource.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeWmtsCapabilitiesResource final : ::djinni::JniInterface<::WmtsCapabilitiesResource, NativeWmtsCapabilitiesResource> {
public:
    using CppType = std::shared_ptr<::WmtsCapabilitiesResource>;
    using CppOptType = std::shared_ptr<::WmtsCapabilitiesResource>;
    using JniType = jobject;

    using Boxed = NativeWmtsCapabilitiesResource;

    ~NativeWmtsCapabilitiesResource();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeWmtsCapabilitiesResource>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeWmtsCapabilitiesResource>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeWmtsCapabilitiesResource();
    friend ::djinni::JniClass<NativeWmtsCapabilitiesResource>;
    friend ::djinni::JniInterface<::WmtsCapabilitiesResource, NativeWmtsCapabilitiesResource>;

};

}  // namespace djinni_generated