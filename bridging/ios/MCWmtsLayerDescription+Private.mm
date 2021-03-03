// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wmts_capabilities.djinni

#import "MCWmtsLayerDescription+Private.h"
#import "DJIMarshal+Private.h"
#import "MCRectCoord+Private.h"
#import "MCWmtsLayerDimension+Private.h"
#include <cassert>

namespace djinni_generated {

auto WmtsLayerDescription::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.identifier),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.title),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.abstractText),
            ::djinni::List<::djinni_generated::WmtsLayerDimension>::toCpp(obj.dimensions),
            ::djinni_generated::RectCoord::toCpp(obj.bounds),
            ::djinni::String::toCpp(obj.tileMatrixSetLink),
            ::djinni::String::toCpp(obj.resourceTemplate),
            ::djinni::String::toCpp(obj.resourceFormat)};
}

auto WmtsLayerDescription::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[MCWmtsLayerDescription alloc] initWithIdentifier:(::djinni::String::fromCpp(cpp.identifier))
                                                        title:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.title))
                                                 abstractText:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.abstractText))
                                                   dimensions:(::djinni::List<::djinni_generated::WmtsLayerDimension>::fromCpp(cpp.dimensions))
                                                       bounds:(::djinni_generated::RectCoord::fromCpp(cpp.bounds))
                                            tileMatrixSetLink:(::djinni::String::fromCpp(cpp.tileMatrixSetLink))
                                             resourceTemplate:(::djinni::String::fromCpp(cpp.resourceTemplate))
                                               resourceFormat:(::djinni::String::fromCpp(cpp.resourceFormat))];
}

}  // namespace djinni_generated