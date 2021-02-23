// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from task_scheduler.djinni

#pragma once

#include "SchedulerInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeSchedulerInterface final : ::djinni::JniInterface<::SchedulerInterface, NativeSchedulerInterface> {
public:
    using CppType = std::shared_ptr<::SchedulerInterface>;
    using CppOptType = std::shared_ptr<::SchedulerInterface>;
    using JniType = jobject;

    using Boxed = NativeSchedulerInterface;

    ~NativeSchedulerInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeSchedulerInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeSchedulerInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeSchedulerInterface();
    friend ::djinni::JniClass<NativeSchedulerInterface>;
    friend ::djinni::JniInterface<::SchedulerInterface, NativeSchedulerInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::SchedulerInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void addTask(const std::shared_ptr<::TaskInterface> & task) override;
        void removeTask(const std::string & id) override;
        void clear() override;
        void pause() override;
        void resume() override;

    private:
        friend ::djinni::JniInterface<::SchedulerInterface, ::djinni_generated::NativeSchedulerInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/scheduling/SchedulerInterface") };
    const jmethodID method_addTask { ::djinni::jniGetMethodID(clazz.get(), "addTask", "(Lio/openmobilemaps/mapscore/shared/map/scheduling/TaskInterface;)V") };
    const jmethodID method_removeTask { ::djinni::jniGetMethodID(clazz.get(), "removeTask", "(Ljava/lang/String;)V") };
    const jmethodID method_clear { ::djinni::jniGetMethodID(clazz.get(), "clear", "()V") };
    const jmethodID method_pause { ::djinni::jniGetMethodID(clazz.get(), "pause", "()V") };
    const jmethodID method_resume { ::djinni::jniGetMethodID(clazz.get(), "resume", "()V") };
};

}  // namespace djinni_generated
