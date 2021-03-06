// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from icon.djinni

#pragma once

#include "Coord.h"
#include "TextureHolderInterface.h"
#include "Vec2F.h"
#include <memory>
#include <string>

class IconInfoInterface;
enum class IconType;

class IconFactory {
public:
    virtual ~IconFactory() {}

    static std::shared_ptr<IconInfoInterface> createIcon(const std::string & identifier, const ::Coord & coordinate, const std::shared_ptr<::TextureHolderInterface> & texture, const ::Vec2F & iconSize, IconType scaleType);
};
