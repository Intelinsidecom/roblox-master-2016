#pragma once

// Do not include this file directly. Include simd/simd.h


#include "simd/simd_types.h"

#include <ppcintrinsics.h>

namespace RBX
{

namespace simd
{

//
// Scalar forming helpers
//
namespace details
{
    RBX_SIMD_INLINE vec4f_t splatPod( float s )
    {
        v4f_pod t;
        t.vector4_f32[ 0 ] = s;
        t.vector4_f32[ 1 ] = s;
        t.vector4_f32[ 2 ] = s;
        t.vector4_f32[ 3 ] = s;
        return t;
    }

    RBX_SIMD_INLINE vec4i_t splatPod( int32_t s )
    {
        v4i_pod t;
        t.vector4_u32[ 0 ] = static_cast< uint32_t >( s );
        t.vector4_u32[ 1 ] = static_cast< uint32_t >( s );
        t.vector4_u32[ 2 ] = static_cast< uint32_t >( s );
        t.vector4_u32[ 3 ] = static_cast< uint32_t >( s );
        return t;
    }

    RBX_SIMD_INLINE vec4u_t splatPod( uint32_t s )
    {
        v4u_pod t;
        t.vector4_u32[ 0 ] = s;
        t.vector4_u32[ 1 ] = s;
        t.vector4_u32[ 2 ] = s;
        t.vector4_u32[ 3 ] = s;
        return t;
    }

    RBX_SIMD_INLINE vec4f_t setSinglePod( float x )
    {
        v4f_pod t;
        t.vector4_f32[ 0 ] = x;
        t.vector4_f32[ 1 ] = 0.0f;
        t.vector4_f32[ 2 ] = 0.0f;
        t.vector4_f32[ 3 ] = 0.0f;
        return t;
    }

    RBX_SIMD_INLINE vec4i_t setSinglePod( int32_t x )
    {
        v4i_pod t;
        t.vector4_u32[ 0 ] = static_cast< uint32_t >( x );
        t.vector4_u32[ 1 ] = 0;
        t.vector4_u32[ 2 ] = 0;
        t.vector4_u32[ 3 ] = 0;
        return t;
    }

    RBX_SIMD_INLINE vec4u_t setSinglePod( uint32_t x )
    {
        v4u_pod t;
        t.vector4_u32[ 0 ] = x;
        t.vector4_u32[ 1 ] = 0;
        t.vector4_u32[ 2 ] = 0;
        t.vector4_u32[ 3 ] = 0;
        return t;
    }

    // Word masks used by select-style primitives
    // {-1,-1,0,0}: words 0 and 1 set
    RBX_SIMD_INLINE vec4f_t maskWords01()
    {
        return __vsldoi( __vspltisw( -1 ), __vspltisw( 0 ), 8 );
    }

    // {0,0,-1,-1}: words 2 and 3 set
    RBX_SIMD_INLINE vec4f_t maskWords23()
    {
        return __vsldoi( __vspltisw( 0 ), __vspltisw( -1 ), 8 );
    }
}

//
// Vector Loading
//
namespace details
{
    RBX_SIMD_INLINE v4f::pod_t load( const float* s )
    {
        return __lvx( s, 0 );
    }

    RBX_SIMD_INLINE v4i::pod_t load( const int32_t* s )
    {
        return __lvx( s, 0 );
    }

    RBX_SIMD_INLINE v4u::pod_t load( const uint32_t* s )
    {
        return __lvx( s, 0 );
    }

    RBX_SIMD_INLINE v4f::pod_t loadUnaligned( const float* s )
    {
        return __vor( __lvlx( s, 0 ), __lvrx( s, 16 ) );
    }

    RBX_SIMD_INLINE v4i::pod_t loadUnaligned( const int32_t* s )
    {
        return __vor( __lvlx( s, 0 ), __lvrx( s, 16 ) );
    }

    RBX_SIMD_INLINE v4u::pod_t loadUnaligned( const uint32_t* s )
    {
        return __vor( __lvlx( s, 0 ), __lvrx( s, 16 ) );
    }

    RBX_SIMD_INLINE v4f::pod_t loadSingle( const float* s )
    {
        return setSinglePod( *s );
    }

    RBX_SIMD_INLINE v4i::pod_t loadSingle( const int32_t* s )
    {
        return setSinglePod( *s );
    }

    RBX_SIMD_INLINE v4u::pod_t loadSingle( const uint32_t* s )
    {
        return setSinglePod( *s );
    }

    RBX_SIMD_INLINE v4f::pod_t loadSplat( const float* s )
    {
        return splatPod( *s );
    }

    RBX_SIMD_INLINE v4i::pod_t loadSplat( const int32_t* s )
    {
        return splatPod( *s );
    }

    RBX_SIMD_INLINE v4u::pod_t loadSplat( const uint32_t* s )
    {
        return splatPod( *s );
    }
}
template< class ScalarType >
RBX_SIMD_INLINE v4< ScalarType > load( const ScalarType* s )
{
    RBX_SIMD_ALIGN_ASSERT( s, 16 );
    v4< ScalarType > r;
    r.v = details::load( s );
    return r;
}

template< class ScalarType >
RBX_SIMD_INLINE v4< ScalarType > loadUnaligned( const ScalarType* s )
{
    RBX_SIMD_ALIGN_ASSERT( s, 16 );
    v4< ScalarType > r;
    r.v = details::loadUnaligned( s );
    return r;
}

template< class ScalarType >
RBX_SIMD_INLINE v4< ScalarType > loadSingle( const ScalarType* s )
{
    v4< ScalarType > r;
    r.v = details::loadSingle( s );
    return r;
}

template< class ScalarType >
RBX_SIMD_INLINE v4< ScalarType > loadSplat( const ScalarType* s )
{
    v4< ScalarType > r;
    r.v = details::loadSplat( s );
    return r;
}

RBX_SIMD_INLINE v4f load3( const float* value )
{
    details::vec4f_t x = details::setSinglePod( value[ 0 ] );
    details::vec4f_t y = details::setSinglePod( value[ 1 ] );
    details::vec4f_t z = details::setSinglePod( value[ 2 ] );
    details::vec4f_t xz = __vmrghw( x, z );
    v4f r;
    r.v = __vmrghw( xz, y );
    return r;
}

//
// Storing
//
namespace details
{
    RBX_SIMD_INLINE void store( float* dst, vec4f_t v )
    {
        __stvx( v, dst, 0 );
    }

    RBX_SIMD_INLINE void store( int32_t* dst, vec4i_t v )
    {
        __stvx( v, dst, 0 );
    }

    RBX_SIMD_INLINE void store( uint32_t* dst, vec4u_t v )
    {
        __stvx( v, dst, 0 );
    }

    RBX_SIMD_INLINE void storeUnaligned( float* dst, vec4f_t v )
    {
        __stvlx( v, dst, 0 );
        __stvrx( v, dst, 16 );
    }

    RBX_SIMD_INLINE void storeUnaligned( int32_t* dst, vec4i_t v )
    {
        __stvlx( v, dst, 0 );
        __stvrx( v, dst, 16 );
    }

    RBX_SIMD_INLINE void storeUnaligned( uint32_t* dst, vec4u_t v )
    {
        __stvlx( v, dst, 0 );
        __stvrx( v, dst, 16 );
    }

    // Reads lane 0 without converting the bit pattern
    RBX_SIMD_INLINE void storeSingle( float* dst, vec4f_t v )
    {
        *dst = v.vector4_f32[ 0 ];
    }

    RBX_SIMD_INLINE void storeSingle( int32_t* dst, vec4i_t v )
    {
        *dst = static_cast< int32_t >( v.vector4_u32[ 0 ] );
    }

    RBX_SIMD_INLINE void storeSingle( uint32_t* dst, vec4u_t v )
    {
        *dst = v.vector4_u32[ 0 ];
    }
}

template< class ScalarType >
RBX_SIMD_INLINE void store( ScalarType* dst, const v4< ScalarType >& v )
{
    RBX_SIMD_ALIGN_ASSERT( dst, 16 );
    details::store( dst, v.v );
}

template< class ScalarType >
RBX_SIMD_INLINE void storeUnaligned( ScalarType* dst, const v4< ScalarType >& v )
{
    details::storeUnaligned( dst, v.v );
}

template< class ScalarType >
RBX_SIMD_INLINE void storeSingle( ScalarType* dst, const v4< ScalarType >& v )
{
    details::storeSingle( dst, v.v );
}

//
// Vector Forming
//
RBX_SIMD_INLINE v4f zerof()
{
    v4f r;
    r.v = __vspltisw( 0 );
    return r;
}

namespace details
{
    RBX_SIMD_INLINE vec4f_t splat( float s )
    {
        return splatPod( s );
    }

    RBX_SIMD_INLINE vec4i_t splat( int32_t s )
    {
        return splatPod( s );
    }

    RBX_SIMD_INLINE vec4u_t splat( uint32_t s )
    {
        return splatPod( s );
    }
}

template< class ScalarType >
RBX_SIMD_INLINE v4< ScalarType > splat( ScalarType s )
{
    v4< ScalarType > r;
    r.v = details::splat( s );
    return r;
}

namespace details
{
    RBX_SIMD_INLINE vec4f_t form( float x, float y, float z, float w )
    {
        v4f_pod t;
        t.vector4_f32[ 0 ] = x;
        t.vector4_f32[ 1 ] = y;
        t.vector4_f32[ 2 ] = z;
        t.vector4_f32[ 3 ] = w;
        return t;
    }

    RBX_SIMD_INLINE vec4i_t form( int32_t x, int32_t y, int32_t z, int32_t w )
    {
        v4i_pod t;
        t.vector4_u32[ 0 ] = static_cast< uint32_t >( x );
        t.vector4_u32[ 1 ] = static_cast< uint32_t >( y );
        t.vector4_u32[ 2 ] = static_cast< uint32_t >( z );
        t.vector4_u32[ 3 ] = static_cast< uint32_t >( w );
        return t;
    }

    RBX_SIMD_INLINE vec4u_t form( uint32_t x, uint32_t y, uint32_t z, uint32_t w )
    {
        v4u_pod t;
        t.vector4_u32[ 0 ] = x;
        t.vector4_u32[ 1 ] = y;
        t.vector4_u32[ 2 ] = z;
        t.vector4_u32[ 3 ] = w;
        return t;
    }

    RBX_SIMD_INLINE vec4f_t setSingle( float x )
    {
        return setSinglePod( x );
    }

    RBX_SIMD_INLINE vec4i_t setSingle( int32_t x )
    {
        return setSinglePod( x );
    }

    RBX_SIMD_INLINE vec4u_t setSingle( uint32_t x )
    {
        return setSinglePod( x );
    }
}

template< class ScalarType >
RBX_SIMD_INLINE v4< ScalarType > form( ScalarType x, ScalarType y, ScalarType z, ScalarType w )
{
    v4< ScalarType > r;
    r.v = details::form(x,y,z,w);
    return r;
}

template< class ScalarType >
RBX_SIMD_INLINE v4< ScalarType > form( ScalarType x, ScalarType y, ScalarType z )
{
    v4< ScalarType > r;
    r.v = zipLow( zipLow( v4< ScalarType >( details::setSingle(x) ), v4< ScalarType >( details::setSingle(z) ) ), v4< ScalarType >( details::setSingle(y) ) );
    return r;
}

template< class ScalarType >
RBX_SIMD_INLINE v4< ScalarType > form( ScalarType x, ScalarType y )
{
    v4< ScalarType > r;
    r.v = zipLow( v4< ScalarType >( details::setSingle(x) ), v4< ScalarType >( details::setSingle(y) ) );
    return r;
}

//
// Insert / extract
//
template< class VectorType >
RBX_SIMD_INLINE typename VectorType::elem_t extractSlow( const VectorType& _v, uint32_t _i )
{
    union
    {
        typename VectorType::pod_t v;
        typename VectorType::elem_t el[ 4 ];
    };

    v = _v.v;
    return el[ _i ];
}

//
// Casts: cast one type to the other preserving the bit representation
// On VMX all three pod types are the same underlying __vector4
//
RBX_SIMD_INLINE v4i reinterpretAsInt( v4fArg v )
{
    v4i r;
    r.v = v.v;
    return r;
}

RBX_SIMD_INLINE v4u reinterpretAsUInt( v4fArg v )
{
    v4u r;
    r.v = v.v;
    return r;
}

RBX_SIMD_INLINE v4f reinterpretAsFloat( v4iArg v )
{
    v4f r;
    r.v = v.v;
    return r;
}

RBX_SIMD_INLINE v4f reinterpretAsFloat( v4uArg v )
{
    v4f r;
    r.v = v.v;
    return r;
}

RBX_SIMD_INLINE v4u reinterpretAsUInt( v4iArg v )
{
    v4u r;
    r.v = v.v;
    return r;
}

RBX_SIMD_INLINE v4i reinterpretAsInt( v4uArg v )
{
    v4i r;
    r.v = v.v;
    return r;
}

//
// Conversions: convert float to int and int to float
//
RBX_SIMD_INLINE v4i convertFloat2IntNearest( v4fArg v )
{
    v4i r;
    r.v = __vctsxs( v.v, 0 );
    return r;
}

RBX_SIMD_INLINE v4i convertFloat2IntTruncate( v4fArg v )
{
    v4i r;
    r.v = __vctsxs( __vrfiz( v.v ), 0 );
    return r;
}

RBX_SIMD_INLINE v4f convertIntToFloat( v4iArg v )
{
    v4f r;
    r.v = __vcfsx( v.v, 0 );
    return r;
}

//
// Splat
//
template< unsigned i, class VectorType >
RBX_SIMD_INLINE VectorType splat( const VectorType& v )
{
    VectorType r;
    r.v = __vspltw( v.v, i & 0x3 );
    return r;
}

//
// Selects
//
template< uint32_t a, uint32_t b, uint32_t c, uint32_t d >
RBX_SIMD_INLINE v4u selectMask()
{
    v4u r;
    r.v = details::form( -(boost::int32_t)( a & 0x1 ), -(boost::int32_t)( b & 0x1 ), -(boost::int32_t)( c & 0x1 ), -(boost::int32_t)( d & 0x1 ) );
    return r;
}

template<>
RBX_SIMD_INLINE v4f select( const v4f& a, const v4f& b, const v4u& mask )
{
    v4f r;
    r.v = __vsel( a.v, b.v, mask.v );
    return r;
}

template<>
RBX_SIMD_INLINE v4u select( const v4u& a, const v4u& b, const v4u& mask )
{
    v4u r;
    r.v = __vsel( a.v, b.v, mask.v );
    return r;
}

template<>
RBX_SIMD_INLINE v4i select( const v4i& a, const v4i& b, const v4u& mask )
{
    v4i r;
    r.v = __vsel( a.v, b.v, mask.v );
    return r;
}

namespace details
{
    // Two-source word shuffle: r = { u[a], u[b], v[c], v[d] }
    template< int a, int b, int c, int d >
    RBX_SIMD_INLINE vec4f_t shuffle( vec4f_t u, vec4f_t v )
    {
        vec4f_t fromU = __vpermwi( u, VPERMWI_CONST( a & 0x3, b & 0x3, c & 0x3, d & 0x3 ) );
        vec4f_t fromV = __vpermwi( v, VPERMWI_CONST( a & 0x3, b & 0x3, c & 0x3, d & 0x3 ) );
        // words 0,1 from u-permute; words 2,3 from v-permute
        return __vsel( fromU, fromV, maskWords23() );
    }
}

template< uint32_t a, uint32_t b, uint32_t c, uint32_t d, class VectorType >
RBX_SIMD_INLINE VectorType shuffle( const VectorType& u, const VectorType& v )
{
    VectorType r;
    r.v = details::shuffle< a, b, c, d >( u.v, v.v );
    return r;
}

namespace details
{
    RBX_SIMD_INLINE vec4f_t unpackLow( vec4f_t u, vec4f_t v )
    {
        return __vmrghw( u, v );
    }

    RBX_SIMD_INLINE vec4f_t unpackHigh( vec4f_t u, vec4f_t v )
    {
        return __vmrglw( u, v );
    }
}

template< class VectorType >
RBX_SIMD_INLINE VectorType zipLow( const VectorType& u, const VectorType& v )
{
    VectorType r;
    r.v = details::unpackLow( u.v, v.v );
    return r;
}

template< class VectorType >
RBX_SIMD_INLINE VectorType zipHigh( const VectorType& u, const VectorType& v )
{
    VectorType r;
    r.v = details::unpackHigh( u.v, v.v );
    return r;
}

template< class VectorType >
RBX_SIMD_INLINE void zip( VectorType& r0, VectorType& r1, const VectorType& u, const VectorType& v )
{
    r0.v = details::unpackLow( u.v, v.v );
    r1.v = details::unpackHigh( u.v, v.v );
}

namespace details
{
    // r = { u[2], u[3], v[2], v[3] }
    RBX_SIMD_INLINE vec4f_t moveHighLow( vec4f_t u, vec4f_t v )
    {
        vec4f_t uHighRotated = __vsldoi( u, u, 8 );
        return __vsel( uHighRotated, v, maskWords23() );
    }

    // r = { u[0], u[1], v[0], v[1] }
    RBX_SIMD_INLINE vec4f_t moveLowHigh( vec4f_t u, vec4f_t v )
    {
        return __vsel( u, v, maskWords23() );
    }
}

template< class VectorType >
RBX_SIMD_INLINE VectorType moveHighLow( const VectorType& u, const VectorType& v )
{
    VectorType r;
    r.v = details::moveHighLow( u.v, v.v );
    return r;
}

template< class VectorType >
RBX_SIMD_INLINE VectorType moveLowHigh( const VectorType& u, const VectorType& v )
{
    VectorType r;
    r.v = details::moveLowHigh( u.v, v.v );
    return r;
}

namespace details
{
    // r = { b[0], a[1], a[2], a[3] }
    RBX_SIMD_INLINE vec4f_t replaceFirst( vec4f_t a, vec4f_t b )
    {
        vec4f_t b0 = __vpermwi( b, VPERMWI_CONST( 0, 0, 0, 0 ) );
        return __vsel( a, b0, maskWords01() );
    }

    template< class VectorType >
    RBX_SIMD_INLINE VectorType replaceFirst( const VectorType& a, const VectorType& b )
    {
        VectorType r;
        r.v = details::replaceFirst( a.v, b.v );
        return r;
    }
}

namespace details
{
    template< class T, uint32_t a, uint32_t b, uint32_t c, uint32_t d >
    struct SelectHelper
    {
        static RBX_SIMD_INLINE T select( const T& u, const T& v );
    };

    template< class T >
    struct SelectHelper< T, 0,0,0,0 >
    {
        static RBX_SIMD_INLINE T select( const T& u, const T& v )
        {
            return u;
        }
    };

    template< class T >
    struct SelectHelper< T, 1,1,1,1 >
    {
        static RBX_SIMD_INLINE T select( const T& u, const T& v )
        {
            return v;
        }
    };

    template< class T >
    struct SelectHelper< T, 1,0,0,0 >
    {
        static RBX_SIMD_INLINE T select( const T& u, const T& v )
        {
            return details::replaceFirst( u, v );
        }
    };

    template< class T >
    struct SelectHelper< T, 0,1,1,1 >
    {
        static RBX_SIMD_INLINE T select( const T& u, const T& v )
        {
            return details::replaceFirst( v, u );
        }
    };

    template< class T >
    struct SelectHelper< T, 0,1,0,0 >
    {
        static RBX_SIMD_INLINE T select( const T& u, const T& v )
        {
            T u0v1v2v3 = details::replaceFirst( v, u );
            return shuffle< 0, 1, 2, 3 >( u0v1v2v3, u );
        }
    };

    template< class T >
    struct SelectHelper< T, 1,0,1,1 >
    {
        static RBX_SIMD_INLINE T select( const T& u, const T& v )
        {
            return SelectHelper<T, 0, 1, 0, 0 >::select( v, u );
        }
    };

    template< class T >
    struct SelectHelper< T, 0,0,1,0 >
    {
        static RBX_SIMD_INLINE T select( const T& u, const T& v )
        {
            T t = moveHighLow( u, v );
            return shuffle< 0, 1, 0, 3 >( u, t );
        }
    };

    template< class T >
    struct SelectHelper< T, 1,1,0,1 >
    {
        static RBX_SIMD_INLINE T select( const T& u, const T& v )
        {
            return SelectHelper<T, 0, 0, 1, 0 >::select( v, u );
        }
    };

    template< class T >
    struct SelectHelper< T, 0,0,0,1 >
    {
        static RBX_SIMD_INLINE T select( const T& u, const T& v )
        {
            T t = moveHighLow( u, v );
            return shuffle< 0, 1, 2, 1 >( u, t );
        }
    };

    template< class T >
    struct SelectHelper< T, 1,1,1,0 >
    {
        static RBX_SIMD_INLINE T select( const T& u, const T& v )
        {
            return SelectHelper<T, 0, 0, 0, 1 >::select( v, u );
        }
    };

    template< class T >
    struct SelectHelper< T, 0,0,1,1 >
    {
        static RBX_SIMD_INLINE T select( const T& u, const T& v )
        {
            return shuffle< 0, 1, 2, 3 >( u, v );
        }
    };

    template< class T >
    struct SelectHelper< T, 1,1,0,0 >
    {
        static RBX_SIMD_INLINE T select( const T& u, const T& v )
        {
            return SelectHelper<T, 0, 0, 1, 1 >::select( v, u );
        }
    };

    template< class T >
    struct SelectHelper< T, 0,1,0,1 >
    {
        static RBX_SIMD_INLINE T select( const T& u, const T& v )
        {
            T t = shuffle< 0, 2, 1, 3 >( u, v );
            return shuffle< 0, 2, 1, 3 >( t, t );
        }
    };

    template< class T >
    struct SelectHelper< T, 1,0,1,0 >
    {
        static RBX_SIMD_INLINE T select( const T& u, const T& v )
        {
            return SelectHelper<T, 0, 1, 0, 1 >::select( v, u );
        }
    };

    template< class T >
    struct SelectHelper< T, 1,0,0,1 >
    {
        static RBX_SIMD_INLINE T select( const T& u, const T& v )
        {
            T t = shuffle< 1, 2, 0, 3 >( u, v );
            return shuffle< 2, 0, 1, 3 >( t, t );
        }
    };

    template< class T >
    struct SelectHelper< T, 0,1,1,0 >
    {
        static RBX_SIMD_INLINE T select( const T& u, const T& v )
        {
            return SelectHelper<T, 1, 0, 0, 1 >::select( v, u );
        }
    };
}

template< uint32_t a, uint32_t b, uint32_t c, uint32_t d, class VectorType >
RBX_SIMD_INLINE VectorType select( const VectorType& u, const VectorType& v )
{
    return details::SelectHelper< VectorType, a, b, c, d >::select( u, v );
}

template< uint32_t index, class VectorType >
RBX_SIMD_INLINE VectorType replace( const VectorType& a, const VectorType& b )
{
    BOOST_STATIC_ASSERT_MSG( ( index & 0x3 ) == index, "index must be between 0 and 3" );
    return select< index == 0, index == 1, index == 2, index == 3 >( a, b );
}

//
// Permutes
//
template< uint32_t a, uint32_t b, uint32_t c, uint32_t d, class VectorType >
RBX_SIMD_INLINE VectorType permute( const VectorType& u )
{
    VectorType r;
    r.v = __vpermwi( u.v, VPERMWI_CONST( a & 0x3, b & 0x3, c & 0x3, d & 0x3 ) );
    return r;
}

template< uint32_t offset, class VectorType >
RBX_SIMD_INLINE VectorType rotateLeft( const VectorType& v )
{
    return permute< offset % 4, ( offset + 1 ) % 4, ( offset + 2 ) % 4, ( offset + 3 ) % 4 >( v );
}

//
// Compares
//
RBX_SIMD_INLINE v4u compareGreater( v4fArg a, v4fArg b )
{
    v4u r;
    r.v = __vcmpgtfp( a.v, b.v );
    return r;
}

RBX_SIMD_INLINE v4u operator>( v4fArg a, v4fArg b )
{
    v4u r;
    r.v = __vcmpgtfp( a.v, b.v );
    return r;
}

RBX_SIMD_INLINE v4u compareGreaterEqual( v4fArg a, v4fArg b )
{
    v4u r;
    r.v = __vcmpgefp( a.v, b.v );
    return r;
}

RBX_SIMD_INLINE v4u operator>=( v4fArg a, v4fArg b )
{
    v4u r;
    r.v = __vcmpgefp( a.v, b.v );
    return r;
}

RBX_SIMD_INLINE v4u compareLess( v4fArg a, v4fArg b )
{
    // No less-than compare on VMX: swap operands
    v4u r;
    r.v = __vcmpgtfp( b.v, a.v );
    return r;
}

RBX_SIMD_INLINE v4u operator<( v4fArg a, v4fArg b )
{
    v4u r;
    r.v = __vcmpgtfp( b.v, a.v );
    return r;
}

RBX_SIMD_INLINE v4u compareLessEqual( v4fArg a, v4fArg b )
{
    v4u r;
    r.v = __vcmpgefp( b.v, a.v );
    return r;
}

RBX_SIMD_INLINE v4u operator<=( v4fArg a, v4fArg b )
{
    v4u r;
    r.v = __vcmpgefp( b.v, a.v );
    return r;
}

RBX_SIMD_INLINE v4u compare( v4fArg a, v4fArg b )
{
    v4u r;
    r.v = __vcmpeqfp( a.v, b.v );
    return r;
}

RBX_SIMD_INLINE v4u operator==( v4fArg a, v4fArg b )
{
    v4u r;
    r.v = __vcmpeqfp( a.v, b.v );
    return r;
}

RBX_SIMD_INLINE v4u operator!=( v4fArg a, v4fArg b )
{
    v4u r;
    r.v = __vnor( __vcmpeqfp( a.v, b.v ), __vcmpeqfp( a.v, b.v ) );
    return r;
}

RBX_SIMD_INLINE v4u compare( v4iArg a, v4iArg b )
{
    v4u r;
    r.v = __vcmpequw( a.v, b.v );
    return r;
}

RBX_SIMD_INLINE v4u operator==( v4iArg a, v4iArg b )
{
    v4u r;
    r.v = __vcmpequw( a.v, b.v );
    return r;
}

RBX_SIMD_INLINE v4u operator!=( v4iArg a, v4iArg b )
{
    v4u r;
    r.v = __vnor( __vcmpequw( a.v, b.v ), __vcmpequw( a.v, b.v ) );
    return r;
}

RBX_SIMD_INLINE v4u compare( v4uArg a, v4uArg b )
{
    v4u r;
    r.v = __vcmpequw( a.v, b.v );
    return r;
}

RBX_SIMD_INLINE v4u operator==( v4uArg a, v4uArg b )
{
    v4u r;
    r.v = __vcmpequw( a.v, b.v );
    return r;
}

RBX_SIMD_INLINE v4u operator!=( v4uArg a, v4uArg b )
{
    v4u r;
    r.v = __vnor( __vcmpequw( a.v, b.v ), __vcmpequw( a.v, b.v ) );
    return r;
}

//
// Set element to 0
//
template< uint32_t a >
RBX_SIMD_INLINE v4f replaceWithZero( v4fArg v )
{
    BOOST_STATIC_ASSERT_MSG( ( a & 0x3 ) == a, "a must be between 0 and 3" );
    v4u mask = selectMask< a == 0, a == 1, a == 2, a == 3 >();
    v4f r;
    r.v = __vandc( v.v, mask.v );
    return r;
}

template< uint32_t a >
RBX_SIMD_INLINE v4i replaceWithZero( v4iArg v )
{
    BOOST_STATIC_ASSERT_MSG( ( a & 0x3 ) == a, "a must be between 0 and 3" );
    v4u mask = selectMask< a == 0, a == 1, a == 2, a == 3 >();
    v4i r;
    r.v = __vandc( v.v, mask.v );
    return r;
}

template< uint32_t a >
RBX_SIMD_INLINE v4u replaceWithZero( v4uArg v )
{
    BOOST_STATIC_ASSERT_MSG( ( a & 0x3 ) == a, "a must be between 0 and 3" );
    v4u mask = selectMask< a == 0, a == 1, a == 2, a == 3 >();
    v4u r;
    r.v = __vandc( v.v, mask.v );
    return r;
}

//
// Float Arithmetics
//
RBX_SIMD_INLINE v4f operator+( v4fArg a, v4fArg b )
{
    v4f r;
    r.v = __vaddfp( a.v, b.v );
    return r;
}

RBX_SIMD_INLINE v4f& operator+=( v4f& a, v4fArg b )
{
    a.v = __vaddfp( a.v, b.v );
    return a;
}

RBX_SIMD_INLINE v4f operator-( v4fArg a, v4fArg b )
{
    v4f r;
    r.v = __vsubfp( a.v, b.v );
    return r;
}

RBX_SIMD_INLINE v4f& operator-=( v4f& a, v4fArg b )
{
    a.v = __vsubfp( a.v, b.v );
    return a;
}

RBX_SIMD_INLINE v4f operator*( v4fArg a, v4fArg b )
{
    v4f r;
    r.v = __vmulfp( a.v, b.v );
    return r;
}

RBX_SIMD_INLINE v4f& operator*=( v4f& a, v4fArg b )
{
    a.v = __vmulfp( a.v, b.v );
    return a;
}

RBX_SIMD_INLINE v4f mulAdd( v4fArg a, v4fArg b, v4fArg c )
{
    // r = a + b * c
    v4f r;
    r.v = __vmaddfp( b.v, c.v, a.v );
    return r;
}

RBX_SIMD_INLINE v4f operator-( v4fArg a )
{
    v4f r;
    r.v = __vsubfp( __vspltisw( 0 ), a.v );
    return r;
}

namespace details
{
    // Full precision reciprocal via __vrefp plus two Newton-Raphson iterations
    // Note: unlike IEEE division this produces NaN instead of +/-inf for a
    // denominator of zero; constraint solving always divides by positive masses
    RBX_SIMD_INLINE v4f reciprocalRefined( v4fArg b )
    {
        v4f estimate = v4f( __vrefp( b.v ) );
        estimate = estimate * ( simd::splat( 2.0f ) - b * estimate );
        estimate = estimate * ( simd::splat( 2.0f ) - b * estimate );
        return estimate;
    }
}

RBX_SIMD_INLINE v4f operator/( v4fArg a, v4fArg b )
{
    return a * details::reciprocalRefined( b );
}

RBX_SIMD_INLINE v4f& operator/=( v4f& a, v4fArg b )
{
    a = a * details::reciprocalRefined( b );
    return a;
}

RBX_SIMD_INLINE v4f abs( v4fArg a )
{
    v4f signMask = splat( uint32_t( 0x80000000 ) );
    v4f r;
    r.v = __vandc( a.v, signMask.v );
    return r;
}

RBX_SIMD_INLINE v4f max( v4fArg a, v4fArg b )
{
    v4f r;
    r.v = __vmaxfp( a.v, b.v );
    return r;
}

RBX_SIMD_INLINE v4f min( v4fArg a, v4fArg b )
{
    v4f r;
    r.v = __vminfp( a.v, b.v );
    return r;
}

//
// Estimates
//
RBX_SIMD_INLINE v4f inverseEstimate0( v4fArg a )
{
    return v4f( __vrefp( a.v ) );
}

RBX_SIMD_INLINE v4f inverseEstimate0Fast( v4fArg a )
{
    return inverseEstimate0( a );
}

namespace details
{
    using namespace simd;
    RBX_SIMD_INLINE v4f inverseEstimateIteration(const v4f& a, const v4f& estimate)
    {
        return estimate * ( simd::splat( 2.0f ) - a * estimate );
    }
}

RBX_SIMD_INLINE v4f inverseEstimate1Fast( v4fArg a )
{
    v4f estimate = inverseEstimate0Fast( a );
    return details::inverseEstimateIteration( a, estimate );
}

RBX_SIMD_INLINE v4f inverseEstimate1( v4fArg a )
{
    v4f estimate = inverseEstimate0Fast( a );
    v4f estimate1 = details::inverseEstimateIteration(a, estimate);

    // Handle denorms
    estimate1 = select( estimate, estimate1, abs( estimate1 ) < splat( std::numeric_limits< float >::infinity() ) );

    // Handle infinities
    v4f signedZero = v4f( __vand( a.v, splat( -0.0f ).v ) );
    return select( estimate1, signedZero, abs( a ) == splat( std::numeric_limits< float >::infinity() ) );
}

RBX_SIMD_INLINE v4f smallestInvertible( )
{
    return splat( std::numeric_limits< float >::min() );
}

RBX_SIMD_INLINE v4f largestInvertible( )
{
    return splat( 8.50705867e+37f );
}

namespace details
{
    RBX_SIMD_INLINE v4f inverseSqrtIteration( const v4f& v, const v4f& estimate )
    {
        return ( estimate * ( simd::splat( 1.5f ) - ( ( simd::splat( 0.5f ) * estimate ) * ( v * estimate ) ) ) );
    }
}

RBX_SIMD_INLINE v4f inverseSqrtEstimate0Fast( v4fArg a )
{
    v4f r;
    r.v = __vrsqrtefp( a.v );
    return r;
}

RBX_SIMD_INLINE v4f inverseSqrtEstimate0( v4fArg a )
{
    v4f r;
    r.v = __vrsqrtefp( a.v );
    // Correcting for the fact that negative inputs produce garbage
    return select( r, splat( std::numeric_limits< float >::quiet_NaN() ), a < zerof() );
}

RBX_SIMD_INLINE v4f inverseSqrtEstimate1Fast( v4fArg a )
{
    v4f estimate = inverseSqrtEstimate0( a );
    estimate = details::inverseSqrtIteration( a, estimate );
    return estimate;
}

RBX_SIMD_INLINE v4f inverseSqrtEstimate1( v4fArg a )
{
    v4f estimate = inverseSqrtEstimate0( a );
    v4f estimate1 = details::inverseSqrtIteration( a, estimate );

    // Handle small values
    estimate1 = select( estimate, estimate1, abs( estimate1 ) < splat( std::numeric_limits< float >::infinity() ) );

    // Correcting for negative inputs producing garbage
    return select( estimate1, splat( std::numeric_limits< float >::quiet_NaN() ), a < zerof() );
}

RBX_SIMD_INLINE v4f smallestSqrtInvertible( )
{
    return splat( 1.17549435e-38f );
}

RBX_SIMD_INLINE v4f largestSqrtInvertible( )
{
    return splat( std::numeric_limits< float >::max() );
}

//
// Inter-element vector ops
//
RBX_SIMD_INLINE v4f dotProduct( v4fArg a, v4fArg b )
{
    v4f r;
    // VMX128 multiply-sum: every lane of the result receives the full 4-element dot product
    r.v = __vmsum4fp( a.v, b.v );
    return r;
}

RBX_SIMD_INLINE v4f dotProduct3( v4fArg a, v4fArg b )
{
    v4f t = a * b;
    t = replaceWithZero< 3 >( t );
    t = t + permute< 1, 0, 3, 2 >( t );
    t = t + permute< 2, 2, 0, 0 >( t );
    return t;
}

RBX_SIMD_INLINE v4f sumAcross( v4fArg a )
{
    v4f t = a;
    t = t + permute< 1, 0, 3, 2 >( t );
    t = t + permute< 2, 2, 0, 0 >( t );
    return t;
}

RBX_SIMD_INLINE v4f sumAcross2( v4fArg a, v4fArg b )
{
    v4f a0b0a1b1 = zipLow( a, b );
    v4f a1b1a1b1 = moveHighLow( a0b0a1b1, a0b0a1b1 );
    return a0b0a1b1 + a1b1a1b1;
}

RBX_SIMD_INLINE v4f sumAcross3( v4fArg a, v4fArg b )
{
    v4f a0b0a1b1 = zipLow( a, b );
    v4f a1b1a1b1 = moveHighLow( a0b0a1b1, a0b0a1b1 );
    v4f a2b2a3b3 = zipHigh( a, b );
    return ( a0b0a1b1 + a1b1a1b1 ) + a2b2a3b3;
}

RBX_SIMD_INLINE v4f sumAcross4( v4fArg a, v4fArg b )
{
    v4f a0b0a1b1 = zipLow( a, b );
    v4f a1b1xxxx = moveHighLow( a0b0a1b1, a0b0a1b1 );
    v4f a2b2a3b3 = zipHigh( a, b );
    v4f a3b3xxxx = moveHighLow( a2b2a3b3, a2b2a3b3 );
    return ( a0b0a1b1 + a1b1xxxx ) + ( a2b2a3b3 + a3b3xxxx );
}

//
// Packing / unpacking
//
template< class T >
RBX_SIMD_INLINE void pack3( typename T::pod_t* __restrict p, const T& a, const T& b, const T& c, const T& d )
{
    T t0 = shuffle< 1,2,0,1 >( a, b );
    T t1 = shuffle< 1,2,0,1 >( b, c );
    T t2 = shuffle< 1,2,0,1 >( c, d );
    p[0] = shuffle< 0,1,1,2 >( a, t0 );
    p[1] = t1;
    p[2] = shuffle< 1,2,1,2 >( t2, d );
}

template< class T >
RBX_SIMD_INLINE void unpack3( T& a, T& b, T& c, T& d, const typename T::pod_t* p )
{
    a = p[0];
    b = replace< 0 >( rotateLeft< 3 >( (T)p[1] ), splat< 3 >( (T)p[0] ) );
    c = replace< 2 >( rotateLeft< 2 >( (T)p[1] ), splat< 0 >( (T)p[2] ) );
    d = rotateLeft< 1 >( (T)p[2] );
}

}
}
