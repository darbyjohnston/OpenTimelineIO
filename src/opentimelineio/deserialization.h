// SPDX-License-Identifier: Apache-2.0
// Copyright Contributors to the OpenTimelineIO project

#pragma once

#include "opentimelineio/serializableObject.h"
#include "opentimelineio/version.h"

#include <any>
#include <string>

namespace opentimelineio { namespace OPENTIMELINEIO_VERSION {

/// @brief Deserialize JSON data from a string.
bool deserialize_json_from_string(
    std::string const& input,
    std::any*          destination,
    ErrorStatus*       error_status = nullptr);

/// @brief Deserialize JSON data from a file.
bool deserialize_json_from_file(
    std::string const& file_name,
    std::any*          destination,
    ErrorStatus*       error_status = nullptr);

}} // namespace opentimelineio::OPENTIMELINEIO_VERSION
