// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "traceimpl_error.h"

namespace blink {

void TraceImplExternWithUntracedMember::trace(Visitor* visitor) {
  // Should get a warning as well.
}

void TraceImplExternWithUntracedBase::trace(Visitor* visitor) {
  // Ditto.
}

}
