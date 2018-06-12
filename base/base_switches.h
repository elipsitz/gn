// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Defines all the "base" command-line switches.

#ifndef BASE_BASE_SWITCHES_H_
#define BASE_BASE_SWITCHES_H_

#include "build_config.h"

namespace switches {

extern const char kDisableBackgroundTasks[];
extern const char kDisableBreakpad[];
extern const char kDisableFeatures[];
extern const char kDisableLowEndDeviceMode[];
extern const char kEnableCrashReporter[];
extern const char kEnableFeatures[];
extern const char kEnableLowEndDeviceMode[];
extern const char kForceFieldTrials[];
extern const char kFullMemoryCrashReport[];
extern const char kNoErrorDialogs[];
extern const char kProfilingFile[];
extern const char kTestChildProcess[];
extern const char kTestDoNotInitializeIcu[];
extern const char kTraceToFile[];
extern const char kTraceToFileName[];
extern const char kV[];
extern const char kVModule[];
extern const char kWaitForDebugger[];

#if defined(OS_WIN)
extern const char kDisableUsbKeyboardDetect[];
#endif

#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
extern const char kDisableDevShmUsage[];
#endif

#if defined(OS_POSIX)
extern const char kEnableCrashReporterForTesting[];
#endif

#if defined(OS_ANDROID)
extern const char kOrderfileMemoryOptimization[];
extern const char kForceNativePrefetch[];
extern const char kNativePrefetchOrderedOnly[];
#endif

}  // namespace switches

#endif  // BASE_BASE_SWITCHES_H_