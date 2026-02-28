#pragma once

#include <string>
#include <optional>
#include <cstdint>

struct Capabilities {
    uint32_t pedals { 1 };
    uint32_t firstPedalIndex { 0 };
    const char **pedalNames {};
};

std::optional<Capabilities> getModelCapabilities(const std::string_view &model);
