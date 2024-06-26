// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef FLUTTER_IMPELLER_CORE_DEVICE_BUFFER_DESCRIPTOR_H_
#define FLUTTER_IMPELLER_CORE_DEVICE_BUFFER_DESCRIPTOR_H_

#include <cstddef>

#include "impeller/core/formats.h"

namespace impeller {

struct DeviceBufferDescriptor {
  StorageMode storage_mode = StorageMode::kDeviceTransient;
  size_t size = 0u;
  // Perhaps we could combine this with storage mode and create appropriate
  // host-write and host-read flags.
  bool readback = false;
};

}  // namespace impeller

#endif  // FLUTTER_IMPELLER_CORE_DEVICE_BUFFER_DESCRIPTOR_H_
