#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_mkr_wallet_dapp_MainActivity_stringFromJNI(JNIEnv* env, jobject /* this */) {
    return env->NewStringUTF("Hello from Penguin Library!");
}
