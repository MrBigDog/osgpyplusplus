#!/bin/env python

# Automatically translated python version of 
# OpenSceneGraph example program "osgAndroidExampleGLES1"
# !!! This program will need manual tuning before it will work. !!!

import sys



# Translated from file 'proguard.cfg'

-optimizationpasses 5
-dontusemixedcaseclassnames
-dontskipnonpubliclibraryclasses
-dontpreverify
-verbose
-optimizations !code/simplification/arithmetic,!field/*,!class/merging/*

-keep public class * extends android.app.Activity
-keep public class * extends android.app.Application
-keep public class * extends android.app.Service
-keep public class * extends android.content.BroadcastReceiver
-keep public class * extends android.content.ContentProvider
-keep public class * extends android.app.backup.BackupAgentHelper
-keep public class * extends android.preference.Preference
-keep public class com.android.vending.licensing.ILicensingService

-keepclasseswithmembernames class * 
    native <methods>

-keepclasseswithmembernames class * 
    public <init>(android.content.Context, android.util.AttributeSet)

-keepclasseswithmembernames class * 
    public <init>(android.content.Context, android.util.AttributeSet, int)

-keepclassmembers enum * 
    public static **[] values()
    public static ** valueOf(java.lang.String)

-keep class * implements android.os.Parcelable 
  public static final android.os.Parcelable$Creator *


if __name__ == "__main__":
    main(sys.argv)
