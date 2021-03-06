// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from shader.djinni

#pragma once

#include "RenderingContextInterface.h"
#include <memory>
#include <string>

class ShaderProgramInterface {
public:
    virtual ~ShaderProgramInterface() {}

    virtual std::string getProgramName() = 0;

    virtual void setupProgram(const std::shared_ptr<::RenderingContextInterface> & context) = 0;

    virtual void preRender(const std::shared_ptr<::RenderingContextInterface> & context) = 0;
};
