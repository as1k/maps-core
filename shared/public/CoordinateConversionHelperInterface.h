// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from coordinate_system.djinni

#pragma once

#include <memory>
#include <string>

class CoordinateConverterInterface;
struct Coord;
struct QuadCoord;
struct RectCoord;

class CoordinateConversionHelperInterface {
public:
    virtual ~CoordinateConversionHelperInterface() {}

    virtual void registerConverter(const std::shared_ptr<CoordinateConverterInterface> & converter) = 0;

    virtual Coord convert(const std::string & to, const Coord & coordinate) = 0;

    virtual RectCoord convertRect(const std::string & to, const RectCoord & rect) = 0;

    virtual RectCoord convertRectToRenderSystem(const RectCoord & rect) = 0;

    virtual QuadCoord convertQuad(const std::string & to, const QuadCoord & quad) = 0;

    virtual QuadCoord convertQuadToRenderSystem(const QuadCoord & quad) = 0;

    virtual Coord convertToRenderSystem(const Coord & coordinate) = 0;
};
