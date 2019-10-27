#include <jni.h>
#include <string>
#include "facer.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myapplication_jni_NativeLib_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++ face";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myapplication_jni_NativeLib_getFacer(JNIEnv *env, jclass clazz, jstring top,
                                                      jstring bottom, jstring brow, jstring eyes) {
    Facer facer(//使用 env->GetStringUTFChars将jstring转化为string
            env->GetStringUTFChars(top, 0),
            env->GetStringUTFChars(bottom, 0),
            env->GetStringUTFChars(brow, 0),
            env->GetStringUTFChars(eyes, 0)
    );

    return env->NewStringUTF(facer.getFace().c_str());
}

