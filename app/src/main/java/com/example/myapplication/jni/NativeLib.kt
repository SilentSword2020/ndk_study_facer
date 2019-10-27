package com.example.myapplication.jni

object NativeLib {
    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    external fun stringFromJNI(): String

    external fun getFacer(top: String, bottom: String, brow: String, eyes: String): String

    // Used to load the 'native-lib' library on application startup.
    init {
        System.loadLibrary("native-lib")
    }

}