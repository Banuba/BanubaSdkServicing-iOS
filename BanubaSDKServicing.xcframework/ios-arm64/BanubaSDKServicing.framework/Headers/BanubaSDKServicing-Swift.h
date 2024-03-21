#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9.2 (swiftlang-5.9.2.2.56 clang-1500.1.0.2.5)
#ifndef BANUBASDKSERVICING_SWIFT_H
#define BANUBASDKSERVICING_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AVFoundation;
@import CoreFoundation;
@import CoreMedia;
@import CoreVideo;
@import Dispatch;
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="BanubaSDKServicing",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSURL;
@class PIPSwitchLayoutSetting;
@class PIPPlayerLayoutSetting;
@class PIPCameraLayoutSetting;

SWIFT_PROTOCOL("_TtP18BanubaSDKServicing15SDKPIPServicing_")
@protocol SDKPIPServicing
@property (nonatomic) BOOL isPIPSessionAlreadySetup;
@property (nonatomic) BOOL isPIPSession;
@property (nonatomic, readonly) BOOL isPIPPlayerReadyToProvideData;
@property (nonatomic, copy) NSURL * _Nullable pipVideoURL;
@property (nonatomic, strong) PIPSwitchLayoutSetting * _Nullable pipSwitchSetting;
@property (nonatomic, strong) PIPPlayerLayoutSetting * _Nullable pipPlayerSetting;
@property (nonatomic, strong) PIPCameraLayoutSetting * _Nullable pipCameraSetting;
- (void)seekPIPPlayerTo:(NSTimeInterval)time;
- (void)startPIPPlayer;
- (void)stopPIPPlayer;
- (void)setupPIPSessionWithVideoURL:(NSURL * _Nonnull)url playerSetting:(PIPPlayerLayoutSetting * _Nonnull)playerSetting cameraSetting:(PIPCameraLayoutSetting * _Nonnull)cameraSetting switchSetting:(PIPSwitchLayoutSetting * _Nonnull)switchSetting;
- (void)startPIPSessionIfNeededWithSetting:(PIPPlayerLayoutSetting * _Nonnull)setting completion:(void (^ _Nullable)(void))completion;
- (void)applyPIPCameraSettingIfNeeded:(PIPCameraLayoutSetting * _Nonnull)setting restoreSession:(BOOL)restoreSession;
- (void)applyPIPPlayerSettingIfNeeded:(PIPPlayerLayoutSetting * _Nonnull)setting restoreSession:(BOOL)restoreSession;
- (void)applyPIPSwitchSettingIfNeeded:(PIPSwitchLayoutSetting * _Nonnull)setting restoreSession:(BOOL)restoreSession;
- (void)setPIPPlayerVolume:(float)volume;
@end


SWIFT_PROTOCOL("_TtP18BanubaSDKServicing23SDKBeautyEffectManaging_")
@protocol SDKBeautyEffectManaging
@property (nonatomic) BOOL isBeautificationEnabled;
@property (nonatomic, readonly) BOOL supportsIntensity;
@property (nonatomic) double intensity;
- (BOOL)toggleBeautification SWIFT_WARN_UNUSED_RESULT;
- (void)resetIntensity;
@end

@class UIImage;
@class UIColor;
@class AVURLAsset;

SWIFT_PROTOCOL("_TtP18BanubaSDKServicing26SDKEffectsTextureServicing_")
@protocol SDKEffectsTextureServicing
- (void)effectAddImageTextureWithImage:(UIImage * _Nonnull)image backgroundColor:(UIColor * _Nonnull)backgroundColor;
- (void)setupDefaultImageTexture;
- (void)stopVideoTextureIfNeeded;
- (void)effectAddVideoTextureWithAsset:(AVURLAsset * _Nonnull)asset backgroundColor:(UIColor * _Nonnull)backgroundColor;
- (void)effectReloadTexturePreviewWithStartTime:(NSTimeInterval)startTime endTime:(NSTimeInterval)endTime itemDuration:(NSTimeInterval)itemDuration;
- (void)unloadEffectTexture;
@end

@class NSString;
@protocol RenderEffect;
@protocol EffectSubtypeModificationsEventListener;

SWIFT_PROTOCOL("_TtP18BanubaSDKServicing19SDKEffectsServicing_")
@protocol SDKEffectsServicing <SDKEffectsTextureServicing>
@property (nonatomic, readonly) BOOL isMaskLoaded;
- (void)loadMaskWithName:(NSString * _Nonnull)name synchronous:(BOOL)synchronous;
- (void)enableBlur;
- (void)effectDidBeginApplying;
- (void)effectDidEndApplying;
- (void)effectDidResetApplying;
- (void)effectDidChangeState;
- (void)unloadMask;
- (void)removeAllFilters;
- (void)applyFilter:(id <RenderEffect> _Nonnull)filter;
- (void)removeFilter:(id <RenderEffect> _Nonnull)filter;
- (void)setEffectSubtypeModificationsEventListener:(id <EffectSubtypeModificationsEventListener> _Nonnull)listener;
- (NSArray<NSString *> * _Nonnull)effectsPathsWithIncludeBeautyEffect:(BOOL)includeBeautyEffect SWIFT_WARN_UNUSED_RESULT;
@end

@class ExternalAudioConfiguration;
@class NSValue;

SWIFT_PROTOCOL("_TtP18BanubaSDKServicing18SDKOutputServicing_")
@protocol SDKOutputServicing
@property (nonatomic, readonly) BOOL isRecording;
@property (nonatomic, readonly) BOOL isEnoughDiskSpaceForRecording;
- (void)startVideoCapturingWithFileURL:(NSURL * _Nullable)fileURL startTimeForVideoTexture:(double)startTimeForVideoTexture externalAudioConfiguration:(ExternalAudioConfiguration * _Nullable)externalAudioConfiguration progress:(void (^ _Nonnull)(CMTime))progress didStart:(void (^ _Nullable)(void))didStart shouldSkipFrame:(BOOL (^ _Nullable)(void))shouldSkipFrame periodicProgressTimeInterval:(NSTimeInterval)periodicProgressTimeInterval boundaryTimes:(NSArray<NSValue *> * _Nonnull)boundaryTimes boundaryHandler:(void (^ _Nonnull)(CMTime))boundaryHandler totalDuration:(NSTimeInterval)totalDuration itemDuration:(NSTimeInterval)itemDuration completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
- (void)stopVideoCapturingWithCancel:(BOOL)cancel;
@end

enum CameraModuleSessionType : NSInteger;
@protocol SDKInputServicingDelegate;

SWIFT_PROTOCOL("_TtP18BanubaSDKServicing17SDKInputServicing_")
@protocol SDKInputServicing
@property (nonatomic, readonly) BOOL isFrontCamera;
@property (nonatomic, readonly) float zoomFactor;
@property (nonatomic, readonly) enum CameraModuleSessionType currentCameraSessionType;
@property (nonatomic, strong) id <SDKInputServicingDelegate> _Nullable inputDelegate;
- (void)focusAt:(CGPoint)point useContinuousDetection:(BOOL)useContinuousDetection;
- (float)setZoomFactor:(float)zoomFactor SWIFT_WARN_UNUSED_RESULT;
- (void)toggleCameraWithCompletion:(void (^ _Nonnull)(void))completion;
- (void)startCamera;
- (void)startAudioCapturing;
- (void)stopAudioCapturing;
- (void)setCameraSessionType:(enum CameraModuleSessionType)type;
- (enum AVCaptureTorchMode)setTorchWithMode:(enum AVCaptureTorchMode)mode;
- (enum AVCaptureTorchMode)toggleTorch SWIFT_WARN_UNUSED_RESULT;
@end

@class UIView;
@class NSAttributedString;

SWIFT_PROTOCOL("_TtP18BanubaSDKServicing12CameraModule_")
@protocol CameraModule <SDKBeautyEffectManaging, SDKEffectsServicing, SDKInputServicing, SDKOutputServicing, SDKPIPServicing>
@property (nonatomic, readonly) BOOL isLoaded;
@property (nonatomic) BOOL allowProcessing;
@property (nonatomic) BOOL autoStart;
@property (nonatomic) BOOL isCameraEnabled;
@property (nonatomic, readonly, strong) dispatch_queue_t _Nullable renderQueue;
- (void)setup;
- (void)setMaxFacesWithFacesCount:(int32_t)facesCount;
- (void)destroy;
- (void)startWithCompletion:(void (^ _Nonnull)(void))completion;
- (void)stopWithCompletion:(void (^ _Nullable)(void))completion;
- (void)setRenderTargetWithView:(UIView * _Nonnull)view;
- (void)removeRenderTarget;
- (void)takeSnapshotWithHandler:(void (^ _Nonnull)(UIImage * _Nullable))handler;
- (UIView * _Nonnull)getRendererView SWIFT_WARN_UNUSED_RESULT;
- (void)startRenderLoop;
- (void)stopRenderLoop;
- (void)addFPSListener:(void (^ _Nullable)(NSAttributedString * _Nonnull))listener;
@end

typedef SWIFT_ENUM(NSInteger, CameraModuleSessionType, open) {
  CameraModuleSessionTypeFrontVideo = 0,
  CameraModuleSessionTypeBackVideo = 1,
  CameraModuleSessionTypeFrontPhoto = 2,
  CameraModuleSessionTypeBackPhoto = 3,
};


SWIFT_CLASS("_TtC18BanubaSDKServicing11EffectModel")
@interface EffectModel : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP18BanubaSDKServicing39EffectSubtypeModificationsEventListener_")
@protocol EffectSubtypeModificationsEventListener
- (void)didChangeEffectSubtype:(NSString * _Nonnull)subtypeName;
- (void)didInitiateEffectSubtype:(NSString * _Nonnull)subtypeName;
@end


/// Setups adding external audio asset to result asset as audio track
SWIFT_CLASS("_TtC18BanubaSDKServicing26ExternalAudioConfiguration")
@interface ExternalAudioConfiguration : NSObject
/// Audio asset url
@property (nonatomic, readonly, copy) NSURL * _Nonnull url;
/// Offset inside audio asset
@property (nonatomic, readonly) NSTimeInterval offset;
/// Preferred audio track volume
@property (nonatomic, readonly) float preferredVolume;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum PIPCameraLayoutSettings : NSInteger;

SWIFT_CLASS("_TtC18BanubaSDKServicing22PIPCameraLayoutSetting")
@interface PIPCameraLayoutSetting : NSObject
@property (nonatomic, readonly) enum PIPCameraLayoutSettings setting;
- (nonnull instancetype)initWithSetting:(enum PIPCameraLayoutSettings)setting OBJC_DESIGNATED_INITIALIZER;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PIPCameraLayoutSetting * _Nonnull round;)
+ (PIPCameraLayoutSetting * _Nonnull)round SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PIPCameraLayoutSetting * _Nonnull square;)
+ (PIPCameraLayoutSetting * _Nonnull)square SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PIPCameraLayoutSetting * _Nonnull original;)
+ (PIPCameraLayoutSetting * _Nonnull)original SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PIPCameraLayoutSetting * _Nonnull centered;)
+ (PIPCameraLayoutSetting * _Nonnull)centered SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, PIPCameraLayoutSettings, open) {
  PIPCameraLayoutSettingsRound = 0,
  PIPCameraLayoutSettingsSquare = 1,
  PIPCameraLayoutSettingsOriginal = 2,
  PIPCameraLayoutSettingsCentered = 3,
};

enum PIPPlayerLayoutSettings : NSInteger;

SWIFT_CLASS("_TtC18BanubaSDKServicing22PIPPlayerLayoutSetting")
@interface PIPPlayerLayoutSetting : NSObject
@property (nonatomic, readonly) enum PIPPlayerLayoutSettings setting;
- (nonnull instancetype)initWithSetting:(enum PIPPlayerLayoutSettings)setting OBJC_DESIGNATED_INITIALIZER;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PIPPlayerLayoutSetting * _Nonnull floating;)
+ (PIPPlayerLayoutSetting * _Nonnull)floating SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PIPPlayerLayoutSetting * _Nonnull topBottom;)
+ (PIPPlayerLayoutSetting * _Nonnull)topBottom SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PIPPlayerLayoutSetting * _Nonnull react;)
+ (PIPPlayerLayoutSetting * _Nonnull)react SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PIPPlayerLayoutSetting * _Nonnull leftRight;)
+ (PIPPlayerLayoutSetting * _Nonnull)leftRight SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, PIPPlayerLayoutSettings, open) {
  PIPPlayerLayoutSettingsFloating = 0,
  PIPPlayerLayoutSettingsTopBottom = 1,
  PIPPlayerLayoutSettingsReact = 2,
  PIPPlayerLayoutSettingsLeftRight = 3,
};

typedef SWIFT_ENUM(NSInteger, PIPShapeAdapter, open) {
  PIPShapeAdapterNone = 0,
  PIPShapeAdapterOval = 1,
  PIPShapeAdapterCircle = 2,
  PIPShapeAdapterRoundRect = 3,
  PIPShapeAdapterRoundSquare = 4,
};


SWIFT_CLASS("_TtC18BanubaSDKServicing19PIPShapeTypeAdapter")
@interface PIPShapeTypeAdapter : NSObject
@property (nonatomic, readonly) enum PIPShapeAdapter setting;
@property (nonatomic, readonly) CGFloat radius;
- (nonnull instancetype)initWithSetting:(enum PIPShapeAdapter)setting radius:(CGFloat)radius OBJC_DESIGNATED_INITIALIZER;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PIPShapeTypeAdapter * _Nonnull none;)
+ (PIPShapeTypeAdapter * _Nonnull)none SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PIPShapeTypeAdapter * _Nonnull oval;)
+ (PIPShapeTypeAdapter * _Nonnull)oval SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PIPShapeTypeAdapter * _Nonnull circle;)
+ (PIPShapeTypeAdapter * _Nonnull)circle SWIFT_WARN_UNUSED_RESULT;
+ (PIPShapeTypeAdapter * _Nonnull)roundRectWithRadius:(CGFloat)radius SWIFT_WARN_UNUSED_RESULT;
+ (PIPShapeTypeAdapter * _Nonnull)roundSquareWithRadius:(CGFloat)radius SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum PIPSwitchLayoutSettings : NSInteger;

SWIFT_CLASS("_TtC18BanubaSDKServicing22PIPSwitchLayoutSetting")
@interface PIPSwitchLayoutSetting : NSObject
@property (nonatomic, readonly) enum PIPSwitchLayoutSettings setting;
- (nonnull instancetype)initWithSetting:(enum PIPSwitchLayoutSettings)setting OBJC_DESIGNATED_INITIALIZER;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PIPSwitchLayoutSetting * _Nonnull switchVerticallyUP;)
+ (PIPSwitchLayoutSetting * _Nonnull)switchVerticallyUP SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PIPSwitchLayoutSetting * _Nonnull switchVerticallyDown;)
+ (PIPSwitchLayoutSetting * _Nonnull)switchVerticallyDown SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PIPSwitchLayoutSetting * _Nonnull switchHorizontalRight;)
+ (PIPSwitchLayoutSetting * _Nonnull)switchHorizontalRight SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PIPSwitchLayoutSetting * _Nonnull switchHorizontalLeft;)
+ (PIPSwitchLayoutSetting * _Nonnull)switchHorizontalLeft SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PIPSwitchLayoutSetting * _Nonnull switchCameraPip;)
+ (PIPSwitchLayoutSetting * _Nonnull)switchCameraPip SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PIPSwitchLayoutSetting * _Nonnull switchVideoPip;)
+ (PIPSwitchLayoutSetting * _Nonnull)switchVideoPip SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, PIPSwitchLayoutSettings, open) {
  PIPSwitchLayoutSettingsSwitchVerticallyUP = 0,
  PIPSwitchLayoutSettingsSwitchVerticallyDown = 1,
  PIPSwitchLayoutSettingsSwitchHorizontalRight = 2,
  PIPSwitchLayoutSettingsSwitchHorizontalLeft = 3,
  PIPSwitchLayoutSettingsSwitchCameraPiP = 4,
  PIPSwitchLayoutSettingsSwitchVideoPiP = 5,
};

typedef SWIFT_ENUM(NSInteger, RenderBehaviorAdapter, open) {
  RenderBehaviorAdapterFullScreen = 0,
  RenderBehaviorAdapterVerticalSplitUp = 1,
  RenderBehaviorAdapterVerticalSplitDown = 2,
  RenderBehaviorAdapterHorizontalSplitLeft = 3,
  RenderBehaviorAdapterHorizontalSplitRight = 4,
  RenderBehaviorAdapterPip = 5,
};


SWIFT_PROTOCOL("_TtP18BanubaSDKServicing12RenderEffect_")
@protocol RenderEffect
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
@property (nonatomic, readonly) BOOL isLoaded;
@property (nonatomic) BOOL isActive;
- (void)load;
- (void)unload;
- (void)applyWithPixelBuffer:(CVPixelBufferRef _Nonnull)pixelBuffer;
@end






SWIFT_PROTOCOL("_TtP18BanubaSDKServicing25SDKInputServicingDelegate_")
@protocol SDKInputServicingDelegate
- (void)willOutputWithPixelBuffer:(CVPixelBufferRef _Nonnull)pixelBuffer;
@end


SWIFT_CLASS("_TtC18BanubaSDKServicing9SDKLogger")
@interface SDKLogger : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP18BanubaSDKServicing27SDKMaskPostprocessServicing_")
@protocol SDKMaskPostprocessServicing
- (void)processVideoFrame:(CVPixelBufferRef _Nonnull)from to:(CVPixelBufferRef _Nonnull)to time:(CMTime)time;
- (void)surfaceCreatedWith:(CGSize)size;
- (void)setEffectSize:(CGSize)size;
- (void)loadEffectWithPath:(NSString * _Nonnull)path;
@end



#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
