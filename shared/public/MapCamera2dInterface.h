// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#pragma once

#include "CameraInterface.h"
#include "Coord.h"
#include "MapCamera2dListenerInterface.h"
#include "RectCoord.h"
#include "Vec2F.h"
#include <memory>
#include <vector>

class MapInterface;

class MapCamera2dInterface {
public:
    virtual ~MapCamera2dInterface() {}

    static std::shared_ptr<MapCamera2dInterface> create(const std::shared_ptr<MapInterface> & mapInterface, float screenDensityPpi);

    virtual void moveToCenterPositionZoom(const ::Coord & centerPosition, double zoom, bool animated) = 0;

    virtual void moveToCenterPosition(const ::Coord & centerPosition, bool animated) = 0;

    virtual ::Coord getCenterPosition() = 0;

    virtual void setZoom(double zoom, bool animated) = 0;

    virtual double getZoom() = 0;

    virtual void setRotation(float angle, bool animated) = 0;

    virtual float getRotation() = 0;

    virtual void setMinZoom(double minZoom) = 0;

    virtual void setMaxZoom(double maxZoom) = 0;

    virtual void setBounds(const ::RectCoord & bounds) = 0;

    virtual void setPaddingLeft(float padding, bool animated) = 0;

    virtual void setPaddingRight(float padding, bool animated) = 0;

    virtual void setPaddingTop(float padding, bool animated) = 0;

    virtual void setPaddingBottom(float padding, bool animated) = 0;

    virtual ::RectCoord getVisibleRect() = 0;

    virtual std::vector<float> getInvariantMvpMatrix(const std::vector<float> & cameraMatrix, const ::Coord & coordinate, bool rotationInvariant) = 0;

    virtual void addListener(const std::shared_ptr<::MapCamera2dListenerInterface> & listener) = 0;

    virtual void removeListener(const std::shared_ptr<::MapCamera2dListenerInterface> & listener) = 0;

    virtual ::Coord coordFromScreenPosition(const ::Vec2F & posScreen) = 0;

    virtual std::shared_ptr<::CameraInterface> asCameraInterface() = 0;
};
