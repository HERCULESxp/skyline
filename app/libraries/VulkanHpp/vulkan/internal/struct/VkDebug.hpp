// Copyright (c) 2015-2019 The Khronos Group Inc.
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// 
// ---- Exceptions to the Apache 2.0 License: ----
// 
// As an exception, if you use this Software to generate code and portions of
// this Software are embedded into the generated code as a result, you may
// redistribute such product without providing attribution as would otherwise
// be required by Sections 4(a), 4(b) and 4(d) of the License.
// 
// In addition, if you combine or link code generated by this Software with
// software that is licensed under the GPLv2 or the LGPL v2.0 or 2.1
// ("`Combined Software`") and if a court of competent jurisdiction determines
// that the patent provision (Section 3), the indemnity provision (Section 9)
// or other Section of the License conflicts with the conditions of the
// applicable GPL or LGPL license, you may retroactively and prospectively
// choose to deem waived or otherwise exclude such Section(s) of the License,
// but only in their entirety and only with respect to the Combined Software.
//     

// This header is generated from the Khronos Vulkan XML API Registry.

#pragma once

#include "../handles.hpp"
#include "VkAcquire.hpp"
#include "VkAcceleration.hpp"
#include "VkApplication.hpp"
#include "VkAllocation.hpp"
#include "VkBind.hpp"
#include "VkCooperative.hpp"
#include "VkAndroid.hpp"
#include "VkBase.hpp"
#include "VkAttachment.hpp"
#include "VkBuffer.hpp"
#include "VkCalibrated.hpp"
#include "VkCheckpoint.hpp"
#include "VkConformance.hpp"
#include "VkClear.hpp"
#include "VkCmd.hpp"
#include "VkCoarse.hpp"
#include "VkCommand.hpp"
#include "VkComponent.hpp"
#include "VkCopy.hpp"
#include "VkCompute.hpp"
#include "VkConditional.hpp"
#include "VkD3D.hpp"
#include "VkDebug.hpp"

namespace VULKAN_HPP_NAMESPACE
{
  struct DebugMarkerMarkerInfoEXT
  {
    VULKAN_HPP_CONSTEXPR_14 DebugMarkerMarkerInfoEXT( const char* pMarkerName_ = {},
                                                      std::array<float,4> const& color_ = {} ) VULKAN_HPP_NOEXCEPT
      : pMarkerName( pMarkerName_ )
      , color{}
    {
      VULKAN_HPP_NAMESPACE::ConstExpression1DArrayCopy<float,4>::copy( color, color_ );
    }

    VULKAN_HPP_CONSTEXPR_14 DebugMarkerMarkerInfoEXT( DebugMarkerMarkerInfoEXT const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , pMarkerName( rhs.pMarkerName )
      , color{}
    {
      VULKAN_HPP_NAMESPACE::ConstExpression1DArrayCopy<float,4>::copy( color, rhs.color );
    }

    DebugMarkerMarkerInfoEXT & operator=( DebugMarkerMarkerInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( DebugMarkerMarkerInfoEXT ) - offsetof( DebugMarkerMarkerInfoEXT, pNext ) );
      return *this;
    }

    DebugMarkerMarkerInfoEXT( VkDebugMarkerMarkerInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    DebugMarkerMarkerInfoEXT& operator=( VkDebugMarkerMarkerInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::DebugMarkerMarkerInfoEXT const *>(&rhs);
      return *this;
    }

    DebugMarkerMarkerInfoEXT & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    DebugMarkerMarkerInfoEXT & setPMarkerName( const char* pMarkerName_ ) VULKAN_HPP_NOEXCEPT
    {
      pMarkerName = pMarkerName_;
      return *this;
    }

    DebugMarkerMarkerInfoEXT & setColor( std::array<float,4> color_ ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( color, color_.data(), 4 * sizeof( float ) );
      return *this;
    }

    operator VkDebugMarkerMarkerInfoEXT const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkDebugMarkerMarkerInfoEXT*>( this );
    }

    operator VkDebugMarkerMarkerInfoEXT &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkDebugMarkerMarkerInfoEXT*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( DebugMarkerMarkerInfoEXT const& ) const = default;
#else
    bool operator==( DebugMarkerMarkerInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( pMarkerName == rhs.pMarkerName )
          && ( memcmp( color, rhs.color, 4 * sizeof( float ) ) == 0 );
    }

    bool operator!=( DebugMarkerMarkerInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eDebugMarkerMarkerInfoEXT;
    const void* pNext = {};
    const char* pMarkerName = {};
    float color[4] = {};
  };
  static_assert( sizeof( DebugMarkerMarkerInfoEXT ) == sizeof( VkDebugMarkerMarkerInfoEXT ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<DebugMarkerMarkerInfoEXT>::value, "struct wrapper is not a standard layout!" );

  struct DebugMarkerObjectNameInfoEXT
  {
    VULKAN_HPP_CONSTEXPR DebugMarkerObjectNameInfoEXT( VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT objectType_ = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eUnknown,
                                                       uint64_t object_ = {},
                                                       const char* pObjectName_ = {} ) VULKAN_HPP_NOEXCEPT
      : objectType( objectType_ )
      , object( object_ )
      , pObjectName( pObjectName_ )
    {}

    VULKAN_HPP_CONSTEXPR DebugMarkerObjectNameInfoEXT( DebugMarkerObjectNameInfoEXT const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , objectType( rhs.objectType )
      , object( rhs.object )
      , pObjectName( rhs.pObjectName )
    {}

    DebugMarkerObjectNameInfoEXT & operator=( DebugMarkerObjectNameInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( DebugMarkerObjectNameInfoEXT ) - offsetof( DebugMarkerObjectNameInfoEXT, pNext ) );
      return *this;
    }

    DebugMarkerObjectNameInfoEXT( VkDebugMarkerObjectNameInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    DebugMarkerObjectNameInfoEXT& operator=( VkDebugMarkerObjectNameInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::DebugMarkerObjectNameInfoEXT const *>(&rhs);
      return *this;
    }

    DebugMarkerObjectNameInfoEXT & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    DebugMarkerObjectNameInfoEXT & setObjectType( VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT objectType_ ) VULKAN_HPP_NOEXCEPT
    {
      objectType = objectType_;
      return *this;
    }

    DebugMarkerObjectNameInfoEXT & setObject( uint64_t object_ ) VULKAN_HPP_NOEXCEPT
    {
      object = object_;
      return *this;
    }

    DebugMarkerObjectNameInfoEXT & setPObjectName( const char* pObjectName_ ) VULKAN_HPP_NOEXCEPT
    {
      pObjectName = pObjectName_;
      return *this;
    }

    operator VkDebugMarkerObjectNameInfoEXT const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkDebugMarkerObjectNameInfoEXT*>( this );
    }

    operator VkDebugMarkerObjectNameInfoEXT &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkDebugMarkerObjectNameInfoEXT*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( DebugMarkerObjectNameInfoEXT const& ) const = default;
#else
    bool operator==( DebugMarkerObjectNameInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( objectType == rhs.objectType )
          && ( object == rhs.object )
          && ( pObjectName == rhs.pObjectName );
    }

    bool operator!=( DebugMarkerObjectNameInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eDebugMarkerObjectNameInfoEXT;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT objectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eUnknown;
    uint64_t object = {};
    const char* pObjectName = {};
  };
  static_assert( sizeof( DebugMarkerObjectNameInfoEXT ) == sizeof( VkDebugMarkerObjectNameInfoEXT ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<DebugMarkerObjectNameInfoEXT>::value, "struct wrapper is not a standard layout!" );

  struct DebugMarkerObjectTagInfoEXT
  {
    VULKAN_HPP_CONSTEXPR DebugMarkerObjectTagInfoEXT( VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT objectType_ = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eUnknown,
                                                      uint64_t object_ = {},
                                                      uint64_t tagName_ = {},
                                                      size_t tagSize_ = {},
                                                      const void* pTag_ = {} ) VULKAN_HPP_NOEXCEPT
      : objectType( objectType_ )
      , object( object_ )
      , tagName( tagName_ )
      , tagSize( tagSize_ )
      , pTag( pTag_ )
    {}

    VULKAN_HPP_CONSTEXPR DebugMarkerObjectTagInfoEXT( DebugMarkerObjectTagInfoEXT const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , objectType( rhs.objectType )
      , object( rhs.object )
      , tagName( rhs.tagName )
      , tagSize( rhs.tagSize )
      , pTag( rhs.pTag )
    {}

    DebugMarkerObjectTagInfoEXT & operator=( DebugMarkerObjectTagInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( DebugMarkerObjectTagInfoEXT ) - offsetof( DebugMarkerObjectTagInfoEXT, pNext ) );
      return *this;
    }

    DebugMarkerObjectTagInfoEXT( VkDebugMarkerObjectTagInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    DebugMarkerObjectTagInfoEXT& operator=( VkDebugMarkerObjectTagInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::DebugMarkerObjectTagInfoEXT const *>(&rhs);
      return *this;
    }

    DebugMarkerObjectTagInfoEXT & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    DebugMarkerObjectTagInfoEXT & setObjectType( VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT objectType_ ) VULKAN_HPP_NOEXCEPT
    {
      objectType = objectType_;
      return *this;
    }

    DebugMarkerObjectTagInfoEXT & setObject( uint64_t object_ ) VULKAN_HPP_NOEXCEPT
    {
      object = object_;
      return *this;
    }

    DebugMarkerObjectTagInfoEXT & setTagName( uint64_t tagName_ ) VULKAN_HPP_NOEXCEPT
    {
      tagName = tagName_;
      return *this;
    }

    DebugMarkerObjectTagInfoEXT & setTagSize( size_t tagSize_ ) VULKAN_HPP_NOEXCEPT
    {
      tagSize = tagSize_;
      return *this;
    }

    DebugMarkerObjectTagInfoEXT & setPTag( const void* pTag_ ) VULKAN_HPP_NOEXCEPT
    {
      pTag = pTag_;
      return *this;
    }

    operator VkDebugMarkerObjectTagInfoEXT const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkDebugMarkerObjectTagInfoEXT*>( this );
    }

    operator VkDebugMarkerObjectTagInfoEXT &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkDebugMarkerObjectTagInfoEXT*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( DebugMarkerObjectTagInfoEXT const& ) const = default;
#else
    bool operator==( DebugMarkerObjectTagInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( objectType == rhs.objectType )
          && ( object == rhs.object )
          && ( tagName == rhs.tagName )
          && ( tagSize == rhs.tagSize )
          && ( pTag == rhs.pTag );
    }

    bool operator!=( DebugMarkerObjectTagInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eDebugMarkerObjectTagInfoEXT;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT objectType = VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eUnknown;
    uint64_t object = {};
    uint64_t tagName = {};
    size_t tagSize = {};
    const void* pTag = {};
  };
  static_assert( sizeof( DebugMarkerObjectTagInfoEXT ) == sizeof( VkDebugMarkerObjectTagInfoEXT ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<DebugMarkerObjectTagInfoEXT>::value, "struct wrapper is not a standard layout!" );

  struct DebugReportCallbackCreateInfoEXT
  {
    VULKAN_HPP_CONSTEXPR DebugReportCallbackCreateInfoEXT( VULKAN_HPP_NAMESPACE::DebugReportFlagsEXT flags_ = {},
                                                           PFN_vkDebugReportCallbackEXT pfnCallback_ = {},
                                                           void* pUserData_ = {} ) VULKAN_HPP_NOEXCEPT
      : flags( flags_ )
      , pfnCallback( pfnCallback_ )
      , pUserData( pUserData_ )
    {}

    VULKAN_HPP_CONSTEXPR DebugReportCallbackCreateInfoEXT( DebugReportCallbackCreateInfoEXT const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , flags( rhs.flags )
      , pfnCallback( rhs.pfnCallback )
      , pUserData( rhs.pUserData )
    {}

    DebugReportCallbackCreateInfoEXT & operator=( DebugReportCallbackCreateInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( DebugReportCallbackCreateInfoEXT ) - offsetof( DebugReportCallbackCreateInfoEXT, pNext ) );
      return *this;
    }

    DebugReportCallbackCreateInfoEXT( VkDebugReportCallbackCreateInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    DebugReportCallbackCreateInfoEXT& operator=( VkDebugReportCallbackCreateInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::DebugReportCallbackCreateInfoEXT const *>(&rhs);
      return *this;
    }

    DebugReportCallbackCreateInfoEXT & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    DebugReportCallbackCreateInfoEXT & setFlags( VULKAN_HPP_NAMESPACE::DebugReportFlagsEXT flags_ ) VULKAN_HPP_NOEXCEPT
    {
      flags = flags_;
      return *this;
    }

    DebugReportCallbackCreateInfoEXT & setPfnCallback( PFN_vkDebugReportCallbackEXT pfnCallback_ ) VULKAN_HPP_NOEXCEPT
    {
      pfnCallback = pfnCallback_;
      return *this;
    }

    DebugReportCallbackCreateInfoEXT & setPUserData( void* pUserData_ ) VULKAN_HPP_NOEXCEPT
    {
      pUserData = pUserData_;
      return *this;
    }

    operator VkDebugReportCallbackCreateInfoEXT const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkDebugReportCallbackCreateInfoEXT*>( this );
    }

    operator VkDebugReportCallbackCreateInfoEXT &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkDebugReportCallbackCreateInfoEXT*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( DebugReportCallbackCreateInfoEXT const& ) const = default;
#else
    bool operator==( DebugReportCallbackCreateInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( flags == rhs.flags )
          && ( pfnCallback == rhs.pfnCallback )
          && ( pUserData == rhs.pUserData );
    }

    bool operator!=( DebugReportCallbackCreateInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eDebugReportCallbackCreateInfoEXT;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::DebugReportFlagsEXT flags = {};
    PFN_vkDebugReportCallbackEXT pfnCallback = {};
    void* pUserData = {};
  };
  static_assert( sizeof( DebugReportCallbackCreateInfoEXT ) == sizeof( VkDebugReportCallbackCreateInfoEXT ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<DebugReportCallbackCreateInfoEXT>::value, "struct wrapper is not a standard layout!" );

  struct DebugUtilsLabelEXT
  {
    VULKAN_HPP_CONSTEXPR_14 DebugUtilsLabelEXT( const char* pLabelName_ = {},
                                                std::array<float,4> const& color_ = {} ) VULKAN_HPP_NOEXCEPT
      : pLabelName( pLabelName_ )
      , color{}
    {
      VULKAN_HPP_NAMESPACE::ConstExpression1DArrayCopy<float,4>::copy( color, color_ );
    }

    VULKAN_HPP_CONSTEXPR_14 DebugUtilsLabelEXT( DebugUtilsLabelEXT const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , pLabelName( rhs.pLabelName )
      , color{}
    {
      VULKAN_HPP_NAMESPACE::ConstExpression1DArrayCopy<float,4>::copy( color, rhs.color );
    }

    DebugUtilsLabelEXT & operator=( DebugUtilsLabelEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( DebugUtilsLabelEXT ) - offsetof( DebugUtilsLabelEXT, pNext ) );
      return *this;
    }

    DebugUtilsLabelEXT( VkDebugUtilsLabelEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    DebugUtilsLabelEXT& operator=( VkDebugUtilsLabelEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT const *>(&rhs);
      return *this;
    }

    DebugUtilsLabelEXT & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    DebugUtilsLabelEXT & setPLabelName( const char* pLabelName_ ) VULKAN_HPP_NOEXCEPT
    {
      pLabelName = pLabelName_;
      return *this;
    }

    DebugUtilsLabelEXT & setColor( std::array<float,4> color_ ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( color, color_.data(), 4 * sizeof( float ) );
      return *this;
    }

    operator VkDebugUtilsLabelEXT const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkDebugUtilsLabelEXT*>( this );
    }

    operator VkDebugUtilsLabelEXT &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkDebugUtilsLabelEXT*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( DebugUtilsLabelEXT const& ) const = default;
#else
    bool operator==( DebugUtilsLabelEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( pLabelName == rhs.pLabelName )
          && ( memcmp( color, rhs.color, 4 * sizeof( float ) ) == 0 );
    }

    bool operator!=( DebugUtilsLabelEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eDebugUtilsLabelEXT;
    const void* pNext = {};
    const char* pLabelName = {};
    float color[4] = {};
  };
  static_assert( sizeof( DebugUtilsLabelEXT ) == sizeof( VkDebugUtilsLabelEXT ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<DebugUtilsLabelEXT>::value, "struct wrapper is not a standard layout!" );

  struct DebugUtilsObjectNameInfoEXT
  {
    VULKAN_HPP_CONSTEXPR DebugUtilsObjectNameInfoEXT( VULKAN_HPP_NAMESPACE::ObjectType objectType_ = VULKAN_HPP_NAMESPACE::ObjectType::eUnknown,
                                                      uint64_t objectHandle_ = {},
                                                      const char* pObjectName_ = {} ) VULKAN_HPP_NOEXCEPT
      : objectType( objectType_ )
      , objectHandle( objectHandle_ )
      , pObjectName( pObjectName_ )
    {}

    VULKAN_HPP_CONSTEXPR DebugUtilsObjectNameInfoEXT( DebugUtilsObjectNameInfoEXT const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , objectType( rhs.objectType )
      , objectHandle( rhs.objectHandle )
      , pObjectName( rhs.pObjectName )
    {}

    DebugUtilsObjectNameInfoEXT & operator=( DebugUtilsObjectNameInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( DebugUtilsObjectNameInfoEXT ) - offsetof( DebugUtilsObjectNameInfoEXT, pNext ) );
      return *this;
    }

    DebugUtilsObjectNameInfoEXT( VkDebugUtilsObjectNameInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    DebugUtilsObjectNameInfoEXT& operator=( VkDebugUtilsObjectNameInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::DebugUtilsObjectNameInfoEXT const *>(&rhs);
      return *this;
    }

    DebugUtilsObjectNameInfoEXT & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    DebugUtilsObjectNameInfoEXT & setObjectType( VULKAN_HPP_NAMESPACE::ObjectType objectType_ ) VULKAN_HPP_NOEXCEPT
    {
      objectType = objectType_;
      return *this;
    }

    DebugUtilsObjectNameInfoEXT & setObjectHandle( uint64_t objectHandle_ ) VULKAN_HPP_NOEXCEPT
    {
      objectHandle = objectHandle_;
      return *this;
    }

    DebugUtilsObjectNameInfoEXT & setPObjectName( const char* pObjectName_ ) VULKAN_HPP_NOEXCEPT
    {
      pObjectName = pObjectName_;
      return *this;
    }

    operator VkDebugUtilsObjectNameInfoEXT const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkDebugUtilsObjectNameInfoEXT*>( this );
    }

    operator VkDebugUtilsObjectNameInfoEXT &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkDebugUtilsObjectNameInfoEXT*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( DebugUtilsObjectNameInfoEXT const& ) const = default;
#else
    bool operator==( DebugUtilsObjectNameInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( objectType == rhs.objectType )
          && ( objectHandle == rhs.objectHandle )
          && ( pObjectName == rhs.pObjectName );
    }

    bool operator!=( DebugUtilsObjectNameInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eDebugUtilsObjectNameInfoEXT;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eUnknown;
    uint64_t objectHandle = {};
    const char* pObjectName = {};
  };
  static_assert( sizeof( DebugUtilsObjectNameInfoEXT ) == sizeof( VkDebugUtilsObjectNameInfoEXT ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<DebugUtilsObjectNameInfoEXT>::value, "struct wrapper is not a standard layout!" );

  struct DebugUtilsMessengerCallbackDataEXT
  {
    VULKAN_HPP_CONSTEXPR_14 DebugUtilsMessengerCallbackDataEXT( VULKAN_HPP_NAMESPACE::DebugUtilsMessengerCallbackDataFlagsEXT flags_ = {},
                                                                const char* pMessageIdName_ = {},
                                                                int32_t messageIdNumber_ = {},
                                                                const char* pMessage_ = {},
                                                                uint32_t queueLabelCount_ = {},
                                                                const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT* pQueueLabels_ = {},
                                                                uint32_t cmdBufLabelCount_ = {},
                                                                const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT* pCmdBufLabels_ = {},
                                                                uint32_t objectCount_ = {},
                                                                const VULKAN_HPP_NAMESPACE::DebugUtilsObjectNameInfoEXT* pObjects_ = {} ) VULKAN_HPP_NOEXCEPT
      : flags( flags_ )
      , pMessageIdName( pMessageIdName_ )
      , messageIdNumber( messageIdNumber_ )
      , pMessage( pMessage_ )
      , queueLabelCount( queueLabelCount_ )
      , pQueueLabels( pQueueLabels_ )
      , cmdBufLabelCount( cmdBufLabelCount_ )
      , pCmdBufLabels( pCmdBufLabels_ )
      , objectCount( objectCount_ )
      , pObjects( pObjects_ )
    {}

    VULKAN_HPP_CONSTEXPR_14 DebugUtilsMessengerCallbackDataEXT( DebugUtilsMessengerCallbackDataEXT const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , flags( rhs.flags )
      , pMessageIdName( rhs.pMessageIdName )
      , messageIdNumber( rhs.messageIdNumber )
      , pMessage( rhs.pMessage )
      , queueLabelCount( rhs.queueLabelCount )
      , pQueueLabels( rhs.pQueueLabels )
      , cmdBufLabelCount( rhs.cmdBufLabelCount )
      , pCmdBufLabels( rhs.pCmdBufLabels )
      , objectCount( rhs.objectCount )
      , pObjects( rhs.pObjects )
    {}

    DebugUtilsMessengerCallbackDataEXT & operator=( DebugUtilsMessengerCallbackDataEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( DebugUtilsMessengerCallbackDataEXT ) - offsetof( DebugUtilsMessengerCallbackDataEXT, pNext ) );
      return *this;
    }

    DebugUtilsMessengerCallbackDataEXT( VkDebugUtilsMessengerCallbackDataEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    DebugUtilsMessengerCallbackDataEXT& operator=( VkDebugUtilsMessengerCallbackDataEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::DebugUtilsMessengerCallbackDataEXT const *>(&rhs);
      return *this;
    }

    DebugUtilsMessengerCallbackDataEXT & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    DebugUtilsMessengerCallbackDataEXT & setFlags( VULKAN_HPP_NAMESPACE::DebugUtilsMessengerCallbackDataFlagsEXT flags_ ) VULKAN_HPP_NOEXCEPT
    {
      flags = flags_;
      return *this;
    }

    DebugUtilsMessengerCallbackDataEXT & setPMessageIdName( const char* pMessageIdName_ ) VULKAN_HPP_NOEXCEPT
    {
      pMessageIdName = pMessageIdName_;
      return *this;
    }

    DebugUtilsMessengerCallbackDataEXT & setMessageIdNumber( int32_t messageIdNumber_ ) VULKAN_HPP_NOEXCEPT
    {
      messageIdNumber = messageIdNumber_;
      return *this;
    }

    DebugUtilsMessengerCallbackDataEXT & setPMessage( const char* pMessage_ ) VULKAN_HPP_NOEXCEPT
    {
      pMessage = pMessage_;
      return *this;
    }

    DebugUtilsMessengerCallbackDataEXT & setQueueLabelCount( uint32_t queueLabelCount_ ) VULKAN_HPP_NOEXCEPT
    {
      queueLabelCount = queueLabelCount_;
      return *this;
    }

    DebugUtilsMessengerCallbackDataEXT & setPQueueLabels( const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT* pQueueLabels_ ) VULKAN_HPP_NOEXCEPT
    {
      pQueueLabels = pQueueLabels_;
      return *this;
    }

    DebugUtilsMessengerCallbackDataEXT & setCmdBufLabelCount( uint32_t cmdBufLabelCount_ ) VULKAN_HPP_NOEXCEPT
    {
      cmdBufLabelCount = cmdBufLabelCount_;
      return *this;
    }

    DebugUtilsMessengerCallbackDataEXT & setPCmdBufLabels( const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT* pCmdBufLabels_ ) VULKAN_HPP_NOEXCEPT
    {
      pCmdBufLabels = pCmdBufLabels_;
      return *this;
    }

    DebugUtilsMessengerCallbackDataEXT & setObjectCount( uint32_t objectCount_ ) VULKAN_HPP_NOEXCEPT
    {
      objectCount = objectCount_;
      return *this;
    }

    DebugUtilsMessengerCallbackDataEXT & setPObjects( const VULKAN_HPP_NAMESPACE::DebugUtilsObjectNameInfoEXT* pObjects_ ) VULKAN_HPP_NOEXCEPT
    {
      pObjects = pObjects_;
      return *this;
    }

    operator VkDebugUtilsMessengerCallbackDataEXT const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkDebugUtilsMessengerCallbackDataEXT*>( this );
    }

    operator VkDebugUtilsMessengerCallbackDataEXT &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkDebugUtilsMessengerCallbackDataEXT*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( DebugUtilsMessengerCallbackDataEXT const& ) const = default;
#else
    bool operator==( DebugUtilsMessengerCallbackDataEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( flags == rhs.flags )
          && ( pMessageIdName == rhs.pMessageIdName )
          && ( messageIdNumber == rhs.messageIdNumber )
          && ( pMessage == rhs.pMessage )
          && ( queueLabelCount == rhs.queueLabelCount )
          && ( pQueueLabels == rhs.pQueueLabels )
          && ( cmdBufLabelCount == rhs.cmdBufLabelCount )
          && ( pCmdBufLabels == rhs.pCmdBufLabels )
          && ( objectCount == rhs.objectCount )
          && ( pObjects == rhs.pObjects );
    }

    bool operator!=( DebugUtilsMessengerCallbackDataEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eDebugUtilsMessengerCallbackDataEXT;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::DebugUtilsMessengerCallbackDataFlagsEXT flags = {};
    const char* pMessageIdName = {};
    int32_t messageIdNumber = {};
    const char* pMessage = {};
    uint32_t queueLabelCount = {};
    const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT* pQueueLabels = {};
    uint32_t cmdBufLabelCount = {};
    const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT* pCmdBufLabels = {};
    uint32_t objectCount = {};
    const VULKAN_HPP_NAMESPACE::DebugUtilsObjectNameInfoEXT* pObjects = {};
  };
  static_assert( sizeof( DebugUtilsMessengerCallbackDataEXT ) == sizeof( VkDebugUtilsMessengerCallbackDataEXT ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<DebugUtilsMessengerCallbackDataEXT>::value, "struct wrapper is not a standard layout!" );

  struct DebugUtilsMessengerCreateInfoEXT
  {
    VULKAN_HPP_CONSTEXPR DebugUtilsMessengerCreateInfoEXT( VULKAN_HPP_NAMESPACE::DebugUtilsMessengerCreateFlagsEXT flags_ = {},
                                                           VULKAN_HPP_NAMESPACE::DebugUtilsMessageSeverityFlagsEXT messageSeverity_ = {},
                                                           VULKAN_HPP_NAMESPACE::DebugUtilsMessageTypeFlagsEXT messageType_ = {},
                                                           PFN_vkDebugUtilsMessengerCallbackEXT pfnUserCallback_ = {},
                                                           void* pUserData_ = {} ) VULKAN_HPP_NOEXCEPT
      : flags( flags_ )
      , messageSeverity( messageSeverity_ )
      , messageType( messageType_ )
      , pfnUserCallback( pfnUserCallback_ )
      , pUserData( pUserData_ )
    {}

    VULKAN_HPP_CONSTEXPR DebugUtilsMessengerCreateInfoEXT( DebugUtilsMessengerCreateInfoEXT const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , flags( rhs.flags )
      , messageSeverity( rhs.messageSeverity )
      , messageType( rhs.messageType )
      , pfnUserCallback( rhs.pfnUserCallback )
      , pUserData( rhs.pUserData )
    {}

    DebugUtilsMessengerCreateInfoEXT & operator=( DebugUtilsMessengerCreateInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( DebugUtilsMessengerCreateInfoEXT ) - offsetof( DebugUtilsMessengerCreateInfoEXT, pNext ) );
      return *this;
    }

    DebugUtilsMessengerCreateInfoEXT( VkDebugUtilsMessengerCreateInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    DebugUtilsMessengerCreateInfoEXT& operator=( VkDebugUtilsMessengerCreateInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::DebugUtilsMessengerCreateInfoEXT const *>(&rhs);
      return *this;
    }

    DebugUtilsMessengerCreateInfoEXT & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    DebugUtilsMessengerCreateInfoEXT & setFlags( VULKAN_HPP_NAMESPACE::DebugUtilsMessengerCreateFlagsEXT flags_ ) VULKAN_HPP_NOEXCEPT
    {
      flags = flags_;
      return *this;
    }

    DebugUtilsMessengerCreateInfoEXT & setMessageSeverity( VULKAN_HPP_NAMESPACE::DebugUtilsMessageSeverityFlagsEXT messageSeverity_ ) VULKAN_HPP_NOEXCEPT
    {
      messageSeverity = messageSeverity_;
      return *this;
    }

    DebugUtilsMessengerCreateInfoEXT & setMessageType( VULKAN_HPP_NAMESPACE::DebugUtilsMessageTypeFlagsEXT messageType_ ) VULKAN_HPP_NOEXCEPT
    {
      messageType = messageType_;
      return *this;
    }

    DebugUtilsMessengerCreateInfoEXT & setPfnUserCallback( PFN_vkDebugUtilsMessengerCallbackEXT pfnUserCallback_ ) VULKAN_HPP_NOEXCEPT
    {
      pfnUserCallback = pfnUserCallback_;
      return *this;
    }

    DebugUtilsMessengerCreateInfoEXT & setPUserData( void* pUserData_ ) VULKAN_HPP_NOEXCEPT
    {
      pUserData = pUserData_;
      return *this;
    }

    operator VkDebugUtilsMessengerCreateInfoEXT const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkDebugUtilsMessengerCreateInfoEXT*>( this );
    }

    operator VkDebugUtilsMessengerCreateInfoEXT &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkDebugUtilsMessengerCreateInfoEXT*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( DebugUtilsMessengerCreateInfoEXT const& ) const = default;
#else
    bool operator==( DebugUtilsMessengerCreateInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( flags == rhs.flags )
          && ( messageSeverity == rhs.messageSeverity )
          && ( messageType == rhs.messageType )
          && ( pfnUserCallback == rhs.pfnUserCallback )
          && ( pUserData == rhs.pUserData );
    }

    bool operator!=( DebugUtilsMessengerCreateInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eDebugUtilsMessengerCreateInfoEXT;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::DebugUtilsMessengerCreateFlagsEXT flags = {};
    VULKAN_HPP_NAMESPACE::DebugUtilsMessageSeverityFlagsEXT messageSeverity = {};
    VULKAN_HPP_NAMESPACE::DebugUtilsMessageTypeFlagsEXT messageType = {};
    PFN_vkDebugUtilsMessengerCallbackEXT pfnUserCallback = {};
    void* pUserData = {};
  };
  static_assert( sizeof( DebugUtilsMessengerCreateInfoEXT ) == sizeof( VkDebugUtilsMessengerCreateInfoEXT ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<DebugUtilsMessengerCreateInfoEXT>::value, "struct wrapper is not a standard layout!" );

  struct DebugUtilsObjectTagInfoEXT
  {
    VULKAN_HPP_CONSTEXPR DebugUtilsObjectTagInfoEXT( VULKAN_HPP_NAMESPACE::ObjectType objectType_ = VULKAN_HPP_NAMESPACE::ObjectType::eUnknown,
                                                     uint64_t objectHandle_ = {},
                                                     uint64_t tagName_ = {},
                                                     size_t tagSize_ = {},
                                                     const void* pTag_ = {} ) VULKAN_HPP_NOEXCEPT
      : objectType( objectType_ )
      , objectHandle( objectHandle_ )
      , tagName( tagName_ )
      , tagSize( tagSize_ )
      , pTag( pTag_ )
    {}

    VULKAN_HPP_CONSTEXPR DebugUtilsObjectTagInfoEXT( DebugUtilsObjectTagInfoEXT const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , objectType( rhs.objectType )
      , objectHandle( rhs.objectHandle )
      , tagName( rhs.tagName )
      , tagSize( rhs.tagSize )
      , pTag( rhs.pTag )
    {}

    DebugUtilsObjectTagInfoEXT & operator=( DebugUtilsObjectTagInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( DebugUtilsObjectTagInfoEXT ) - offsetof( DebugUtilsObjectTagInfoEXT, pNext ) );
      return *this;
    }

    DebugUtilsObjectTagInfoEXT( VkDebugUtilsObjectTagInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    DebugUtilsObjectTagInfoEXT& operator=( VkDebugUtilsObjectTagInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::DebugUtilsObjectTagInfoEXT const *>(&rhs);
      return *this;
    }

    DebugUtilsObjectTagInfoEXT & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    DebugUtilsObjectTagInfoEXT & setObjectType( VULKAN_HPP_NAMESPACE::ObjectType objectType_ ) VULKAN_HPP_NOEXCEPT
    {
      objectType = objectType_;
      return *this;
    }

    DebugUtilsObjectTagInfoEXT & setObjectHandle( uint64_t objectHandle_ ) VULKAN_HPP_NOEXCEPT
    {
      objectHandle = objectHandle_;
      return *this;
    }

    DebugUtilsObjectTagInfoEXT & setTagName( uint64_t tagName_ ) VULKAN_HPP_NOEXCEPT
    {
      tagName = tagName_;
      return *this;
    }

    DebugUtilsObjectTagInfoEXT & setTagSize( size_t tagSize_ ) VULKAN_HPP_NOEXCEPT
    {
      tagSize = tagSize_;
      return *this;
    }

    DebugUtilsObjectTagInfoEXT & setPTag( const void* pTag_ ) VULKAN_HPP_NOEXCEPT
    {
      pTag = pTag_;
      return *this;
    }

    operator VkDebugUtilsObjectTagInfoEXT const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkDebugUtilsObjectTagInfoEXT*>( this );
    }

    operator VkDebugUtilsObjectTagInfoEXT &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkDebugUtilsObjectTagInfoEXT*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( DebugUtilsObjectTagInfoEXT const& ) const = default;
#else
    bool operator==( DebugUtilsObjectTagInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( objectType == rhs.objectType )
          && ( objectHandle == rhs.objectHandle )
          && ( tagName == rhs.tagName )
          && ( tagSize == rhs.tagSize )
          && ( pTag == rhs.pTag );
    }

    bool operator!=( DebugUtilsObjectTagInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eDebugUtilsObjectTagInfoEXT;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eUnknown;
    uint64_t objectHandle = {};
    uint64_t tagName = {};
    size_t tagSize = {};
    const void* pTag = {};
  };
  static_assert( sizeof( DebugUtilsObjectTagInfoEXT ) == sizeof( VkDebugUtilsObjectTagInfoEXT ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<DebugUtilsObjectTagInfoEXT>::value, "struct wrapper is not a standard layout!" );
} // namespace VULKAN_HPP_NAMESPACE